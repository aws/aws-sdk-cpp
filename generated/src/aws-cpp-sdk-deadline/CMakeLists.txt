add_project(aws-cpp-sdk-deadline "C++ SDK for the AWS deadline service" aws-cpp-sdk-core)

file(GLOB AWS_DEADLINE_HEADERS
    "include/aws/deadline/*.h"
)

file(GLOB AWS_DEADLINE_MODEL_HEADERS
    "include/aws/deadline/model/*.h"
)

file(GLOB AWS_DEADLINE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DEADLINE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DEADLINE_UNIFIED_HEADERS
    ${AWS_DEADLINE_HEADERS}
    ${AWS_DEADLINE_MODEL_HEADERS}
)

file(GLOB DEADLINE_UNITY_SRC
    ${AWS_DEADLINE_SOURCE}
    ${AWS_DEADLINE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DEADLINE" DEADLINE_UNITY_SRC)
endif()

file(GLOB DEADLINE_SRC
    ${DEADLINE_UNIFIED_HEADERS}
    ${DEADLINE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\deadline" FILES ${AWS_DEADLINE_HEADERS})
        source_group("Header Files\\aws\\deadline\\model" FILES ${AWS_DEADLINE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DEADLINE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DEADLINE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DEADLINE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${DEADLINE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_DEADLINE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_DEADLINE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/deadline)
install (FILES ${AWS_DEADLINE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/deadline/model)

do_packaging()


