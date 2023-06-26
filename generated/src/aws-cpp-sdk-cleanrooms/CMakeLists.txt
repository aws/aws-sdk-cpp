add_project(aws-cpp-sdk-cleanrooms "C++ SDK for the AWS cleanrooms service" aws-cpp-sdk-core)

file(GLOB AWS_CLEANROOMS_HEADERS
    "include/aws/cleanrooms/*.h"
)

file(GLOB AWS_CLEANROOMS_MODEL_HEADERS
    "include/aws/cleanrooms/model/*.h"
)

file(GLOB AWS_CLEANROOMS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CLEANROOMS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CLEANROOMS_UNIFIED_HEADERS
    ${AWS_CLEANROOMS_HEADERS}
    ${AWS_CLEANROOMS_MODEL_HEADERS}
)

file(GLOB CLEANROOMS_UNITY_SRC
    ${AWS_CLEANROOMS_SOURCE}
    ${AWS_CLEANROOMS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CLEANROOMS" CLEANROOMS_UNITY_SRC)
endif()

file(GLOB CLEANROOMS_SRC
    ${CLEANROOMS_UNIFIED_HEADERS}
    ${CLEANROOMS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\cleanrooms" FILES ${AWS_CLEANROOMS_HEADERS})
        source_group("Header Files\\aws\\cleanrooms\\model" FILES ${AWS_CLEANROOMS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CLEANROOMS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CLEANROOMS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CLEANROOMS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CLEANROOMS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CLEANROOMS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CLEANROOMS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cleanrooms)
install (FILES ${AWS_CLEANROOMS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cleanrooms/model)

do_packaging()


