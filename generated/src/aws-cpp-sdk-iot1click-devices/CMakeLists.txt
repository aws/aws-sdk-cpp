add_project(aws-cpp-sdk-iot1click-devices "C++ SDK for the AWS iot1click-devices service" aws-cpp-sdk-core)

file(GLOB AWS_IOT1CLICK-DEVICES_HEADERS
    "include/aws/iot1click-devices/*.h"
)

file(GLOB AWS_IOT1CLICK-DEVICES_MODEL_HEADERS
    "include/aws/iot1click-devices/model/*.h"
)

file(GLOB AWS_IOT1CLICK-DEVICES_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IOT1CLICK-DEVICES_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IOT1CLICK-DEVICES_UNIFIED_HEADERS
    ${AWS_IOT1CLICK-DEVICES_HEADERS}
    ${AWS_IOT1CLICK-DEVICES_MODEL_HEADERS}
)

file(GLOB IOT1CLICK-DEVICES_UNITY_SRC
    ${AWS_IOT1CLICK-DEVICES_SOURCE}
    ${AWS_IOT1CLICK-DEVICES_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IOT1CLICK-DEVICES" IOT1CLICK-DEVICES_UNITY_SRC)
endif()

file(GLOB IOT1CLICK-DEVICES_SRC
    ${IOT1CLICK-DEVICES_UNIFIED_HEADERS}
    ${IOT1CLICK-DEVICES_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\iot1click-devices" FILES ${AWS_IOT1CLICK-DEVICES_HEADERS})
        source_group("Header Files\\aws\\iot1click-devices\\model" FILES ${AWS_IOT1CLICK-DEVICES_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IOT1CLICK-DEVICES_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IOT1CLICK-DEVICES_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IOT1CLICK-DEVICES_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${IOT1CLICK-DEVICES_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_IOT1CLICKDEVICESSERVICE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_IOT1CLICK-DEVICES_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iot1click-devices)
install (FILES ${AWS_IOT1CLICK-DEVICES_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iot1click-devices/model)

do_packaging()


