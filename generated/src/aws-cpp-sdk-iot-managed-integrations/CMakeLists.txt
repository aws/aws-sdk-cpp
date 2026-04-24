add_project(aws-cpp-sdk-iot-managed-integrations "C++ SDK for the AWS iot-managed-integrations service" aws-cpp-sdk-core)

file(GLOB AWS_IOT-MANAGED-INTEGRATIONS_HEADERS
    "include/aws/iot-managed-integrations/*.h"
)

file(GLOB AWS_IOT-MANAGED-INTEGRATIONS_MODEL_HEADERS
    "include/aws/iot-managed-integrations/model/*.h"
)

file(GLOB AWS_IOT-MANAGED-INTEGRATIONS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IOT-MANAGED-INTEGRATIONS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IOT-MANAGED-INTEGRATIONS_UNIFIED_HEADERS
    ${AWS_IOT-MANAGED-INTEGRATIONS_HEADERS}
    ${AWS_IOT-MANAGED-INTEGRATIONS_MODEL_HEADERS}
)

file(GLOB IOT-MANAGED-INTEGRATIONS_UNITY_SRC
    ${AWS_IOT-MANAGED-INTEGRATIONS_SOURCE}
    ${AWS_IOT-MANAGED-INTEGRATIONS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IOT-MANAGED-INTEGRATIONS" IOT-MANAGED-INTEGRATIONS_UNITY_SRC)
endif()

file(GLOB IOT-MANAGED-INTEGRATIONS_SRC
    ${IOT-MANAGED-INTEGRATIONS_UNIFIED_HEADERS}
    ${IOT-MANAGED-INTEGRATIONS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\iot-managed-integrations" FILES ${AWS_IOT-MANAGED-INTEGRATIONS_HEADERS})
        source_group("Header Files\\aws\\iot-managed-integrations\\model" FILES ${AWS_IOT-MANAGED-INTEGRATIONS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IOT-MANAGED-INTEGRATIONS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IOT-MANAGED-INTEGRATIONS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IOT-MANAGED-INTEGRATIONS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${IOT-MANAGED-INTEGRATIONS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_IOTMANAGEDINTEGRATIONS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_IOT-MANAGED-INTEGRATIONS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iot-managed-integrations)
install (FILES ${AWS_IOT-MANAGED-INTEGRATIONS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iot-managed-integrations/model)

do_packaging()


