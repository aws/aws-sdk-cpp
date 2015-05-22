cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-core-tests)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.
file(GLOB AWS_AUTH_SRC "${CMAKE_CURRENT_SOURCE_DIR}/auth/*.cpp")

file(GLOB AWS_CPP_SDK_IDENTITY_MANAGEMENT_TESTS_SRC
  "${CMAKE_CURRENT_SOURCE_DIR}/RunTests.cpp"
  ${AWS_AUTH_SRC}
)

if(PLATFORM_WINDOWS)
  if(MSVC)
    source_group("Source Files\\aws\\identity-management\\auth" FILES ${AWS_AUTH_SRC})
  endif()
endif()

set(TestApplication_INCLUDES
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-identity-management/include/"
  "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-cognito-identity/include/"
  "${AWS_NATIVE_SDK_ROOT}/testing-resources/include/"
)

include_directories(${TestApplication_INCLUDES})

enable_testing()

if(PLATFORM_WINDOWS AND MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

add_executable(runIdentityMangementUnitTests ${AWS_CPP_SDK_IDENTITY_MANAGEMENT_TESTS_SRC})
target_link_libraries(runIdentityMangementUnitTests aws-cpp-sdk-identity-management testing-resources)
copyDlls(runIdentityMangementUnitTests aws-cpp-sdk-identity-management aws-cpp-sdk-core aws-cpp-sdk-cognito-identity testing-resources)

ADD_CUSTOM_COMMAND( TARGET runIdentityMangementUnitTests POST_BUILD COMMAND $<TARGET_FILE:runIdentityMangementUnitTests>)
SET_TARGET_PROPERTIES(runIdentityMangementUnitTests PROPERTIES OUTPUT_NAME runIdentityMangementUnitTests)


