export ARCH=arm
export CROSS_COMPILER='/home/maurice/core/build/out-glibc/sysroots/x86_64-linux/usr/bin/arm-angstrom-linux-gnueabi/arm-angstrom-linux-gnueabi'
cmake -DCMAKE_BUILD_TYPE=Release -DTARGET_ARCH=LINUX  -DCMAKE_C_FLAGS='-mfloat-abi=hard -L/home/maurice/aws-sdk-cpp/testing-resources ' -DCMAKE_C_COMPILER=${CROSS_COMPILER}-gcc -DCMAKE_CXX_COMPILER=${CROSS_COMPILER}-g++ -DCMAKE_CXX_FLAGS='-mfloat-abi=hard -L/home/maurice/aws-sdk-cpp/testing-resources ' .
export CPATH=/home/maurice/aws-sdk-cpp/testing-resources/include
export C_LIBRARY_PATH=/home/maurice/aws-sdk-cpp/testing-resources
export CXX_LIBRARY_PATH=/home/maurice/aws-sdk-cpp/testing-resources
make


