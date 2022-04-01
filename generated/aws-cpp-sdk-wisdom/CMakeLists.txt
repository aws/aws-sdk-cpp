add_project(aws-cpp-sdk-wisdom "C++ SDK for the AWS wisdom service" aws-cpp-sdk-core)

file(GLOB AWS_WISDOM_HEADERS
    "include/aws/wisdom/*.h"
)

file(GLOB AWS_WISDOM_MODEL_HEADERS
    "include/aws/wisdom/model/*.h"
)

file(GLOB AWS_WISDOM_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_WISDOM_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB WISDOM_UNIFIED_HEADERS
    ${AWS_WISDOM_HEADERS}
    ${AWS_WISDOM_MODEL_HEADERS}
)

file(GLOB WISDOM_UNITY_SRC
    ${AWS_WISDOM_SOURCE}
    ${AWS_WISDOM_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("WISDOM" WISDOM_UNITY_SRC)
endif()

file(GLOB WISDOM_SRC
    ${WISDOM_UNIFIED_HEADERS}
    ${WISDOM_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\wisdom" FILES ${AWS_WISDOM_HEADERS})
        source_group("Header Files\\aws\\wisdom\\model" FILES ${AWS_WISDOM_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_WISDOM_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_WISDOM_MODEL_SOURCE})
    endif(MSVC)
endif()

set(WISDOM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${WISDOM_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CONNECTWISDOMSERVICE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_WISDOM_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/wisdom)
install (FILES ${AWS_WISDOM_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/wisdom/model)

do_packaging()


