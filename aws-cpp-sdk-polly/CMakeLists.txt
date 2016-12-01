add_project(aws-cpp-sdk-polly "C++ SDK for the AWS polly service" aws-cpp-sdk-core)

file(GLOB AWS_POLLY_HEADERS
    "include/aws/polly/*.h"
)

file(GLOB AWS_POLLY_MODEL_HEADERS
    "include/aws/polly/model/*.h"
)

file(GLOB AWS_POLLY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_POLLY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB POLLY_UNIFIED_HEADERS
    ${AWS_POLLY_HEADERS}
    ${AWS_POLLY_MODEL_HEADERS}
)

file(GLOB POLLY_UNITY_SRC
    ${AWS_POLLY_SOURCE}
    ${AWS_POLLY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("POLLY" POLLY_UNITY_SRC)
endif()

file(GLOB POLLY_SRC
    ${POLLY_UNIFIED_HEADERS}
    ${POLLY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\polly" FILES ${AWS_POLLY_HEADERS})
        source_group("Header Files\\aws\\polly\\model" FILES ${AWS_POLLY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_POLLY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_POLLY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(POLLY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${POLLY_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_POLLY_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${POLLY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_POLLY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/polly)
install (FILES ${AWS_POLLY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/polly/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


