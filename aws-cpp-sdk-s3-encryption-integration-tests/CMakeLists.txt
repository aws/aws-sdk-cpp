add_project(aws-cpp-sdk-s3-encryption-integration-tests 
    "Integration tests for the Amazon S3 Encryption Client"
    testing-resources 
    aws-cpp-sdk-core 
    aws-cpp-sdk-s3 
    aws-cpp-sdk-kms 
    aws-cpp-sdk-s3-encryption)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

file(GLOB S3ENCRYPTION_INT_TEST_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

set(S3ECRYPTION_INT_TEST_APPLICATION_INCLUDES
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3-encryption/include/"
  "${AWS_NATIVE_SDK_ROOT}/testing-resources/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-kms/include"
)

include_directories(${S3ECRYPTION_INT_TEST_APPLICATION_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(aws-cpp-sdk-s3-encryption-integration-tests ${S3ENCRYPTION_INT_TEST_SRC})
else()
    add_executable(aws-cpp-sdk-s3-encryption-integration-tests ${S3ENCRYPTION_INT_TEST_SRC})
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(aws-cpp-sdk-s3-encryption-integration-tests ${PROJECT_LIBS})
