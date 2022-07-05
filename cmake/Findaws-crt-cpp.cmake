# This is a temporary mock file to be able to test our current build setup.
# The file will later be read from aws-crt-cpp installation
include_guard()
message(WARNING "aws-crt-cpp package is mocked for testing of experimental feature branch. Remove this file when CRT starts providing it.")
# Setting include path to the submodule temporarily to unblock testing
# To make it build the crt submodule needs to be in-source build before calling this so generated files are created.
# Removing this work around soon, working in parallel in making aws-crt-cpp consumable by normal means

set(aws-crt-cpp_INCLUDE_DIRS ${CMAKE_INSTALL_PREFIX}/include PARENT_SCOPE)
set(aws-crt-cpp_LIB_DIRS ${CMAKE_INSTALL_PREFIX}/lib PARENT_SCOPE)


