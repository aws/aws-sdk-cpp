add_project(aws-cpp-sdk-connecthealth "C++ SDK for the AWS connecthealth service" aws-cpp-sdk-core)

file(GLOB AWS_CONNECTHEALTH_HEADERS
    "include/aws/connecthealth/*.h"
)

file(GLOB AWS_CONNECTHEALTH_MODEL_HEADERS
    "include/aws/connecthealth/model/*.h"
)

file(GLOB AWS_CONNECTHEALTH_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CONNECTHEALTH_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CONNECTHEALTH_UNIFIED_HEADERS
    ${AWS_CONNECTHEALTH_HEADERS}
    ${AWS_CONNECTHEALTH_MODEL_HEADERS}
)

file(GLOB CONNECTHEALTH_UNITY_SRC
    ${AWS_CONNECTHEALTH_SOURCE}
    ${AWS_CONNECTHEALTH_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CONNECTHEALTH" CONNECTHEALTH_UNITY_SRC)
endif()

file(GLOB CONNECTHEALTH_SRC
    ${CONNECTHEALTH_UNIFIED_HEADERS}
    ${CONNECTHEALTH_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\connecthealth" FILES ${AWS_CONNECTHEALTH_HEADERS})
        source_group("Header Files\\aws\\connecthealth\\model" FILES ${AWS_CONNECTHEALTH_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CONNECTHEALTH_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CONNECTHEALTH_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CONNECTHEALTH_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CONNECTHEALTH_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CONNECTHEALTH_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CONNECTHEALTH_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/connecthealth)
install (FILES ${AWS_CONNECTHEALTH_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/connecthealth/model)

do_packaging()


