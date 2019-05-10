add_project(aws-cpp-sdk-comprehendmedical "C++ SDK for the AWS comprehendmedical service" aws-cpp-sdk-core)

file(GLOB AWS_COMPREHENDMEDICAL_HEADERS
    "include/aws/comprehendmedical/*.h"
)

file(GLOB AWS_COMPREHENDMEDICAL_MODEL_HEADERS
    "include/aws/comprehendmedical/model/*.h"
)

file(GLOB AWS_COMPREHENDMEDICAL_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_COMPREHENDMEDICAL_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB COMPREHENDMEDICAL_UNIFIED_HEADERS
    ${AWS_COMPREHENDMEDICAL_HEADERS}
    ${AWS_COMPREHENDMEDICAL_MODEL_HEADERS}
)

file(GLOB COMPREHENDMEDICAL_UNITY_SRC
    ${AWS_COMPREHENDMEDICAL_SOURCE}
    ${AWS_COMPREHENDMEDICAL_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("COMPREHENDMEDICAL" COMPREHENDMEDICAL_UNITY_SRC)
endif()

file(GLOB COMPREHENDMEDICAL_SRC
    ${COMPREHENDMEDICAL_UNIFIED_HEADERS}
    ${COMPREHENDMEDICAL_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\comprehendmedical" FILES ${AWS_COMPREHENDMEDICAL_HEADERS})
        source_group("Header Files\\aws\\comprehendmedical\\model" FILES ${AWS_COMPREHENDMEDICAL_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_COMPREHENDMEDICAL_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_COMPREHENDMEDICAL_MODEL_SOURCE})
    endif(MSVC)
endif()

set(COMPREHENDMEDICAL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${COMPREHENDMEDICAL_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_COMPREHENDMEDICAL_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_COMPREHENDMEDICAL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/comprehendmedical)
install (FILES ${AWS_COMPREHENDMEDICAL_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/comprehendmedical/model)

do_packaging()


