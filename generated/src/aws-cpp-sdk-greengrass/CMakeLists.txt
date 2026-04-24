add_project(aws-cpp-sdk-greengrass "C++ SDK for the AWS greengrass service" aws-cpp-sdk-core)

file(GLOB AWS_GREENGRASS_HEADERS
    "include/aws/greengrass/*.h"
)

file(GLOB AWS_GREENGRASS_MODEL_HEADERS
    "include/aws/greengrass/model/*.h"
)

file(GLOB AWS_GREENGRASS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_GREENGRASS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB GREENGRASS_UNIFIED_HEADERS
    ${AWS_GREENGRASS_HEADERS}
    ${AWS_GREENGRASS_MODEL_HEADERS}
)

file(GLOB GREENGRASS_UNITY_SRC
    ${AWS_GREENGRASS_SOURCE}
    ${AWS_GREENGRASS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("GREENGRASS" GREENGRASS_UNITY_SRC)
endif()

file(GLOB GREENGRASS_SRC
    ${GREENGRASS_UNIFIED_HEADERS}
    ${GREENGRASS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\greengrass" FILES ${AWS_GREENGRASS_HEADERS})
        source_group("Header Files\\aws\\greengrass\\model" FILES ${AWS_GREENGRASS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_GREENGRASS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_GREENGRASS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(GREENGRASS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${GREENGRASS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_GREENGRASS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_GREENGRASS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/greengrass)
install (FILES ${AWS_GREENGRASS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/greengrass/model)

do_packaging()


