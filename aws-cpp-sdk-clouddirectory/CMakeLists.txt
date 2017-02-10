add_project(aws-cpp-sdk-clouddirectory "C++ SDK for the AWS clouddirectory service" aws-cpp-sdk-core)

file(GLOB AWS_CLOUDDIRECTORY_HEADERS
    "include/aws/clouddirectory/*.h"
)

file(GLOB AWS_CLOUDDIRECTORY_MODEL_HEADERS
    "include/aws/clouddirectory/model/*.h"
)

file(GLOB AWS_CLOUDDIRECTORY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CLOUDDIRECTORY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CLOUDDIRECTORY_UNIFIED_HEADERS
    ${AWS_CLOUDDIRECTORY_HEADERS}
    ${AWS_CLOUDDIRECTORY_MODEL_HEADERS}
)

file(GLOB CLOUDDIRECTORY_UNITY_SRC
    ${AWS_CLOUDDIRECTORY_SOURCE}
    ${AWS_CLOUDDIRECTORY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CLOUDDIRECTORY" CLOUDDIRECTORY_UNITY_SRC)
endif()

file(GLOB CLOUDDIRECTORY_SRC
    ${CLOUDDIRECTORY_UNIFIED_HEADERS}
    ${CLOUDDIRECTORY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\clouddirectory" FILES ${AWS_CLOUDDIRECTORY_HEADERS})
        source_group("Header Files\\aws\\clouddirectory\\model" FILES ${AWS_CLOUDDIRECTORY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CLOUDDIRECTORY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CLOUDDIRECTORY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CLOUDDIRECTORY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${CLOUDDIRECTORY_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CLOUDDIRECTORY_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${CLOUDDIRECTORY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_CLOUDDIRECTORY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/clouddirectory)
install (FILES ${AWS_CLOUDDIRECTORY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/clouddirectory/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


