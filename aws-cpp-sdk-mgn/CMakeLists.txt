add_project(aws-cpp-sdk-mgn "C++ SDK for the AWS mgn service" aws-cpp-sdk-core)

file(GLOB AWS_MGN_HEADERS
    "include/aws/mgn/*.h"
)

file(GLOB AWS_MGN_MODEL_HEADERS
    "include/aws/mgn/model/*.h"
)

file(GLOB AWS_MGN_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MGN_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MGN_UNIFIED_HEADERS
    ${AWS_MGN_HEADERS}
    ${AWS_MGN_MODEL_HEADERS}
)

file(GLOB MGN_UNITY_SRC
    ${AWS_MGN_SOURCE}
    ${AWS_MGN_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MGN" MGN_UNITY_SRC)
endif()

file(GLOB MGN_SRC
    ${MGN_UNIFIED_HEADERS}
    ${MGN_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\mgn" FILES ${AWS_MGN_HEADERS})
        source_group("Header Files\\aws\\mgn\\model" FILES ${AWS_MGN_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MGN_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MGN_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MGN_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MGN_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MGN_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MGN_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mgn)
install (FILES ${AWS_MGN_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mgn/model)

do_packaging()


