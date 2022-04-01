add_project(aws-cpp-sdk-queues 
    "High-level C++ SDK for SQS message passing" 
    aws-cpp-sdk-sqs 
    aws-cpp-sdk-core)

file(GLOB AWS_QUEUES_HEADERS
    "include/aws/queues/*.h"
)

file(GLOB AWS_SQS_QUEUES_HEADERS
    "include/aws/queues/sqs/*.h"
)

file(GLOB AWS_SQS_QUEUES_SOURCE
      "source/sqs/*.cpp"
)

if(MSVC)
    source_group("Header Files\\aws\\queues" FILES ${AWS_QUEUES_HEADERS})
    source_group("Header Files\\aws\\queues\\sqs" FILES ${AWS_SQS_QUEUES_HEADERS})

    source_group("Source Files\\sqs" FILES ${AWS_SQS_QUEUES_SOURCE})
endif()

file(GLOB QUEUES_SRC
  ${AWS_QUEUES_HEADERS}
  ${AWS_SQS_QUEUES_HEADERS}
  ${AWS_SQS_QUEUES_SOURCE}
)

set(QUEUES_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
  )

include_directories(${QUEUES_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_QUEUES_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${QUEUES_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_QUEUES_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/queues)
install (FILES ${AWS_SQS_QUEUES_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/queues/sqs)

do_packaging()
