add_project(aws-cpp-sdk-ssm-sap "C++ SDK for the AWS ssm-sap service" aws-cpp-sdk-core)

file(GLOB AWS_SSM-SAP_HEADERS
    "include/aws/ssm-sap/*.h"
)

file(GLOB AWS_SSM-SAP_MODEL_HEADERS
    "include/aws/ssm-sap/model/*.h"
)

file(GLOB AWS_SSM-SAP_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SSM-SAP_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SSM-SAP_UNIFIED_HEADERS
    ${AWS_SSM-SAP_HEADERS}
    ${AWS_SSM-SAP_MODEL_HEADERS}
)

file(GLOB SSM-SAP_UNITY_SRC
    ${AWS_SSM-SAP_SOURCE}
    ${AWS_SSM-SAP_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SSM-SAP" SSM-SAP_UNITY_SRC)
endif()

file(GLOB SSM-SAP_SRC
    ${SSM-SAP_UNIFIED_HEADERS}
    ${SSM-SAP_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\ssm-sap" FILES ${AWS_SSM-SAP_HEADERS})
        source_group("Header Files\\aws\\ssm-sap\\model" FILES ${AWS_SSM-SAP_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SSM-SAP_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SSM-SAP_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SSM-SAP_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SSM-SAP_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SSMSAP_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SSM-SAP_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ssm-sap)
install (FILES ${AWS_SSM-SAP_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ssm-sap/model)

do_packaging()


