add_project(aws-cpp-sdk-route53-recovery-readiness "C++ SDK for the AWS route53-recovery-readiness service" aws-cpp-sdk-core)

file(GLOB AWS_ROUTE53-RECOVERY-READINESS_HEADERS
    "include/aws/route53-recovery-readiness/*.h"
)

file(GLOB AWS_ROUTE53-RECOVERY-READINESS_MODEL_HEADERS
    "include/aws/route53-recovery-readiness/model/*.h"
)

file(GLOB AWS_ROUTE53-RECOVERY-READINESS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ROUTE53-RECOVERY-READINESS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ROUTE53-RECOVERY-READINESS_UNIFIED_HEADERS
    ${AWS_ROUTE53-RECOVERY-READINESS_HEADERS}
    ${AWS_ROUTE53-RECOVERY-READINESS_MODEL_HEADERS}
)

file(GLOB ROUTE53-RECOVERY-READINESS_UNITY_SRC
    ${AWS_ROUTE53-RECOVERY-READINESS_SOURCE}
    ${AWS_ROUTE53-RECOVERY-READINESS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ROUTE53-RECOVERY-READINESS" ROUTE53-RECOVERY-READINESS_UNITY_SRC)
endif()

file(GLOB ROUTE53-RECOVERY-READINESS_SRC
    ${ROUTE53-RECOVERY-READINESS_UNIFIED_HEADERS}
    ${ROUTE53-RECOVERY-READINESS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\route53-recovery-readiness" FILES ${AWS_ROUTE53-RECOVERY-READINESS_HEADERS})
        source_group("Header Files\\aws\\route53-recovery-readiness\\model" FILES ${AWS_ROUTE53-RECOVERY-READINESS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ROUTE53-RECOVERY-READINESS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ROUTE53-RECOVERY-READINESS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ROUTE53-RECOVERY-READINESS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ROUTE53-RECOVERY-READINESS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ROUTE53RECOVERYREADINESS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ROUTE53-RECOVERY-READINESS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/route53-recovery-readiness)
install (FILES ${AWS_ROUTE53-RECOVERY-READINESS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/route53-recovery-readiness/model)

do_packaging()


