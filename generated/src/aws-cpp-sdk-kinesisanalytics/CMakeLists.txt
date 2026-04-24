add_project(aws-cpp-sdk-kinesisanalytics "C++ SDK for the AWS kinesisanalytics service" aws-cpp-sdk-core)

file(GLOB AWS_KINESISANALYTICS_HEADERS
    "include/aws/kinesisanalytics/*.h"
)

file(GLOB AWS_KINESISANALYTICS_MODEL_HEADERS
    "include/aws/kinesisanalytics/model/*.h"
)

file(GLOB AWS_KINESISANALYTICS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_KINESISANALYTICS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB KINESISANALYTICS_UNIFIED_HEADERS
    ${AWS_KINESISANALYTICS_HEADERS}
    ${AWS_KINESISANALYTICS_MODEL_HEADERS}
)

file(GLOB KINESISANALYTICS_UNITY_SRC
    ${AWS_KINESISANALYTICS_SOURCE}
    ${AWS_KINESISANALYTICS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("KINESISANALYTICS" KINESISANALYTICS_UNITY_SRC)
endif()

file(GLOB KINESISANALYTICS_SRC
    ${KINESISANALYTICS_UNIFIED_HEADERS}
    ${KINESISANALYTICS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\kinesisanalytics" FILES ${AWS_KINESISANALYTICS_HEADERS})
        source_group("Header Files\\aws\\kinesisanalytics\\model" FILES ${AWS_KINESISANALYTICS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_KINESISANALYTICS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_KINESISANALYTICS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(KINESISANALYTICS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${KINESISANALYTICS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_KINESISANALYTICS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_KINESISANALYTICS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kinesisanalytics)
install (FILES ${AWS_KINESISANALYTICS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kinesisanalytics/model)

do_packaging()


