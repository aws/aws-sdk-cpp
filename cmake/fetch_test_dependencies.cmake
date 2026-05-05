# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#
# fetch_test_dependencies.cmake - FetchContent-based test dependency management.
# Provides googletest via FetchContent, gated behind AWS_SDK_ENABLE_TESTING.

include_guard(GLOBAL)

if(NOT AWS_SDK_ENABLE_TESTING)
    return()
endif()

include(FetchContent)

set(AWS_SDK_GTEST_VERSION "v1.14.0" CACHE STRING "googletest version tag to fetch")

option(AWS_SDK_USE_INSTALLED_GTEST
    "Use a pre-installed googletest via find_package instead of FetchContent" OFF)

function(aws_sdk_fetch_test_dependencies)
    if(AWS_SDK_USE_INSTALLED_GTEST)
        find_package(GTest REQUIRED)
        message(STATUS "Using pre-installed googletest via find_package.")
        return()
    endif()

    message(STATUS "Fetching googletest ${AWS_SDK_GTEST_VERSION} via FetchContent...")
    FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        ${AWS_SDK_GTEST_VERSION}
        GIT_SHALLOW    TRUE
    )

    # For Windows: Prevent overriding the parent project's compiler/linker settings
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

    # Don't install gtest alongside the SDK
    set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)

    FetchContent_MakeAvailable(googletest)

    message(STATUS "googletest: available (GTest::gtest, GTest::gtest_main, GTest::gmock)")
endfunction()
