add_project(aws-cpp-sdk-text-to-speech
    "High-level C++ SDK for Polly"
    aws-cpp-sdk-polly
    aws-cpp-sdk-core)

file( GLOB TEXT_TO_SPEECH_HEADERS "include/aws/text-to-speech/*.h" )

set(PLATFORM_LIBS "")

if(PLATFORM_WINDOWS)
    file( GLOB TEXT_TO_SPEECH_PLATFORM_HEADERS "include/aws/text-to-speech/windows/*.h" )
elseif(PLATFORM_LINUX)
    file( GLOB TEXT_TO_SPEECH_PLATFORM_HEADERS "include/aws/text-to-speech/linux/*.h" )
elseif(PLATFORM_APPLE)
    file( GLOB TEXT_TO_SPEECH_PLATFORM_HEADERS "include/aws/text-to-speech/apple/*.h" )
endif()

file( GLOB TEXT_TO_SPEECH_SOURCE "source/text-to-speech/*.cpp" )

if(PLATFORM_WINDOWS)
    file( GLOB TEXT_TO_SPEECH_PLATFORM_SOURCE "source/text-to-speech/windows/*.cpp" )
elseif(PLATFORM_LINUX)
    file( GLOB TEXT_TO_SPEECH_PLATFORM_SOURCE "source/text-to-speech/linux/*.cpp" )
elseif(PLATFORM_APPLE)
    file( GLOB TEXT_TO_SPEECH_PLATFORM_SOURCE "source/text-to-speech/apple/*.cpp" )
endif()

if(MSVC)
    source_group("Header Files\\aws\\text-to-speech" FILES ${TEXT_TO_SPEECH_HEADERS})
    source_group("Header Files\\aws\\text-to-speech\\windows" FILES ${TEXT_TO_SPEECH_PLATFORM_HEADERS})
    source_group("Source Files\\text-to-speech" FILES ${TEXT_TO_SPEECH_SOURCE})
    source_group("Source Files\\text-to-speech\\windows" FILES ${TEXT_TO_SPEECH_PLATFORM_SOURCE})
endif()

file(GLOB ALL_TEXT_TO_SPEECH_HEADERS
    ${TEXT_TO_SPEECH_HEADERS}
    ${TEXT_TO_SPEECH_PLATFORM_HEADERS}
)

file(GLOB ALL_TEXT_TO_SPEECH_SOURCE
    ${TEXT_TO_SPEECH_SOURCE}
    ${TEXT_TO_SPEECH_PLATFORM_SOURCE}
)

file(GLOB ALL_TEXT_TO_SPEECH
    ${ALL_TEXT_TO_SPEECH_HEADERS}
    ${ALL_TEXT_TO_SPEECH_SOURCE}
)

set(TEXT_TO_SPEECH_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
  )

include_directories(${TEXT_TO_SPEECH_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_TEXT_TO_SPEECH_EXPORTS")
endif()

if(PLATFORM_WINDOWS)
    add_definitions("-DWAVE_OUT")
    set(PLATFORM_LIBS ${PLATFORM_LIBS} Winmm)
elseif(PLATFORM_LINUX)
    add_definitions("-DPULSE")
    set(PLATFORM_LIBS ${PLATFORM_LIBS} pulse-simple)
elseif(PLATFORM_APPLE)
    find_library(COREAUDIO_LIBRARY CoreAudio)
    find_path(COREAUDIO_INCLUDE_DIR CoreAudioTypes.h)

    include_directories(${COREAUDIO_INCLUDE_DIR})
    set(PLATFORM_LIBS ${PLATFORM_LIBS} ${COREAUDIO_LIBRARY})

    find_library(AUDIOTOOLBOX_LIBRARY AudioToolbox)
    find_path(AUDIOTOOLBOX_INCLUDE_DIR AudioQueue.h)

    include_directories(${AUDIOTOOLBOX_INCLUDE_DIR})
    set(PLATFORM_LIBS ${PLATFORM_LIBS} ${AUDIOTOOLBOX_LIBRARY})

    find_library(FOUNDATION_LIBRARY CoreFoundation)

    set(PLATFORM_LIBS ${PLATFORM_LIBS} ${FOUNDATION_LIBRARY})

    add_definitions("-DCORE_AUDIO")
    add_definitions("-Wno-gnu-zero-variadic-macro-arguments -Wno-four-char-constants -Wno-nullability-extension")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${ALL_TEXT_TO_SPEECH})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS} ${PLATFORM_LIBS})

setup_install()

install (FILES ${ALL_TEXT_TO_SPEECH_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/text-to-speech)

do_packaging()

