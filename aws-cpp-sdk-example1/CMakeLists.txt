cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-example1)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

  file(GLOB AWS_EXAMPLE1_SRC
  "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
  )

  file(GLOB AWS_EXAMPLE1_HEADERS
  "${CMAKE_CURRENT_SOURCE_DIR}/*.h"
  )

  file(GLOB AWS_EXAMPLE1_FILES
    ${AWS_EXAMPLE1_SRC}
    ${AWS_EXAMPLE1_HEADERS}
  )

if(NOT MSVC)
  add_definitions(-std=c++0x)
endif()


set(AWS_EXAMPLE1_APPLICATION_INCLUDES
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-cognito-identity/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-dynamodb/include/"
  "${CMAKE_CURRENT_SOURCE_DIR}/"
)

project(${PROJECT_NAME})

include_directories(${AWS_EXAMPLE1_APPLICATION_INCLUDES})

add_executable(runExample1 ${AWS_EXAMPLE1_FILES})
target_link_libraries(runExample1 aws-cpp-sdk-dynamodb aws-cpp-sdk-cognito-identity)
copyDlls(runExample1 aws-cpp-sdk-core aws-cpp-sdk-dynamodb aws-cpp-sdk-cognito-identity)

