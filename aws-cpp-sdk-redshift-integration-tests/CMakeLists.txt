cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-redshift-integration-tests)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

  file(GLOB AWS_REDSHIFT_SRC
  "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
  )

  file(GLOB AWS_REDSHIFT_INTEGRATION_TESTS_SRC
    ${AWS_REDSHIFT_SRC}
  )

if(NOT MSVC)
  add_definitions(-std=c++0x)
endif()


set(AWS_REDSHIFT_INTEGRATION_TEST_APPLICATION_INCLUDES
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-redshift/include/"
  "${AWS_NATIVE_SDK_ROOT}/testing-resources/include/"
)

#project(${PROJECT_NAME})

include_directories(${AWS_REDSHIFT_INTEGRATION_TEST_APPLICATION_INCLUDES})

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()
add_executable(runRedshiftIntegrationTests ${AWS_REDSHIFT_INTEGRATION_TESTS_SRC})
target_link_libraries(runRedshiftIntegrationTests aws-cpp-sdk-redshift testing-resources)
copyDlls(runRedshiftIntegrationTests aws-cpp-sdk-core aws-cpp-sdk-redshift testing-resources)
