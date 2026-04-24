add_project(aws-cpp-sdk-interconnect "C++ SDK for the AWS interconnect service" aws-cpp-sdk-core)

file(GLOB AWS_INTERCONNECT_HEADERS
    "include/aws/interconnect/*.h"
)

file(GLOB AWS_INTERCONNECT_MODEL_HEADERS
    "include/aws/interconnect/model/*.h"
)

file(GLOB AWS_INTERCONNECT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_INTERCONNECT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB INTERCONNECT_UNIFIED_HEADERS
    ${AWS_INTERCONNECT_HEADERS}
    ${AWS_INTERCONNECT_MODEL_HEADERS}
)

file(GLOB INTERCONNECT_UNITY_SRC
    ${AWS_INTERCONNECT_SOURCE}
    ${AWS_INTERCONNECT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("INTERCONNECT" INTERCONNECT_UNITY_SRC)
endif()

file(GLOB INTERCONNECT_SRC
    ${INTERCONNECT_UNIFIED_HEADERS}
    ${INTERCONNECT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\interconnect" FILES ${AWS_INTERCONNECT_HEADERS})
        source_group("Header Files\\aws\\interconnect\\model" FILES ${AWS_INTERCONNECT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_INTERCONNECT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_INTERCONNECT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(INTERCONNECT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${INTERCONNECT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_INTERCONNECT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_INTERCONNECT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/interconnect)
install (FILES ${AWS_INTERCONNECT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/interconnect/model)

do_packaging()


