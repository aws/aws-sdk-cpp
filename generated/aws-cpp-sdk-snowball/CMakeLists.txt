add_project(aws-cpp-sdk-snowball "C++ SDK for the AWS snowball service" aws-cpp-sdk-core)

file(GLOB AWS_SNOWBALL_HEADERS
    "include/aws/snowball/*.h"
)

file(GLOB AWS_SNOWBALL_MODEL_HEADERS
    "include/aws/snowball/model/*.h"
)

file(GLOB AWS_SNOWBALL_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SNOWBALL_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SNOWBALL_UNIFIED_HEADERS
    ${AWS_SNOWBALL_HEADERS}
    ${AWS_SNOWBALL_MODEL_HEADERS}
)

file(GLOB SNOWBALL_UNITY_SRC
    ${AWS_SNOWBALL_SOURCE}
    ${AWS_SNOWBALL_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SNOWBALL" SNOWBALL_UNITY_SRC)
endif()

file(GLOB SNOWBALL_SRC
    ${SNOWBALL_UNIFIED_HEADERS}
    ${SNOWBALL_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\snowball" FILES ${AWS_SNOWBALL_HEADERS})
        source_group("Header Files\\aws\\snowball\\model" FILES ${AWS_SNOWBALL_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SNOWBALL_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SNOWBALL_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SNOWBALL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SNOWBALL_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SNOWBALL_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SNOWBALL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/snowball)
install (FILES ${AWS_SNOWBALL_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/snowball/model)

do_packaging()


