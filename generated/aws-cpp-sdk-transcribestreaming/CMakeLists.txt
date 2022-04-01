add_project(aws-cpp-sdk-transcribestreaming "C++ SDK for the AWS transcribestreaming service" aws-cpp-sdk-core)

file(GLOB AWS_TRANSCRIBESTREAMING_HEADERS
    "include/aws/transcribestreaming/*.h"
)

file(GLOB AWS_TRANSCRIBESTREAMING_MODEL_HEADERS
    "include/aws/transcribestreaming/model/*.h"
)

file(GLOB AWS_TRANSCRIBESTREAMING_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_TRANSCRIBESTREAMING_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB TRANSCRIBESTREAMING_UNIFIED_HEADERS
    ${AWS_TRANSCRIBESTREAMING_HEADERS}
    ${AWS_TRANSCRIBESTREAMING_MODEL_HEADERS}
)

file(GLOB TRANSCRIBESTREAMING_UNITY_SRC
    ${AWS_TRANSCRIBESTREAMING_SOURCE}
    ${AWS_TRANSCRIBESTREAMING_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("TRANSCRIBESTREAMING" TRANSCRIBESTREAMING_UNITY_SRC)
endif()

file(GLOB TRANSCRIBESTREAMING_SRC
    ${TRANSCRIBESTREAMING_UNIFIED_HEADERS}
    ${TRANSCRIBESTREAMING_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\transcribestreaming" FILES ${AWS_TRANSCRIBESTREAMING_HEADERS})
        source_group("Header Files\\aws\\transcribestreaming\\model" FILES ${AWS_TRANSCRIBESTREAMING_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_TRANSCRIBESTREAMING_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_TRANSCRIBESTREAMING_MODEL_SOURCE})
    endif(MSVC)
endif()

set(TRANSCRIBESTREAMING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${TRANSCRIBESTREAMING_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_TRANSCRIBESTREAMINGSERVICE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_TRANSCRIBESTREAMING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/transcribestreaming)
install (FILES ${AWS_TRANSCRIBESTREAMING_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/transcribestreaming/model)

do_packaging()


