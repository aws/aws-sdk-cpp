# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#
# fetch_dependencies.cmake - FetchContent-based dependency management for aws-sdk-cpp.
# Replaces the git submodule requirement for aws-crt-cpp.
#
# Behavior (matching design doc):
#   By default, FetchContent is used to provide a known working build configuration.
#   Set USE_INSTALLED_CRT=ON to use a pre-installed CRT via find_package instead.

include_guard(GLOBAL)
include(FetchContent)

# Pin to exact commit SHA for supply chain security (corresponds to v0.38.6)
set(AWS_CRT_CPP_VERSION "bd19f640464f22b666660fe724531a6819f80c25" CACHE STRING "aws-crt-cpp commit SHA to fetch")

option(USE_INSTALLED_CRT
    "Use a pre-installed aws-crt-cpp via find_package instead of building from source" OFF)

function(aws_sdk_fetch_dependencies)
    if(USE_INSTALLED_CRT)
        find_package(aws-crt-cpp REQUIRED)
        message(STATUS "Using pre-installed aws-crt-cpp via find_package.")
        return()
    endif()

    # Check if the git submodule is already populated — use it to avoid re-downloading
    if(EXISTS "${CMAKE_SOURCE_DIR}/crt/aws-crt-cpp/CMakeLists.txt")
        message(STATUS "Using aws-crt-cpp from crt/aws-crt-cpp submodule directory.")
        set(BUILD_TESTING_PREV ${BUILD_TESTING})
        set(BUILD_TESTING OFF CACHE BOOL "" FORCE)
        add_subdirectory("${CMAKE_SOURCE_DIR}/crt/aws-crt-cpp" "${CMAKE_BINARY_DIR}/_deps/aws-crt-cpp-build")
        set(BUILD_TESTING ${BUILD_TESTING_PREV} CACHE BOOL "" FORCE)
        return()
    endif()

    # FetchContent — download at configure time (default path)
    message(STATUS "Fetching aws-crt-cpp ${AWS_CRT_CPP_VERSION} via FetchContent...")
    FetchContent_Declare(
        aws-crt-cpp
        GIT_REPOSITORY https://github.com/awslabs/aws-crt-cpp.git
        GIT_TAG        ${AWS_CRT_CPP_VERSION}
        GIT_SUBMODULES_RECURSE TRUE
    )

    set(BUILD_TESTING_PREV ${BUILD_TESTING})
    set(BUILD_TESTING OFF CACHE BOOL "" FORCE)

    FetchContent_MakeAvailable(aws-crt-cpp)

    set(BUILD_TESTING ${BUILD_TESTING_PREV} CACHE BOOL "" FORCE)
endfunction()
