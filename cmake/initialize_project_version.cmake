if(GIT_FOUND)
    execute_process(COMMAND ${GIT_EXECUTABLE} describe --abbrev=0 --tags
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    OUTPUT_VARIABLE VERSION_STRING
    OUTPUT_STRIP_TRAILING_WHITESPACE)
endif()

if(NOT VERSION_STRING)
    # extract it from the existing generated header file
    file(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/aws-cpp-sdk-core/include/aws/core/VersionConfig.h" __SDK_VERSION_LINE LIMIT_COUNT 1 REGEX "AWS_SDK_VERSION_STRING.*[0-9]+\\.[0-9]+\\.[0-9]+" )
    string( REGEX MATCH "([0-9]+\\.[0-9]+\\.[0-9]+)" VERSION_STRING "${__SDK_VERSION_LINE}" )
endif()

set(PROJECT_VERSION "${VERSION_STRING}")

message(STATUS "Building project version: ${PROJECT_VERSION}")

macro(add_project name description)
    set(PROJECT_NAME "${name}")
    set(PROJECT_STRING    "${name}_${PROJECT_VERSION}")
    set(PROJECT_TARNAME   "${name}-${PROJECT_VERSION}")
    set(PROJECT_BUGREPORT "https://github.com/aws/aws-sdk-cpp/issues/")
    set(PROJECT_DESCRIPTION "${description}")
    set(PROJECT_LIBS "")
    foreach(library_var ${ARGN})
        list(APPEND PROJECT_LIBS "${library_var}")
    endforeach()

    cmake_policy(SET CMP0028 NEW)
    cmake_policy(SET CMP0048 NEW)
    cmake_policy(SET CMP0054 NEW)
    cmake_policy(SET CMP0056 NEW)

    project(${name} VERSION "${PROJECT_VERSION}" LANGUAGES CXX)

endmacro()
