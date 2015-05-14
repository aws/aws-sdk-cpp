cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-identity-management)

file(GLOB AWS_IDENTITY_PROVIDER_HEADERS
    "include/aws/identity-management/auth/*.h"
)

file(GLOB AWS_IDENTITY_PROVIDER_SOURCE
    "source/auth/*.cpp"
)

file(GLOB IDENTITY_MGMT_SRC
  ${AWS_IDENTITY_PROVIDER_HEADERS}
  ${AWS_IDENTITY_PROVIDER_SOURCE}
)

set(IDENTITY_MGMT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-cognito-identity/include/"
    "${CORE_DIR}/include/"
  )

include_directories(${IDENTITY_MGMT_INCLUDES})

if(NOT MSVC)
  add_definitions(-std=c++11)
endif()

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

add_library(aws-cpp-sdk-identity-management ${LIBTYPE} ${IDENTITY_MGMT_SRC})
target_link_libraries(aws-cpp-sdk-identity-management aws-cpp-sdk-cognito-identity)
