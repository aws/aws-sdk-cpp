add_project(aws-cpp-sdk-codeartifact "C++ SDK for the AWS codeartifact service" aws-cpp-sdk-core)

file(GLOB AWS_CODEARTIFACT_HEADERS
    "include/aws/codeartifact/*.h"
)

file(GLOB AWS_CODEARTIFACT_MODEL_HEADERS
    "include/aws/codeartifact/model/*.h"
)

file(GLOB AWS_CODEARTIFACT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CODEARTIFACT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CODEARTIFACT_UNIFIED_HEADERS
    ${AWS_CODEARTIFACT_HEADERS}
    ${AWS_CODEARTIFACT_MODEL_HEADERS}
)

file(GLOB CODEARTIFACT_UNITY_SRC
    ${AWS_CODEARTIFACT_SOURCE}
    ${AWS_CODEARTIFACT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CODEARTIFACT" CODEARTIFACT_UNITY_SRC)
endif()

file(GLOB CODEARTIFACT_SRC
    ${CODEARTIFACT_UNIFIED_HEADERS}
    ${CODEARTIFACT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\codeartifact" FILES ${AWS_CODEARTIFACT_HEADERS})
        source_group("Header Files\\aws\\codeartifact\\model" FILES ${AWS_CODEARTIFACT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CODEARTIFACT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CODEARTIFACT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CODEARTIFACT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CODEARTIFACT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CODEARTIFACT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CODEARTIFACT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codeartifact)
install (FILES ${AWS_CODEARTIFACT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codeartifact/model)

do_packaging()


