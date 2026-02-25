add_project(aws-cpp-sdk-elementalinference "C++ SDK for the AWS elementalinference service" aws-cpp-sdk-core)

file(GLOB AWS_ELEMENTALINFERENCE_HEADERS
    "include/aws/elementalinference/*.h"
)

file(GLOB AWS_ELEMENTALINFERENCE_MODEL_HEADERS
    "include/aws/elementalinference/model/*.h"
)

file(GLOB AWS_ELEMENTALINFERENCE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ELEMENTALINFERENCE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ELEMENTALINFERENCE_UNIFIED_HEADERS
    ${AWS_ELEMENTALINFERENCE_HEADERS}
    ${AWS_ELEMENTALINFERENCE_MODEL_HEADERS}
)

file(GLOB ELEMENTALINFERENCE_UNITY_SRC
    ${AWS_ELEMENTALINFERENCE_SOURCE}
    ${AWS_ELEMENTALINFERENCE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ELEMENTALINFERENCE" ELEMENTALINFERENCE_UNITY_SRC)
endif()

file(GLOB ELEMENTALINFERENCE_SRC
    ${ELEMENTALINFERENCE_UNIFIED_HEADERS}
    ${ELEMENTALINFERENCE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\elementalinference" FILES ${AWS_ELEMENTALINFERENCE_HEADERS})
        source_group("Header Files\\aws\\elementalinference\\model" FILES ${AWS_ELEMENTALINFERENCE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ELEMENTALINFERENCE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ELEMENTALINFERENCE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ELEMENTALINFERENCE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ELEMENTALINFERENCE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ELEMENTALINFERENCE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ELEMENTALINFERENCE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elementalinference)
install (FILES ${AWS_ELEMENTALINFERENCE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elementalinference/model)

do_packaging()


