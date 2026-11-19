# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#

set(SCHEMA_FUZZTEST_GIT_TAG "305251260059201f842e5de6bb10e7b73efb1a6e" CACHE STRING "google/fuzztest commit used by ENABLE_SCHEMA_FUZZ_TESTS")
option(SCHEMA_FUZZ_UNIT_SANITIZERS "Build the non-fuzzing (unit mode) schema fuzz tests with ASan and UBSan" ON)

# Must run before the CRT and core are defined so fuzzing mode instruments them.
macro(setup_schema_fuzz_tests)
    if (NOT CMAKE_SYSTEM_NAME STREQUAL "Linux")
        message(FATAL_ERROR "ENABLE_SCHEMA_FUZZ_TESTS requires Linux (use tools/scripts/run_fuzz.sh)")
    endif ()
    if (NOT CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
        message(FATAL_ERROR "ENABLE_SCHEMA_FUZZ_TESTS requires Clang; got ${CMAKE_CXX_COMPILER_ID}")
    endif ()
    if (BUILD_SHARED_LIBS)
        message(FATAL_ERROR "ENABLE_SCHEMA_FUZZ_TESTS requires -DBUILD_SHARED_LIBS=OFF")
    endif ()
    if (ENABLE_TESTING)
        message(FATAL_ERROR "ENABLE_SCHEMA_FUZZ_TESTS cannot be combined with ENABLE_TESTING: the vendored gtest and FuzzTest's gtest collide. Use -DENABLE_TESTING=OFF")
    endif ()
    if (CMAKE_VERSION VERSION_LESS 3.25)
        message(FATAL_ERROR "ENABLE_SCHEMA_FUZZ_TESTS requires CMake >= 3.25 (FuzzTest, FetchContent SYSTEM)")
    endif ()

    include(FetchContent)
    FetchContent_Declare(fuzztest
            GIT_REPOSITORY https://github.com/google/fuzztest.git
            GIT_TAG ${SCHEMA_FUZZTEST_GIT_TAG}
            # Keeps FuzzTest and Abseil headers out of the SDK warning set.
            SYSTEM)
    FetchContent_MakeAvailable(fuzztest)

    fuzztest_setup_fuzzing_flags()
    if (FUZZTEST_FUZZING_MODE)
        # -fno-jump-tables: on AArch64, switch lookup tables of __sancov_cntrs pointers built after SanitizerCoverage
        # land outside COMDAT groups and fail to link with "defined in discarded section".
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-omit-frame-pointer -fno-jump-tables")
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fno-omit-frame-pointer -fno-jump-tables")
    endif ()
endmacro()

function(add_schema_fuzz_tests)
    add_subdirectory(${CMAKE_SOURCE_DIR}/tests/fuzz ${CMAKE_BINARY_DIR}/tests/fuzz)
endfunction()
