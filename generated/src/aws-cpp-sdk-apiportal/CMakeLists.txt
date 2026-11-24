add_project(aws-cpp-sdk-apiportal "C++ SDK for APIPortal" aws-cpp-sdk-core)

file(GLOB AWS_APIPORTAL_HEADERS
    "include/aws/apiportal/*.h"
)

file(GLOB AWS_APIPORTAL_MODEL_HEADERS
    "include/aws/apiportal/model/*.h"
)

file(GLOB AWS_APIPORTAL_INTERNAL_HEADERS
    "include/aws/apiportal/internal/*.h"
)

file(GLOB AWS_APIPORTAL_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_APIPORTAL_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB APIPORTAL_UNIFIED_HEADERS
    ${AWS_APIPORTAL_HEADERS}
    ${AWS_APIPORTAL_INTERNAL_HEADERS}
    ${AWS_APIPORTAL_MODEL_HEADERS}
)

file(GLOB APIPORTAL_UNITY_SRC
    ${AWS_APIPORTAL_SOURCE}
    ${AWS_APIPORTAL_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("APIPORTAL" APIPORTAL_UNITY_SRC)
endif()

file(GLOB APIPORTAL_SRC
    ${APIPORTAL_UNIFIED_HEADERS}
    ${APIPORTAL_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\apiportal" FILES ${AWS_APIPORTAL_HEADERS})
        source_group("Header Files\\aws\\apiportal\\internal" FILES ${AWS_APIPORTAL_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\apiportal\\model" FILES ${AWS_APIPORTAL_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_APIPORTAL_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_APIPORTAL_MODEL_SOURCE})
    endif(MSVC)
endif()

set(APIPORTAL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${APIPORTAL_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APIPORTAL_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_APIPORTAL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/apiportal)
install (FILES ${AWS_APIPORTAL_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/apiportal/model)

do_packaging()


