cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-identity-management-tests)

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

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(runIdentityManagementTests ${LIBTYPE} ${AWS_CPP_SDK_IDENTITY_MANAGEMENT_TESTS_SRC})
else()
    add_executable(runIdentityManagementTests ${AWS_CPP_SDK_IDENTITY_MANAGEMENT_TESTS_SRC})
endif()

target_link_libraries(runIdentityManagementTests aws-cpp-sdk-identity-management testing-resources)
copyDlls(runIdentityManagementTests aws-cpp-sdk-identity-management aws-cpp-sdk-core aws-cpp-sdk-cognito-identity testing-resources)

if(NOT CMAKE_CROSSCOMPILING)
    ADD_CUSTOM_COMMAND( TARGET runIdentityManagementTests POST_BUILD COMMAND $<TARGET_FILE:runIdentityManagementTests>)
    SET_TARGET_PROPERTIES(runIdentityManagementTests PROPERTIES OUTPUT_NAME runIdentityManagementTests)
endif()


