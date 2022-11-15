add_project(aws-cpp-sdk-ssmsap "C++ SDK for the AWS ssmsap service" aws-cpp-sdk-core)

file(GLOB AWS_SSMSAP_HEADERS
    "include/aws/ssmsap/*.h"
)

file(GLOB AWS_SSMSAP_MODEL_HEADERS
    "include/aws/ssmsap/model/*.h"
)

file(GLOB AWS_SSMSAP_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SSMSAP_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SSMSAP_UNIFIED_HEADERS
    ${AWS_SSMSAP_HEADERS}
    ${AWS_SSMSAP_MODEL_HEADERS}
)

file(GLOB SSMSAP_UNITY_SRC
    ${AWS_SSMSAP_SOURCE}
    ${AWS_SSMSAP_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SSMSAP" SSMSAP_UNITY_SRC)
endif()

file(GLOB SSMSAP_SRC
    ${SSMSAP_UNIFIED_HEADERS}
    ${SSMSAP_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\ssmsap" FILES ${AWS_SSMSAP_HEADERS})
        source_group("Header Files\\aws\\ssmsap\\model" FILES ${AWS_SSMSAP_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SSMSAP_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SSMSAP_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SSMSAP_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SSMSAP_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SSMSAP_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SSMSAP_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ssmsap)
install (FILES ${AWS_SSMSAP_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ssmsap/model)

do_packaging()


