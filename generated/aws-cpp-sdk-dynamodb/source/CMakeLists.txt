target_sources(aws-sdk-cpp-dynamodb
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/DynamoDBClient.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/DynamoDBEndpoint.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/DynamoDBErrorMarshaller.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/DynamoDBErrors.cpp
        )
add_subdirectory(model)