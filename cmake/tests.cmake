# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#

function(add_protocol_tests)
    set(PROTOCOL_TESTS_LOG "")
    # Add test clients, which are just like a regular SDK client, but must not be installed.
    file(GLOB subdirs LIST_DIRECTORIES true "${CMAKE_SOURCE_DIR}/generated/protocol-tests/test-clients/*")
    foreach(subdir ${subdirs})
        if(EXISTS "${subdir}/CMakeLists.txt")
            add_subdirectory(${subdir} EXCLUDE_FROM_ALL)
        endif()
    endforeach()

    # Add tests
    file(GLOB protoTestTypes LIST_DIRECTORIES true "${CMAKE_SOURCE_DIR}/generated/protocol-tests/tests/*")
    foreach(protoTestType ${protoTestTypes})
        file(GLOB subdirs LIST_DIRECTORIES true ${protoTestType}/*)
        foreach(subdir ${subdirs})
            if(EXISTS "${subdir}/CMakeLists.txt")
                add_subdirectory(${subdir})

                get_filename_component(testGroup ${protoTestType} NAME)
                get_filename_component(testName ${subdir} NAME)
                list(APPEND PROTOCOL_TESTS_LOG "${testGroup}/${testName}")
            endif()
        endforeach()
    endforeach()

    message(STATUS "Protocol tests: ${PROTOCOL_TESTS_LOG}")
endfunction()

if (ENABLE_PROTOCOL_TESTS)
    add_protocol_tests()
endif ()