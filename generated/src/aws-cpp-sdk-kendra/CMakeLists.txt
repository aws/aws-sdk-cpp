add_project(aws-cpp-sdk-kendra "C++ SDK for the AWS kendra service" aws-cpp-sdk-core)

file(GLOB AWS_KENDRA_HEADERS
    "include/aws/kendra/*.h"
)

file(GLOB AWS_KENDRA_MODEL_HEADERS
    "include/aws/kendra/model/*.h"
)

file(GLOB AWS_KENDRA_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_KENDRA_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB KENDRA_UNIFIED_HEADERS
    ${AWS_KENDRA_HEADERS}
    ${AWS_KENDRA_MODEL_HEADERS}
)

file(GLOB KENDRA_UNITY_SRC
    ${AWS_KENDRA_SOURCE}
    ${AWS_KENDRA_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("KENDRA" KENDRA_UNITY_SRC)
endif()

file(GLOB KENDRA_SRC
    ${KENDRA_UNIFIED_HEADERS}
    ${KENDRA_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\kendra" FILES ${AWS_KENDRA_HEADERS})
        source_group("Header Files\\aws\\kendra\\model" FILES ${AWS_KENDRA_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_KENDRA_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_KENDRA_MODEL_SOURCE})
    endif(MSVC)
endif()

set(KENDRA_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${KENDRA_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_KENDRA_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_KENDRA_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kendra)
install (FILES ${AWS_KENDRA_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kendra/model)

do_packaging()


