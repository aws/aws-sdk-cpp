add_project(aws-cpp-sdk-billing "C++ SDK for the AWS billing service" aws-cpp-sdk-core)

file(GLOB AWS_BILLING_HEADERS
    "include/aws/billing/*.h"
)

file(GLOB AWS_BILLING_MODEL_HEADERS
    "include/aws/billing/model/*.h"
)

file(GLOB AWS_BILLING_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_BILLING_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB BILLING_UNIFIED_HEADERS
    ${AWS_BILLING_HEADERS}
    ${AWS_BILLING_MODEL_HEADERS}
)

file(GLOB BILLING_UNITY_SRC
    ${AWS_BILLING_SOURCE}
    ${AWS_BILLING_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("BILLING" BILLING_UNITY_SRC)
endif()

file(GLOB BILLING_SRC
    ${BILLING_UNIFIED_HEADERS}
    ${BILLING_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\billing" FILES ${AWS_BILLING_HEADERS})
        source_group("Header Files\\aws\\billing\\model" FILES ${AWS_BILLING_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_BILLING_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_BILLING_MODEL_SOURCE})
    endif(MSVC)
endif()

set(BILLING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${BILLING_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_BILLING_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_BILLING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/billing)
install (FILES ${AWS_BILLING_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/billing/model)

do_packaging()


