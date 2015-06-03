cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-logging)

file(GLOB LOGGING_HEADERS
    "include/aws/logging/*.h"
)

file(GLOB S3_LOGGING_SOURCE
     "source/logging/*.cpp"
 )

if(MSVC)
    source_group("Header Files\\aws\\logging" FILES ${LOGGING_HEADERS})

    source_group("Source Files\\logging" FILES ${S3_LOGGING_SOURCE})
endif()

file(GLOB LOGGING_SRC
  ${LOGGING_HEADERS}
  ${S3_LOGGING_SOURCE}
)

set(LOGGING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3/include/"
    "${CORE_DIR}/include/"
  )

include_directories(${LOGGING_INCLUDES})

if(NOT MSVC)
  add_definitions(-std=c++11)
endif()

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_LOGGING_EXPORTS")
endif()

add_library(aws-cpp-sdk-logging ${LIBTYPE} ${LOGGING_SRC})
target_link_libraries(aws-cpp-sdk-logging aws-cpp-sdk-s3)
