add_project(aws-cpp-sdk-globalaccelerator "C++ SDK for the AWS globalaccelerator service" aws-cpp-sdk-core)

file(GLOB AWS_GLOBALACCELERATOR_HEADERS
    "include/aws/globalaccelerator/*.h"
)

file(GLOB AWS_GLOBALACCELERATOR_MODEL_HEADERS
    "include/aws/globalaccelerator/model/*.h"
)

file(GLOB AWS_GLOBALACCELERATOR_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_GLOBALACCELERATOR_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB GLOBALACCELERATOR_UNIFIED_HEADERS
    ${AWS_GLOBALACCELERATOR_HEADERS}
    ${AWS_GLOBALACCELERATOR_MODEL_HEADERS}
)

file(GLOB GLOBALACCELERATOR_UNITY_SRC
    ${AWS_GLOBALACCELERATOR_SOURCE}
    ${AWS_GLOBALACCELERATOR_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("GLOBALACCELERATOR" GLOBALACCELERATOR_UNITY_SRC)
endif()

file(GLOB GLOBALACCELERATOR_SRC
    ${GLOBALACCELERATOR_UNIFIED_HEADERS}
    ${GLOBALACCELERATOR_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\globalaccelerator" FILES ${AWS_GLOBALACCELERATOR_HEADERS})
        source_group("Header Files\\aws\\globalaccelerator\\model" FILES ${AWS_GLOBALACCELERATOR_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_GLOBALACCELERATOR_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_GLOBALACCELERATOR_MODEL_SOURCE})
    endif(MSVC)
endif()

set(GLOBALACCELERATOR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${GLOBALACCELERATOR_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_GLOBALACCELERATOR_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_GLOBALACCELERATOR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/globalaccelerator)
install (FILES ${AWS_GLOBALACCELERATOR_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/globalaccelerator/model)

do_packaging()


