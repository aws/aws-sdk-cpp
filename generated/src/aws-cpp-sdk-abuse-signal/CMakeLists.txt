add_project(aws-cpp-sdk-abuse-signal "C++ SDK for AWS Abuse Signal API" aws-cpp-sdk-core)

file(GLOB AWS_ABUSE-SIGNAL_HEADERS
    "include/aws/abuse-signal/*.h"
)

file(GLOB AWS_ABUSE-SIGNAL_MODEL_HEADERS
    "include/aws/abuse-signal/model/*.h"
)

file(GLOB AWS_ABUSE-SIGNAL_INTERNAL_HEADERS
    "include/aws/abuse-signal/internal/*.h"
)

file(GLOB AWS_ABUSE-SIGNAL_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ABUSE-SIGNAL_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ABUSE-SIGNAL_UNIFIED_HEADERS
    ${AWS_ABUSE-SIGNAL_HEADERS}
    ${AWS_ABUSE-SIGNAL_INTERNAL_HEADERS}
    ${AWS_ABUSE-SIGNAL_MODEL_HEADERS}
)

file(GLOB ABUSE-SIGNAL_UNITY_SRC
    ${AWS_ABUSE-SIGNAL_SOURCE}
    ${AWS_ABUSE-SIGNAL_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ABUSE-SIGNAL" ABUSE-SIGNAL_UNITY_SRC)
endif()

file(GLOB ABUSE-SIGNAL_SRC
    ${ABUSE-SIGNAL_UNIFIED_HEADERS}
    ${ABUSE-SIGNAL_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\abuse-signal" FILES ${AWS_ABUSE-SIGNAL_HEADERS})
        source_group("Header Files\\aws\\abuse-signal\\internal" FILES ${AWS_ABUSE-SIGNAL_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\abuse-signal\\model" FILES ${AWS_ABUSE-SIGNAL_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ABUSE-SIGNAL_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ABUSE-SIGNAL_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ABUSE-SIGNAL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ABUSE-SIGNAL_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ABUSESIGNAL_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ABUSE-SIGNAL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/abuse-signal)
install (FILES ${AWS_ABUSE-SIGNAL_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/abuse-signal/model)

do_packaging()


