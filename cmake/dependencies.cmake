# Project dependencies http library (curl or OS), tinyxml2, cJSON, ssl (open or other), CRT
find_package(CURL REQUIRED)
find_package(ZLIB REQUIRED)
find_package(OpenSSL REQUIRED COMPONENTS Crypto)
pkg_check_modules(tinyxml2 REQUIRED IMPORTED_TARGET tinyxml2>=9.0.0)
pkg_check_modules(CJSON REQUIRED IMPORTED_TARGET libcjson>=1.7.15)
message(STATUS "Checking for aws-crt-cpp version 0.18.2")
find_package(aws-crt-cpp 0.18.2 EXACT REQUIRED)
message(STATUS "  Found aws-crt-cpp version ${aws-crt-cpp_VERSION}")
# Infer dirs and libs temporarily from aws-crt-cpp_DIR until they get shipped in the new CRT version.
set(aws-crt-cpp_INCLUDE_DIR "${aws-crt-cpp_DIR}/../../../include")
set(aws-crt-cpp_INCLUDE_DIRS "${aws-crt-cpp_DIR}/../../../include")
set(aws-crt-cpp_LIBRARY_DIRS "${aws-crt-cpp_DIR}/../..")
set(aws-crt-cpp_LIBRARIES aws-crt-cpp aws-c-common aws-c-event-stream aws-c-mqtt aws-c-s3 aws-c-auth aws-c-sdkutils aws-c-http aws-c-compression aws-c-io s2n aws-checksums aws-c-common aws-c-cal)
set(aws-crt-cpp_LIBRARY_DIRS "${aws-crt-cpp_DIR}/..")

if (BUILD_TESTING)
    message(STATUS "Building tests")
    # Testing dependency
    find_package(GTest 1.11 REQUIRED)
    include(GoogleTest) # for gtest_discover_tests()
endif ()
