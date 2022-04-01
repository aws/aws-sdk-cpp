add_project(aws-cpp-sdk-directconnect "C++ SDK for the AWS directconnect service" aws-cpp-sdk-core)

file(GLOB AWS_DIRECTCONNECT_HEADERS
    "include/aws/directconnect/*.h"
)

file(GLOB AWS_DIRECTCONNECT_MODEL_HEADERS
    "include/aws/directconnect/model/*.h"
)

file(GLOB AWS_DIRECTCONNECT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DIRECTCONNECT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DIRECTCONNECT_UNIFIED_HEADERS
    ${AWS_DIRECTCONNECT_HEADERS}
    ${AWS_DIRECTCONNECT_MODEL_HEADERS}
)

file(GLOB DIRECTCONNECT_UNITY_SRC
    ${AWS_DIRECTCONNECT_SOURCE}
    ${AWS_DIRECTCONNECT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DIRECTCONNECT" DIRECTCONNECT_UNITY_SRC)
endif()

file(GLOB DIRECTCONNECT_SRC
    ${DIRECTCONNECT_UNIFIED_HEADERS}
    ${DIRECTCONNECT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\directconnect" FILES ${AWS_DIRECTCONNECT_HEADERS})
        source_group("Header Files\\aws\\directconnect\\model" FILES ${AWS_DIRECTCONNECT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DIRECTCONNECT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DIRECTCONNECT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DIRECTCONNECT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${DIRECTCONNECT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_DIRECTCONNECT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_DIRECTCONNECT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/directconnect)
install (FILES ${AWS_DIRECTCONNECT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/directconnect/model)

do_packaging()


