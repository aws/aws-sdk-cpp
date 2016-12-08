add_project(aws-cpp-sdk-polly-to-output
    "High-level C++ SDK for Polly"
    aws-cpp-sdk-polly
    aws-cpp-sdk-core)

file( GLOB POLLY_OUT_HEADERS "include/aws/polly-to-output/*.h" )

set(PLATFORM_LIBS "")

if(PLATFORM_WINDOWS)
    file( GLOB POLLY_OUT_PLATFORM_HEADERS "include/aws/polly-to-output/windows/*.h" )
elseif(PLATFORM_LINUX)
    file( GLOB POLLY_OUT_PLATFORM_HEADERS "include/aws/polly-to-output/linux/*.h" )
elseif(PLATFORM_APPLE)
    file( GLOB POLLY_OUT_PLATFORM_HEADERS "include/aws/polly-to-output/apple/*.h" )
endif()

file( GLOB POLLY_OUT_SOURCE "source/polly-to-output/*.cpp" )

if(PLATFORM_WINDOWS)
    file( GLOB POLLY_OUT_PLATFORM_SOURCE "source/polly-to-output/windows/*.cpp" )
elseif(PLATFORM_LINUX)
    file( GLOB POLLY_OUT_PLATFORM_SOURCE "source/polly-to-output/linux/*.cpp" )
elseif(PLATFORM_APPLE)
    file( GLOB POLLY_OUT_PLATFORM_SOURCE "source/polly-to-output/apple/*.cpp" )
endif()

if(MSVC)
    source_group("Header Files\\aws\\polly-to-output" FILES ${POLLY_OUT_HEADERS})
    source_group("Header Files\\aws\\polly-to-output\\windows" FILES ${POLLY_OUT_PLATFORM_HEADERS})
    source_group("Source Files\\polly-to-output" FILES ${POLLY_OUT_SOURCE})
    source_group("Source Files\\polly-to-output\\windows" FILES ${POLLY_OUT_PLATFORM_SOURCE})
endif()

file(GLOB ALL_POLLY_OUT_HEADERS
    ${POLLY_OUT_HEADERS}
    ${POLLY_OUT_PLATFORM_HEADERS}
)

file(GLOB ALL_POLLY_OUT_SOURCE
    ${POLLY_OUT_SOURCE}
    ${POLLY_OUT_PLATFORM_SOURCE}
)

file(GLOB ALL_POLLY_OUT
    ${ALL_POLLY_OUT_HEADERS}
    ${ALL_POLLY_OUT_SOURCE}
)

set(POLLY_OUT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
  )

include_directories(${POLLY_OUT_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_POLLY_OUT_EXPORTS")
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

add_library(${PROJECT_NAME} ${LIBTYPE} ${ALL_POLLY_OUT})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS} ${PLATFORM_LIBS})

setup_install()

install (FILES ${ALL_POLLY_OUT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/polly-to-output)

do_packaging()

