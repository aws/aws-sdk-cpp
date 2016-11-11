add_project(aws-cpp-sdk-sts "C++ SDK for the AWS sts service" aws-cpp-sdk-core)

file(GLOB AWS_STS_HEADERS
    "include/aws/sts/*.h"
)

file(GLOB AWS_STS_MODEL_HEADERS
    "include/aws/sts/model/*.h"
)

file(GLOB AWS_STS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_STS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB STS_UNIFIED_HEADERS
    ${AWS_STS_HEADERS}
    ${AWS_STS_MODEL_HEADERS}
)

file(GLOB STS_UNITY_SRC
    ${AWS_STS_SOURCE}
    ${AWS_STS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("STS" STS_UNITY_SRC)
endif()

file(GLOB STS_SRC
    ${STS_UNIFIED_HEADERS}
    ${STS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\sts" FILES ${AWS_STS_HEADERS})
        source_group("Header Files\\aws\\sts\\model" FILES ${AWS_STS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_STS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_STS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(STS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${STS_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_STS_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${STS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_STS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sts)
install (FILES ${AWS_STS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sts/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


