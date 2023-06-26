add_project(aws-cpp-sdk-iotanalytics "C++ SDK for the AWS iotanalytics service" aws-cpp-sdk-core)

file(GLOB AWS_IOTANALYTICS_HEADERS
    "include/aws/iotanalytics/*.h"
)

file(GLOB AWS_IOTANALYTICS_MODEL_HEADERS
    "include/aws/iotanalytics/model/*.h"
)

file(GLOB AWS_IOTANALYTICS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IOTANALYTICS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IOTANALYTICS_UNIFIED_HEADERS
    ${AWS_IOTANALYTICS_HEADERS}
    ${AWS_IOTANALYTICS_MODEL_HEADERS}
)

file(GLOB IOTANALYTICS_UNITY_SRC
    ${AWS_IOTANALYTICS_SOURCE}
    ${AWS_IOTANALYTICS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IOTANALYTICS" IOTANALYTICS_UNITY_SRC)
endif()

file(GLOB IOTANALYTICS_SRC
    ${IOTANALYTICS_UNIFIED_HEADERS}
    ${IOTANALYTICS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\iotanalytics" FILES ${AWS_IOTANALYTICS_HEADERS})
        source_group("Header Files\\aws\\iotanalytics\\model" FILES ${AWS_IOTANALYTICS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IOTANALYTICS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IOTANALYTICS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IOTANALYTICS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${IOTANALYTICS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_IOTANALYTICS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_IOTANALYTICS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotanalytics)
install (FILES ${AWS_IOTANALYTICS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotanalytics/model)

do_packaging()


