add_project(aws-cpp-sdk-elasticloadbalancing "C++ SDK for the AWS elasticloadbalancing service" aws-cpp-sdk-core)

file(GLOB AWS_ELASTICLOADBALANCING_HEADERS
    "include/aws/elasticloadbalancing/*.h"
)

file(GLOB AWS_ELASTICLOADBALANCING_MODEL_HEADERS
    "include/aws/elasticloadbalancing/model/*.h"
)

file(GLOB AWS_ELASTICLOADBALANCING_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ELASTICLOADBALANCING_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ELASTICLOADBALANCING_UNIFIED_HEADERS
    ${AWS_ELASTICLOADBALANCING_HEADERS}
    ${AWS_ELASTICLOADBALANCING_MODEL_HEADERS}
)

file(GLOB ELASTICLOADBALANCING_UNITY_SRC
    ${AWS_ELASTICLOADBALANCING_SOURCE}
    ${AWS_ELASTICLOADBALANCING_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ELASTICLOADBALANCING" ELASTICLOADBALANCING_UNITY_SRC)
endif()

file(GLOB ELASTICLOADBALANCING_SRC
    ${ELASTICLOADBALANCING_UNIFIED_HEADERS}
    ${ELASTICLOADBALANCING_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\elasticloadbalancing" FILES ${AWS_ELASTICLOADBALANCING_HEADERS})
        source_group("Header Files\\aws\\elasticloadbalancing\\model" FILES ${AWS_ELASTICLOADBALANCING_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ELASTICLOADBALANCING_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ELASTICLOADBALANCING_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ELASTICLOADBALANCING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ELASTICLOADBALANCING_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ELASTICLOADBALANCING_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ELASTICLOADBALANCING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elasticloadbalancing)
install (FILES ${AWS_ELASTICLOADBALANCING_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elasticloadbalancing/model)

do_packaging()


