add_project(aws-cpp-sdk-cloudsearchdomain "C++ SDK for the AWS cloudsearchdomain service" aws-cpp-sdk-core)

file(GLOB AWS_CLOUDSEARCHDOMAIN_HEADERS
    "include/aws/cloudsearchdomain/*.h"
)

file(GLOB AWS_CLOUDSEARCHDOMAIN_MODEL_HEADERS
    "include/aws/cloudsearchdomain/model/*.h"
)

file(GLOB AWS_CLOUDSEARCHDOMAIN_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CLOUDSEARCHDOMAIN_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CLOUDSEARCHDOMAIN_UNIFIED_HEADERS
    ${AWS_CLOUDSEARCHDOMAIN_HEADERS}
    ${AWS_CLOUDSEARCHDOMAIN_MODEL_HEADERS}
)

file(GLOB CLOUDSEARCHDOMAIN_UNITY_SRC
    ${AWS_CLOUDSEARCHDOMAIN_SOURCE}
    ${AWS_CLOUDSEARCHDOMAIN_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CLOUDSEARCHDOMAIN" CLOUDSEARCHDOMAIN_UNITY_SRC)
endif()

file(GLOB CLOUDSEARCHDOMAIN_SRC
    ${CLOUDSEARCHDOMAIN_UNIFIED_HEADERS}
    ${CLOUDSEARCHDOMAIN_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\cloudsearchdomain" FILES ${AWS_CLOUDSEARCHDOMAIN_HEADERS})
        source_group("Header Files\\aws\\cloudsearchdomain\\model" FILES ${AWS_CLOUDSEARCHDOMAIN_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CLOUDSEARCHDOMAIN_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CLOUDSEARCHDOMAIN_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CLOUDSEARCHDOMAIN_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CLOUDSEARCHDOMAIN_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CLOUDSEARCHDOMAIN_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CLOUDSEARCHDOMAIN_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudsearchdomain)
install (FILES ${AWS_CLOUDSEARCHDOMAIN_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudsearchdomain/model)

do_packaging()


