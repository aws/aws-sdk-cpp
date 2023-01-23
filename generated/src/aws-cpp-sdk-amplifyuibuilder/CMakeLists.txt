add_project(aws-cpp-sdk-amplifyuibuilder "C++ SDK for the AWS amplifyuibuilder service" aws-cpp-sdk-core)

file(GLOB AWS_AMPLIFYUIBUILDER_HEADERS
    "include/aws/amplifyuibuilder/*.h"
)

file(GLOB AWS_AMPLIFYUIBUILDER_MODEL_HEADERS
    "include/aws/amplifyuibuilder/model/*.h"
)

file(GLOB AWS_AMPLIFYUIBUILDER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_AMPLIFYUIBUILDER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB AMPLIFYUIBUILDER_UNIFIED_HEADERS
    ${AWS_AMPLIFYUIBUILDER_HEADERS}
    ${AWS_AMPLIFYUIBUILDER_MODEL_HEADERS}
)

file(GLOB AMPLIFYUIBUILDER_UNITY_SRC
    ${AWS_AMPLIFYUIBUILDER_SOURCE}
    ${AWS_AMPLIFYUIBUILDER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("AMPLIFYUIBUILDER" AMPLIFYUIBUILDER_UNITY_SRC)
endif()

file(GLOB AMPLIFYUIBUILDER_SRC
    ${AMPLIFYUIBUILDER_UNIFIED_HEADERS}
    ${AMPLIFYUIBUILDER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\amplifyuibuilder" FILES ${AWS_AMPLIFYUIBUILDER_HEADERS})
        source_group("Header Files\\aws\\amplifyuibuilder\\model" FILES ${AWS_AMPLIFYUIBUILDER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_AMPLIFYUIBUILDER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_AMPLIFYUIBUILDER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(AMPLIFYUIBUILDER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${AMPLIFYUIBUILDER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_AMPLIFYUIBUILDER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_AMPLIFYUIBUILDER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/amplifyuibuilder)
install (FILES ${AWS_AMPLIFYUIBUILDER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/amplifyuibuilder/model)

do_packaging()


