add_project(aws-cpp-sdk-elasticache "C++ SDK for the AWS elasticache service" aws-cpp-sdk-core)

file(GLOB AWS_ELASTICACHE_HEADERS
    "include/aws/elasticache/*.h"
)

file(GLOB AWS_ELASTICACHE_MODEL_HEADERS
    "include/aws/elasticache/model/*.h"
)

file(GLOB AWS_ELASTICACHE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ELASTICACHE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ELASTICACHE_UNIFIED_HEADERS
    ${AWS_ELASTICACHE_HEADERS}
    ${AWS_ELASTICACHE_MODEL_HEADERS}
)

file(GLOB ELASTICACHE_UNITY_SRC
    ${AWS_ELASTICACHE_SOURCE}
    ${AWS_ELASTICACHE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ELASTICACHE" ELASTICACHE_UNITY_SRC)
endif()

file(GLOB ELASTICACHE_SRC
    ${ELASTICACHE_UNIFIED_HEADERS}
    ${ELASTICACHE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\elasticache" FILES ${AWS_ELASTICACHE_HEADERS})
        source_group("Header Files\\aws\\elasticache\\model" FILES ${AWS_ELASTICACHE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ELASTICACHE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ELASTICACHE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ELASTICACHE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ELASTICACHE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ELASTICACHE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ELASTICACHE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elasticache)
install (FILES ${AWS_ELASTICACHE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elasticache/model)

do_packaging()


