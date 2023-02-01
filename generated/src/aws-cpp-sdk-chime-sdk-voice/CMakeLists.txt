add_project(aws-cpp-sdk-chime-sdk-voice "C++ SDK for the AWS chime-sdk-voice service" aws-cpp-sdk-core)

file(GLOB AWS_CHIME-SDK-VOICE_HEADERS
    "include/aws/chime-sdk-voice/*.h"
)

file(GLOB AWS_CHIME-SDK-VOICE_MODEL_HEADERS
    "include/aws/chime-sdk-voice/model/*.h"
)

file(GLOB AWS_CHIME-SDK-VOICE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CHIME-SDK-VOICE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CHIME-SDK-VOICE_UNIFIED_HEADERS
    ${AWS_CHIME-SDK-VOICE_HEADERS}
    ${AWS_CHIME-SDK-VOICE_MODEL_HEADERS}
)

file(GLOB CHIME-SDK-VOICE_UNITY_SRC
    ${AWS_CHIME-SDK-VOICE_SOURCE}
    ${AWS_CHIME-SDK-VOICE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CHIME-SDK-VOICE" CHIME-SDK-VOICE_UNITY_SRC)
endif()

file(GLOB CHIME-SDK-VOICE_SRC
    ${CHIME-SDK-VOICE_UNIFIED_HEADERS}
    ${CHIME-SDK-VOICE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\chime-sdk-voice" FILES ${AWS_CHIME-SDK-VOICE_HEADERS})
        source_group("Header Files\\aws\\chime-sdk-voice\\model" FILES ${AWS_CHIME-SDK-VOICE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CHIME-SDK-VOICE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CHIME-SDK-VOICE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CHIME-SDK-VOICE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CHIME-SDK-VOICE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CHIMESDKVOICE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CHIME-SDK-VOICE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/chime-sdk-voice)
install (FILES ${AWS_CHIME-SDK-VOICE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/chime-sdk-voice/model)

do_packaging()


