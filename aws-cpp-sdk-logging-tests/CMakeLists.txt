cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-logging-integration-tests)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

  file(GLOB LOGGING_SRC
  "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
  )

  file(GLOB LOGGING_INTEGRATION_TESTS_SRC
    ${LOGGING_SRC}
  )

if(NOT MSVC)
  add_definitions(-std=c++0x)
endif()


set(LOGGING_INTEGRATION_TEST_APPLICATION_INCLUDES
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-logging/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3/include/"
  "${AWS_NATIVE_SDK_ROOT}/testing-resources/include/"
)

project(${PROJECT_NAME})

include_directories(${LOGGING_INTEGRATION_TEST_APPLICATION_INCLUDES})

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()
add_executable(runLoggingIntegrationTests ${LOGGING_INTEGRATION_TESTS_SRC})
target_link_libraries(runLoggingIntegrationTests aws-cpp-sdk-s3 aws-cpp-sdk-logging testing-resources)
copyDlls(runLoggingIntegrationTests aws-cpp-sdk-core aws-cpp-sdk-s3 aws-cpp-sdk-logging testing-resources)
