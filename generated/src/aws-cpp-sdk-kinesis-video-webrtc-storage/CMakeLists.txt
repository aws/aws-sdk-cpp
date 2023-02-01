add_project(aws-cpp-sdk-kinesis-video-webrtc-storage "C++ SDK for the AWS kinesis-video-webrtc-storage service" aws-cpp-sdk-core)

file(GLOB AWS_KINESIS-VIDEO-WEBRTC-STORAGE_HEADERS
    "include/aws/kinesis-video-webrtc-storage/*.h"
)

file(GLOB AWS_KINESIS-VIDEO-WEBRTC-STORAGE_MODEL_HEADERS
    "include/aws/kinesis-video-webrtc-storage/model/*.h"
)

file(GLOB AWS_KINESIS-VIDEO-WEBRTC-STORAGE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_KINESIS-VIDEO-WEBRTC-STORAGE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB KINESIS-VIDEO-WEBRTC-STORAGE_UNIFIED_HEADERS
    ${AWS_KINESIS-VIDEO-WEBRTC-STORAGE_HEADERS}
    ${AWS_KINESIS-VIDEO-WEBRTC-STORAGE_MODEL_HEADERS}
)

file(GLOB KINESIS-VIDEO-WEBRTC-STORAGE_UNITY_SRC
    ${AWS_KINESIS-VIDEO-WEBRTC-STORAGE_SOURCE}
    ${AWS_KINESIS-VIDEO-WEBRTC-STORAGE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("KINESIS-VIDEO-WEBRTC-STORAGE" KINESIS-VIDEO-WEBRTC-STORAGE_UNITY_SRC)
endif()

file(GLOB KINESIS-VIDEO-WEBRTC-STORAGE_SRC
    ${KINESIS-VIDEO-WEBRTC-STORAGE_UNIFIED_HEADERS}
    ${KINESIS-VIDEO-WEBRTC-STORAGE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\kinesis-video-webrtc-storage" FILES ${AWS_KINESIS-VIDEO-WEBRTC-STORAGE_HEADERS})
        source_group("Header Files\\aws\\kinesis-video-webrtc-storage\\model" FILES ${AWS_KINESIS-VIDEO-WEBRTC-STORAGE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_KINESIS-VIDEO-WEBRTC-STORAGE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_KINESIS-VIDEO-WEBRTC-STORAGE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(KINESIS-VIDEO-WEBRTC-STORAGE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${KINESIS-VIDEO-WEBRTC-STORAGE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_KINESISVIDEOWEBRTCSTORAGE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_KINESIS-VIDEO-WEBRTC-STORAGE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kinesis-video-webrtc-storage)
install (FILES ${AWS_KINESIS-VIDEO-WEBRTC-STORAGE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kinesis-video-webrtc-storage/model)

do_packaging()


