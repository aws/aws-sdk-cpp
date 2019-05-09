add_project(aws-cpp-sdk-text-to-speech
    "High-level C++ SDK for Polly"
    aws-cpp-sdk-polly
    aws-cpp-sdk-core)

include(CheckIncludeFiles)

file( GLOB TEXT_TO_SPEECH_HEADERS "include/aws/text-to-speech/*.h" )

set(PLATFORM_LIBS "")

check_include_files("pulse/simple.h" HAVE_PULSE)

if(PLATFORM_WINDOWS)
    file( GLOB TEXT_TO_SPEECH_PLATFORM_HEADERS "include/aws/text-to-speech/windows/*.h" )
	file( GLOB TEXT_TO_SPEECH_PLATFORM_SOURCE "source/text-to-speech/windows/*.cpp" )

	add_definitions("-DWAVE_OUT")
    set(PLATFORM_LIBS ${PLATFORM_LIBS} Winmm)
endif()

if (PLATFORM_LINUX)
    if(HAVE_PULSE)
        file( GLOB TEXT_TO_SPEECH_PLATFORM_HEADERS "include/aws/text-to-speech/linux/*.h" )
        file( GLOB TEXT_TO_SPEECH_PLATFORM_SOURCE "source/text-to-speech/linux/*.cpp" )

        message(STATUS "Pulse audio header files have been detected, included pulse audio as a possible sound driver implementation.")
        add_definitions("-DPULSE")
        set(PLATFORM_LIBS ${PLATFORM_LIBS} pulse pulse-simple)
    else()
        message(WARNING "We've detected that you are building on linux, but the header files for pulseaudio are not available.\
                If you are providing your own audio implementation or you will not be using the text-to-speech library, this is fine.\
                However, if you are not providing your own implemenation and you want to use text-to-speech, you need to install the dev files for pulseAudio.\
                e.g. apt-get install libpulse-dev or yum install pulseaudio-libs-devel. Currently, no audio implementation will be built into this library.")
    endif()
endif()

if(PLATFORM_APPLE)
	find_library(COREAUDIO_LIBRARY CoreAudio)
    if (${COREAUDIO_LIBRARY} STREQUAL "${COREAUDIO_LIBRARY}-NOTFOUND")
        if (HAVE_PULSE)
            file( GLOB TEXT_TO_SPEECH_PLATFORM_HEADERS "include/aws/text-to-speech/linux/*.h" )
            file( GLOB TEXT_TO_SPEECH_PLATFORM_SOURCE "source/text-to-speech/linux/*.cpp" )
            message(STATUS "Pulse audio header files have been detected, included pulse audio as a possible sound driver implementation.")
            add_definitions("-DPULSE")
            set(PLATFORM_LIBS ${PLATFORM_LIBS} pulse pulse-simple)
        else()
            message(FATAL "We've detected that you are building on macos, but there is no coreAudio library and pulseAudio library available.\
                    If you are providing your own audio implementation or you will not be using the text-to-speech library, this is fine.\
                    However, if you are not providing your own implemenation and you want to use text-to-speech, you need to install the dev files for coreAudio or pulseAudio.\
                    e.g. apt-get install libpulse-dev or yum install pulseaudio-libs-devel. Currently, no audio implementation will be built into this library.")
        endif()
    else()
        file( GLOB TEXT_TO_SPEECH_PLATFORM_HEADERS "include/aws/text-to-speech/apple/*.h" )
        file( GLOB TEXT_TO_SPEECH_PLATFORM_SOURCE "source/text-to-speech/apple/*.cpp" )
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
endif()

file( GLOB TEXT_TO_SPEECH_SOURCE "source/text-to-speech/*.cpp" )

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

add_library(${PROJECT_NAME} ${ALL_TEXT_TO_SPEECH})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(${PROJECT_NAME} PRIVATE ${PROJECT_LIBS} ${PLATFORM_DEP_LIBS} ${PLATFORM_LIBS})

setup_install()

install (FILES ${ALL_TEXT_TO_SPEECH_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/text-to-speech)

do_packaging()

