add_project(aws-cpp-sdk-gameliftstreams "C++ SDK for the AWS gameliftstreams service" aws-cpp-sdk-core)

file(GLOB AWS_GAMELIFTSTREAMS_HEADERS
    "include/aws/gameliftstreams/*.h"
)

file(GLOB AWS_GAMELIFTSTREAMS_MODEL_HEADERS
    "include/aws/gameliftstreams/model/*.h"
)

file(GLOB AWS_GAMELIFTSTREAMS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_GAMELIFTSTREAMS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB GAMELIFTSTREAMS_UNIFIED_HEADERS
    ${AWS_GAMELIFTSTREAMS_HEADERS}
    ${AWS_GAMELIFTSTREAMS_MODEL_HEADERS}
)

file(GLOB GAMELIFTSTREAMS_UNITY_SRC
    ${AWS_GAMELIFTSTREAMS_SOURCE}
    ${AWS_GAMELIFTSTREAMS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("GAMELIFTSTREAMS" GAMELIFTSTREAMS_UNITY_SRC)
endif()

file(GLOB GAMELIFTSTREAMS_SRC
    ${GAMELIFTSTREAMS_UNIFIED_HEADERS}
    ${GAMELIFTSTREAMS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\gameliftstreams" FILES ${AWS_GAMELIFTSTREAMS_HEADERS})
        source_group("Header Files\\aws\\gameliftstreams\\model" FILES ${AWS_GAMELIFTSTREAMS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_GAMELIFTSTREAMS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_GAMELIFTSTREAMS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(GAMELIFTSTREAMS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${GAMELIFTSTREAMS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_GAMELIFTSTREAMS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_GAMELIFTSTREAMS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/gameliftstreams)
install (FILES ${AWS_GAMELIFTSTREAMS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/gameliftstreams/model)

do_packaging()


