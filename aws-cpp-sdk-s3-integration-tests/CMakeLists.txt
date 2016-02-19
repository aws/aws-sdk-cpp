cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-s3-integration-tests)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

  file(GLOB AWS_S3_SRC
  "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
  )

  file(GLOB AWS_S3_INTEGRATION_TESTS_SRC
    ${AWS_S3_SRC}
  )

set(AWS_S3_INTEGRATION_TEST_APPLICATION_INCLUDES
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3/include/"
  "${AWS_NATIVE_SDK_ROOT}/testing-resources/include/"
)

project(${PROJECT_NAME})

include_directories(${AWS_S3_INTEGRATION_TEST_APPLICATION_INCLUDES})
add_definitions(-DRESOURCES_DIR="${CMAKE_CURRENT_SOURCE_DIR}/resources")

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()
enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(runS3IntegrationTests ${LIBTYPE} ${AWS_S3_INTEGRATION_TESTS_SRC})
else()
    add_executable(runS3IntegrationTests ${AWS_S3_INTEGRATION_TESTS_SRC})
endif()

target_link_libraries(runS3IntegrationTests aws-cpp-sdk-s3 testing-resources)
copyDlls(runS3IntegrationTests aws-cpp-sdk-core aws-cpp-sdk-s3 testing-resources)

