# This is a temporary mock file to be able to test our current build setup.
# The file will later be read from aws-crt-cpp installation
include_guard()
message(WARNING "aws-crt-cpp package is mocked for testing of experimental feature branch. Remove this file when CRT starts providing it.")
# Setting include path to the submodule temporarily to unblock testing
# To make it build the crt submodule needs to be in-source build before calling this so generated files are created.
# Removing this work around soon, working in parallel in making aws-crt-cpp consumable by normal means
set(aws-crt-cpp_INCLUDE_DIRS
        ${CMAKE_CURRENT_LIST_DIR}/../crt/aws-crt-cpp/include
        ${CMAKE_CURRENT_LIST_DIR}/../crt/aws-crt-cpp/crt/aws-c-common/include
        ${CMAKE_CURRENT_LIST_DIR}/../crt/aws-crt-cpp/crt/aws-c-io/include
        ${CMAKE_CURRENT_LIST_DIR}/../crt/aws-crt-cpp/crt/aws-c-mqtt/include
        ${CMAKE_CURRENT_LIST_DIR}/../crt/aws-crt-cpp/crt/aws-c-cal/include
        ${CMAKE_CURRENT_LIST_DIR}/../crt/aws-crt-cpp/crt/aws-c-auth/include
        ${CMAKE_CURRENT_LIST_DIR}/../crt/aws-crt-cpp/crt/aws-c-http/include
        ${CMAKE_CURRENT_LIST_DIR}/../crt/aws-crt-cpp/crt/aws-c-event-stream/include
        ${CMAKE_CURRENT_LIST_DIR}/../crt/aws-crt-cpp/crt/aws-checksums/include
        ${CMAKE_CURRENT_LIST_DIR}/../crt/aws-crt-cpp/crt/aws-c-common/generated/include
        PARENT_SCOPE
        )

