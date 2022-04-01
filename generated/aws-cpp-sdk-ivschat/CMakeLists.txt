add_project(aws-cpp-sdk-ivschat "C++ SDK for the AWS ivschat service" aws-cpp-sdk-core)

file(GLOB AWS_IVSCHAT_HEADERS
    "include/aws/ivschat/*.h"
)

file(GLOB AWS_IVSCHAT_MODEL_HEADERS
    "include/aws/ivschat/model/*.h"
)

file(GLOB AWS_IVSCHAT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IVSCHAT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IVSCHAT_UNIFIED_HEADERS
    ${AWS_IVSCHAT_HEADERS}
    ${AWS_IVSCHAT_MODEL_HEADERS}
)

file(GLOB IVSCHAT_UNITY_SRC
    ${AWS_IVSCHAT_SOURCE}
    ${AWS_IVSCHAT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IVSCHAT" IVSCHAT_UNITY_SRC)
endif()

file(GLOB IVSCHAT_SRC
    ${IVSCHAT_UNIFIED_HEADERS}
    ${IVSCHAT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\ivschat" FILES ${AWS_IVSCHAT_HEADERS})
        source_group("Header Files\\aws\\ivschat\\model" FILES ${AWS_IVSCHAT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IVSCHAT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IVSCHAT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IVSCHAT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${IVSCHAT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_IVSCHAT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_IVSCHAT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ivschat)
install (FILES ${AWS_IVSCHAT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ivschat/model)

do_packaging()


