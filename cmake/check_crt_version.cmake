# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

function(check_crt_version)
    include(expected_crt_version)

    file(READ "${aws-crt-cpp_SOURCE_DIR}/VERSION" CRT_SIMPLE_VERSION)
    string(STRIP ${CRT_SIMPLE_VERSION} CRT_SIMPLE_VERSION)
    string(REPLACE "." ";" CRT_SIMPLE_VERSION ${CRT_SIMPLE_VERSION})
    list(GET CRT_SIMPLE_VERSION 0 CRT_VERSION_MAJOR)
    list(GET CRT_SIMPLE_VERSION 1 CRT_VERSION_MINOR)
    list(GET CRT_SIMPLE_VERSION 2 CRT_VERSION_PATCH)

    if(EXPECTED_CRT_VERSION_MAJOR EQUAL CRT_VERSION_MAJOR AND
       EXPECTED_CRT_VERSION_MINOR EQUAL CRT_VERSION_MINOR AND
       EXPECTED_CRT_VERSION_PATCH EQUAL CRT_VERSION_PATCH)
        message(TRACE "AWS-CRT-CPP version matches the expected")
    else()
        message(FATAL_ERROR "AWS-CRT-CPP version mismatch detected!\n"
        "Expected: ${EXPECTED_CRT_VERSION_MAJOR}.${EXPECTED_CRT_VERSION_MINOR}.${EXPECTED_CRT_VERSION_PATCH}, "
        "Found: ${CRT_VERSION_MAJOR}.${CRT_VERSION_MINOR}.${CRT_VERSION_PATCH}\n"
        "Please use \"git pull --recurse-submodules\" to git pull and update the CRT submodule.\n"
        "Or disable this check with \"-DENABLE_CRT_VERSION_CHECK=OFF\"")
    endif ()

endfunction(check_crt_version)