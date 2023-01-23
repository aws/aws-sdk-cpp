add_project(aws-cpp-sdk-honeycode "C++ SDK for the AWS honeycode service" aws-cpp-sdk-core)

file(GLOB AWS_HONEYCODE_HEADERS
    "include/aws/honeycode/*.h"
)

file(GLOB AWS_HONEYCODE_MODEL_HEADERS
    "include/aws/honeycode/model/*.h"
)

file(GLOB AWS_HONEYCODE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_HONEYCODE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB HONEYCODE_UNIFIED_HEADERS
    ${AWS_HONEYCODE_HEADERS}
    ${AWS_HONEYCODE_MODEL_HEADERS}
)

file(GLOB HONEYCODE_UNITY_SRC
    ${AWS_HONEYCODE_SOURCE}
    ${AWS_HONEYCODE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("HONEYCODE" HONEYCODE_UNITY_SRC)
endif()

file(GLOB HONEYCODE_SRC
    ${HONEYCODE_UNIFIED_HEADERS}
    ${HONEYCODE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\honeycode" FILES ${AWS_HONEYCODE_HEADERS})
        source_group("Header Files\\aws\\honeycode\\model" FILES ${AWS_HONEYCODE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_HONEYCODE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_HONEYCODE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(HONEYCODE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${HONEYCODE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_HONEYCODE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_HONEYCODE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/honeycode)
install (FILES ${AWS_HONEYCODE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/honeycode/model)

do_packaging()


