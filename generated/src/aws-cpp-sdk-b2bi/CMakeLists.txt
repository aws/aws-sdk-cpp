add_project(aws-cpp-sdk-b2bi "C++ SDK for the AWS b2bi service" aws-cpp-sdk-core)

file(GLOB AWS_B2BI_HEADERS
    "include/aws/b2bi/*.h"
)

file(GLOB AWS_B2BI_MODEL_HEADERS
    "include/aws/b2bi/model/*.h"
)

file(GLOB AWS_B2BI_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_B2BI_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB B2BI_UNIFIED_HEADERS
    ${AWS_B2BI_HEADERS}
    ${AWS_B2BI_MODEL_HEADERS}
)

file(GLOB B2BI_UNITY_SRC
    ${AWS_B2BI_SOURCE}
    ${AWS_B2BI_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("B2BI" B2BI_UNITY_SRC)
endif()

file(GLOB B2BI_SRC
    ${B2BI_UNIFIED_HEADERS}
    ${B2BI_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\b2bi" FILES ${AWS_B2BI_HEADERS})
        source_group("Header Files\\aws\\b2bi\\model" FILES ${AWS_B2BI_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_B2BI_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_B2BI_MODEL_SOURCE})
    endif(MSVC)
endif()

set(B2BI_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${B2BI_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_B2BI_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_B2BI_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/b2bi)
install (FILES ${AWS_B2BI_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/b2bi/model)

do_packaging()


