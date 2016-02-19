cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-queues)

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
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-sqs/include/"
    "${CORE_DIR}/include/"
  )

include_directories(${QUEUES_INCLUDES})

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_QUEUES_EXPORTS")
endif()

add_library(aws-cpp-sdk-queues ${LIBTYPE} ${QUEUES_SRC})

target_include_directories(aws-cpp-sdk-queues PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(aws-cpp-sdk-queues aws-cpp-sdk-sqs)

install (TARGETS aws-cpp-sdk-queues
         ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
         LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
         RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

install (FILES ${AWS_QUEUES_HEADERS} DESTINATION include/aws/queues)
install (FILES ${AWS_SQS_QUEUES_HEADERS} DESTINATION include/aws/queues/sqs)