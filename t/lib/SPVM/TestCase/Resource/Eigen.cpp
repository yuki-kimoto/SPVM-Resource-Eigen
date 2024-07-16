#include "spvm_native.h"

extern "C" {

int32_t SPVM__TestCase__Resource__Eigen__test(SPVM_ENV* env, SPVM_VALUE* stack) {
  
  stack[0].ival = 1;
  
  return 0;
}

}
