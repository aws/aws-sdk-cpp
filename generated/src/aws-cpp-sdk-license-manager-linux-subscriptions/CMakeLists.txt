add_project(aws-cpp-sdk-license-manager-linux-subscriptions "C++ SDK for the AWS license-manager-linux-subscriptions service" aws-cpp-sdk-core)

file(GLOB AWS_LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_HEADERS
    "include/aws/license-manager-linux-subscriptions/*.h"
)

file(GLOB AWS_LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_MODEL_HEADERS
    "include/aws/license-manager-linux-subscriptions/model/*.h"
)

file(GLOB AWS_LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_UNIFIED_HEADERS
    ${AWS_LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_HEADERS}
    ${AWS_LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_MODEL_HEADERS}
)

file(GLOB LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_UNITY_SRC
    ${AWS_LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_SOURCE}
    ${AWS_LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("LICENSE-MANAGER-LINUX-SUBSCRIPTIONS" LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_UNITY_SRC)
endif()

file(GLOB LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_SRC
    ${LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_UNIFIED_HEADERS}
    ${LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\license-manager-linux-subscriptions" FILES ${AWS_LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_HEADERS})
        source_group("Header Files\\aws\\license-manager-linux-subscriptions\\model" FILES ${AWS_LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/license-manager-linux-subscriptions)
install (FILES ${AWS_LICENSE-MANAGER-LINUX-SUBSCRIPTIONS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/license-manager-linux-subscriptions/model)

do_packaging()


