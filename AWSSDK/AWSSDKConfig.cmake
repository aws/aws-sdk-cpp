# When using AWSSDK package, users need to identify the installation root dir
# by setting up variable as set(AWSSDK_ROOT_DIR, "<path/to/dir>")
# In Windows this is like C:/Progra~1/AWSSDK/
# In Unix like system this is like /usr/local/

# The cmake files will all be in <prefix>/lib/cmake dir
# The hearders will all be in <prefix>/include dir

# The libraries will all be in <prefix>/lib dir
# The binaries will all be in <prefix>/bin dir
# The archives will all be in <prefix>/lib dir if target is shared, otherwise will be in <prefix>/bin dir.

# If the compile time option SIMPLE_INSTALL is turned off
# users also need to set variable as set(AWSSDK_PLATFORM_PREFIX, "<linux/intel64/config>")

unset(AWSSDK_FOUND CACHE)

# Compute the default installation root relative to this file.
# from xx/lib/cmake/AWSSDK/xx.cmake to xx/
get_filename_component(AWSSDK_DEFAULT_ROOT_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(AWSSDK_DEFAULT_ROOT_DIR "${AWSSDK_DEFAULT_ROOT_DIR}" PATH)
get_filename_component(AWSSDK_DEFAULT_ROOT_DIR "${AWSSDK_DEFAULT_ROOT_DIR}" PATH)
get_filename_component(AWSSDK_DEFAULT_ROOT_DIR "${AWSSDK_DEFAULT_ROOT_DIR}" PATH)
if(AWSSDK_DEFAULT_ROOT_DIR STREQUAL "/")
  set(AWSSDK_DEFAULT_ROOT_DIR "")
endif()

# currently AWSSDK_ROOT_DIR is either empty or user specified
if (AWSSDK_ROOT_DIR)
    find_file(AWSSDK_CORE_HEADER_FILE Aws.h
            "${AWSSDK_ROOT_DIR}/include/aws/core")
else()
    find_file(AWSSDK_CORE_HEADER_FILE Aws.h
        "/usr/include/aws/core"
        "/usr/local/include/aws/core"
        "C:/Progra~1/AWSSDK/include/aws/core"
        "${AWSSDK_DEFAULT_ROOT_DIR}/include/aws/core"
    )
endif()

if (NOT AWSSDK_CORE_HEADER_FILE)
    Message(FATAL_ERROR "AWSSDK is missing, install it first")
endif()

# based on core header file path, inspects the actual AWSSDK_ROOT_DIR
get_filename_component(AWSSDK_ROOT_DIR "${AWSSDK_CORE_HEADER_FILE}" PATH)
get_filename_component(AWSSDK_ROOT_DIR "${AWSSDK_ROOT_DIR}" PATH)
get_filename_component(AWSSDK_ROOT_DIR "${AWSSDK_ROOT_DIR}" PATH)
get_filename_component(AWSSDK_ROOT_DIR "${AWSSDK_ROOT_DIR}" PATH)

if (NOT AWSSDK_ROOT_DIR)
    Message(FATAL_ERROR "AWSSDK core header file is
            ${AWSSDK_CORE_HEADER_FILE}, but after retrieving, AWSSDK_ROOT_DIR
            becomes empty")
endif()

if (AWSSDK_PLATFORM_PREFIX)
    find_library(AWSSDK_CORE_LIB_FILE aws-cpp-sdk-core
            "${AWSSDK_ROOT_DIR}/lib/${AWSSDK_PLATFORM_PREFIX}"
            NO_DEFAULT_PATH
            )
else()
    find_library(AWSSDK_CORE_LIB_FILE aws-cpp-sdk-core
            "${AWSSDK_ROOT_DIR}/lib")
endif()

if (NOT AWSSDK_CORE_LIB_FILE)
    Message(FATAL_ERROR "AWSSDK header of core exists, but libray is missing")
endif()

# based on AWSSDK_CORE_LIB_FILE path, inspects the actual AWSSDK_PLATFROM_PREFIX
get_filename_component(TEMP_PATH "${AWSSDK_CORE_LIB_FILE}" PATH)
get_filename_component(TEMP_NAME "${TEMP_PATH}" NAME)

while (NOT TEMP_NAME STREQUAL "lib")
    set(TEMP_PLATFORM_PREFIX "${TEMP_NAME}/${TEMP_PLATFORM_PREFIX}")
    get_filename_component(TEMP_PATH "${TEMP_PATH}" PATH) 
    get_filename_component(TEMP_NAME "${TEMP_PATH}" NAME)
endwhile()

set(AWSSDK_PLATFORM_PREFIX "${TEMP_PLATFORM_PREFIX}")

include(${CMAKE_CURRENT_LIST_DIR}/AWSSDKConfigVersion.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/sdksCommon.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/platformDeps.cmake)

SET(AWSSDK_FOUND "1")
set(AWSSDK_INCLUDE_DIR "${AWSSDK_DEFAULT_ROOT_DIR}/include")
set(AWSSDK_CMAKE_DIR "${AWSSDK_DEFAULT_ROOT_DIR}/lib/cmake")
set(AWSSDK_LIB_DIR "${AWSSDK_DEFAULT_ROOT_DIR}/lib/${AWSSDK_PLATFORM_PREFIX}")
set(AWSSDK_BIN_DIR "${AWSSDK_DEFAULT_ROOT_DIR}/bin/${AWSSDK_PLATFORM_PREFIX}")


if (PLATFORM_DEPS)
	set(AWSSDK_PLATFORM_DEPS "${PLATFORM_DEPS}")
endif()

if (CRYPTO_LIBS)
	set(AWSSDK_PLATFORM_DEPS "${AWSSDK_PLATFORM_DEPS}" "${CRYPTO_LIBS}")
endif()

if (CLIENT_LIBS)
	set(AWSSDK_PLATFORM_DEPS "${AWSSDK_PLATFORM_DEPS}" "${CLIEND_LIBS}")
endif()

if (ADDITIONAL_LIBS)
	set(AWSSDK_PLATFORM_DEPS "${AWSSDK_PLATFORM_DEPS}" "${ADDITIONAL_LIBS}")
endif()

Message(STATUS "Find AWSSDK, Version: ${PACKAGE_VERSION}, install Root:${AWSSDK_ROOT_DIR}, Platform prefix:${AWSSDK_PLATFORM_PREFIX}, Platform Dependent Libraries: ${AWSSDK_PLATFORM_DEPS}")


# copy libs of services in SERVICE_LIST and all there dependent libs to DEST_DIR
# CONFIG denote copy release or debug version
macro(AWSSDK_CPY_DYN_LIBS SERVICE_LIST CONFIG DEST_DIR)
    set(ALL_SERVICES "core")

    foreach(SVC IN LISTS ${SERVICE_LIST})
        list(APPEND ALL_SERVICES ${SVC})
        get_dependencies_for_sdk(${SVC} DEPENDENCY_LIST)
        if (DEPENDENCY_LIST)
            STRING(REPLACE "," ";" LIST_RESULT ${DEPENDENCY_LIST})
            list(APPEND ALL_SERVICES ${LIST_RESULT})
        endif()
        unset(DEPENDENCY_LIST CACHE)
    endforeach()
    list(REMOVE_DUPLICATES ALL_SERVICES)

    foreach(SVC IN LISTS ALL_SERVICES)
        find_library(LIB_PATH "aws-cpp-sdk-${SVC}" "${AWSSDK_LIB_DIR}/${CONFIG}")
        if (NOT LIB_PATH)
            Message(FATAL_ERROR "Couldn't find library aws-cpp-sdk-${SVC}")
        endif()
        execute_process(COMMAND cp ${LIB_PATH} ${DEST_DIR})
        unset(LIB_PATH CACHE)
    endforeach()
endmacro(AWSSDK_CPY_DYN_LIBS)

# output link libs command to OUTPUT_VAR which required by all services from SERVCE_LIST
macro(AWSSDK_DETERMINE_LIBS_TO_LINK SERVICE_LIST OUTPUT_VAR)
#
#
#
endmacro(AWSSDK_DETERMINE_LIBS_TO_LINK)

# output high level lib dependencies such as for transfter; sqs; dynamodb etc.
macro(AWSSDK_LIB_DEPS HIGH_LEVEL_LIB_NAME OUTPUT_VAR)
    get_dependencies_for_sdk(${HIGH_LEVEL_LIB_NAME} DEPENDENCY_LIST)
    if (DEPENDENCY_LIST)
        STRING(REPLACE "," ";" ${OUTPUT_VAR} ${DEPENDENCY_LIST})
        list(APPEND ALL_SERVICES ${LIST_RESULT})
    endif()
    list(APPEND ${OUTPUT_VAR} "core")
    list(REMOVE_DUPLICATES ${OUTPUT_VAR})
endmacro(AWSSDK_LIB_DEPS)
