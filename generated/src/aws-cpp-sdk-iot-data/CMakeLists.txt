add_project(aws-cpp-sdk-iot-data "C++ SDK for the AWS iot-data service" aws-cpp-sdk-core)

file(GLOB AWS_IOT-DATA_HEADERS
    "include/aws/iot-data/*.h"
)

file(GLOB AWS_IOT-DATA_MODEL_HEADERS
    "include/aws/iot-data/model/*.h"
)

file(GLOB AWS_IOT-DATA_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IOT-DATA_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IOT-DATA_UNIFIED_HEADERS
    ${AWS_IOT-DATA_HEADERS}
    ${AWS_IOT-DATA_MODEL_HEADERS}
)

file(GLOB IOT-DATA_UNITY_SRC
    ${AWS_IOT-DATA_SOURCE}
    ${AWS_IOT-DATA_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IOT-DATA" IOT-DATA_UNITY_SRC)
endif()

file(GLOB IOT-DATA_SRC
    ${IOT-DATA_UNIFIED_HEADERS}
    ${IOT-DATA_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\iot-data" FILES ${AWS_IOT-DATA_HEADERS})
        source_group("Header Files\\aws\\iot-data\\model" FILES ${AWS_IOT-DATA_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IOT-DATA_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IOT-DATA_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IOT-DATA_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${IOT-DATA_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_IOTDATAPLANE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_IOT-DATA_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iot-data)
install (FILES ${AWS_IOT-DATA_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iot-data/model)

do_packaging()


