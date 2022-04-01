add_project(aws-cpp-sdk-databrew "C++ SDK for the AWS databrew service" aws-cpp-sdk-core)

file(GLOB AWS_DATABREW_HEADERS
    "include/aws/databrew/*.h"
)

file(GLOB AWS_DATABREW_MODEL_HEADERS
    "include/aws/databrew/model/*.h"
)

file(GLOB AWS_DATABREW_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DATABREW_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DATABREW_UNIFIED_HEADERS
    ${AWS_DATABREW_HEADERS}
    ${AWS_DATABREW_MODEL_HEADERS}
)

file(GLOB DATABREW_UNITY_SRC
    ${AWS_DATABREW_SOURCE}
    ${AWS_DATABREW_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DATABREW" DATABREW_UNITY_SRC)
endif()

file(GLOB DATABREW_SRC
    ${DATABREW_UNIFIED_HEADERS}
    ${DATABREW_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\databrew" FILES ${AWS_DATABREW_HEADERS})
        source_group("Header Files\\aws\\databrew\\model" FILES ${AWS_DATABREW_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DATABREW_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DATABREW_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DATABREW_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${DATABREW_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_GLUEDATABREW_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_DATABREW_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/databrew)
install (FILES ${AWS_DATABREW_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/databrew/model)

do_packaging()


