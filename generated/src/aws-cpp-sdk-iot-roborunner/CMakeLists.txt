add_project(aws-cpp-sdk-iot-roborunner "C++ SDK for the AWS iot-roborunner service" aws-cpp-sdk-core)

file(GLOB AWS_IOT-ROBORUNNER_HEADERS
    "include/aws/iot-roborunner/*.h"
)

file(GLOB AWS_IOT-ROBORUNNER_MODEL_HEADERS
    "include/aws/iot-roborunner/model/*.h"
)

file(GLOB AWS_IOT-ROBORUNNER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IOT-ROBORUNNER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IOT-ROBORUNNER_UNIFIED_HEADERS
    ${AWS_IOT-ROBORUNNER_HEADERS}
    ${AWS_IOT-ROBORUNNER_MODEL_HEADERS}
)

file(GLOB IOT-ROBORUNNER_UNITY_SRC
    ${AWS_IOT-ROBORUNNER_SOURCE}
    ${AWS_IOT-ROBORUNNER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IOT-ROBORUNNER" IOT-ROBORUNNER_UNITY_SRC)
endif()

file(GLOB IOT-ROBORUNNER_SRC
    ${IOT-ROBORUNNER_UNIFIED_HEADERS}
    ${IOT-ROBORUNNER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\iot-roborunner" FILES ${AWS_IOT-ROBORUNNER_HEADERS})
        source_group("Header Files\\aws\\iot-roborunner\\model" FILES ${AWS_IOT-ROBORUNNER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IOT-ROBORUNNER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IOT-ROBORUNNER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IOT-ROBORUNNER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${IOT-ROBORUNNER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_IOTROBORUNNER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_IOT-ROBORUNNER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iot-roborunner)
install (FILES ${AWS_IOT-ROBORUNNER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iot-roborunner/model)

do_packaging()


