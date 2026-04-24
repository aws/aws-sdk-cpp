add_project(aws-cpp-sdk-cost-optimization-hub "C++ SDK for the AWS cost-optimization-hub service" aws-cpp-sdk-core)

file(GLOB AWS_COST-OPTIMIZATION-HUB_HEADERS
    "include/aws/cost-optimization-hub/*.h"
)

file(GLOB AWS_COST-OPTIMIZATION-HUB_MODEL_HEADERS
    "include/aws/cost-optimization-hub/model/*.h"
)

file(GLOB AWS_COST-OPTIMIZATION-HUB_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_COST-OPTIMIZATION-HUB_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB COST-OPTIMIZATION-HUB_UNIFIED_HEADERS
    ${AWS_COST-OPTIMIZATION-HUB_HEADERS}
    ${AWS_COST-OPTIMIZATION-HUB_MODEL_HEADERS}
)

file(GLOB COST-OPTIMIZATION-HUB_UNITY_SRC
    ${AWS_COST-OPTIMIZATION-HUB_SOURCE}
    ${AWS_COST-OPTIMIZATION-HUB_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("COST-OPTIMIZATION-HUB" COST-OPTIMIZATION-HUB_UNITY_SRC)
endif()

file(GLOB COST-OPTIMIZATION-HUB_SRC
    ${COST-OPTIMIZATION-HUB_UNIFIED_HEADERS}
    ${COST-OPTIMIZATION-HUB_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\cost-optimization-hub" FILES ${AWS_COST-OPTIMIZATION-HUB_HEADERS})
        source_group("Header Files\\aws\\cost-optimization-hub\\model" FILES ${AWS_COST-OPTIMIZATION-HUB_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_COST-OPTIMIZATION-HUB_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_COST-OPTIMIZATION-HUB_MODEL_SOURCE})
    endif(MSVC)
endif()

set(COST-OPTIMIZATION-HUB_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${COST-OPTIMIZATION-HUB_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_COSTOPTIMIZATIONHUB_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_COST-OPTIMIZATION-HUB_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cost-optimization-hub)
install (FILES ${AWS_COST-OPTIMIZATION-HUB_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cost-optimization-hub/model)

do_packaging()


