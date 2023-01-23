/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/model/StreamDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDBStreams
{
namespace Model
{

StreamDescription::StreamDescription() : 
    m_streamArnHasBeenSet(false),
    m_streamLabelHasBeenSet(false),
    m_streamStatus(StreamStatus::NOT_SET),
    m_streamStatusHasBeenSet(false),
    m_streamViewType(StreamViewType::NOT_SET),
    m_streamViewTypeHasBeenSet(false),
    m_creationRequestDateTimeHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_keySchemaHasBeenSet(false),
    m_shardsHasBeenSet(false),
    m_lastEvaluatedShardIdHasBeenSet(false)
{
}

StreamDescription::StreamDescription(JsonView jsonValue) : 
    m_streamArnHasBeenSet(false),
    m_streamLabelHasBeenSet(false),
    m_streamStatus(StreamStatus::NOT_SET),
    m_streamStatusHasBeenSet(false),
    m_streamViewType(StreamViewType::NOT_SET),
    m_streamViewTypeHasBeenSet(false),
    m_creationRequestDateTimeHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_keySchemaHasBeenSet(false),
    m_shardsHasBeenSet(false),
    m_lastEvaluatedShardIdHasBeenSet(false)
{
  *this = jsonValue;
}

StreamDescription& StreamDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StreamArn"))
  {
    m_streamArn = jsonValue.GetString("StreamArn");

    m_streamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamLabel"))
  {
    m_streamLabel = jsonValue.GetString("StreamLabel");

    m_streamLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamStatus"))
  {
    m_streamStatus = StreamStatusMapper::GetStreamStatusForName(jsonValue.GetString("StreamStatus"));

    m_streamStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamViewType"))
  {
    m_streamViewType = StreamViewTypeMapper::GetStreamViewTypeForName(jsonValue.GetString("StreamViewType"));

    m_streamViewTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationRequestDateTime"))
  {
    m_creationRequestDateTime = jsonValue.GetDouble("CreationRequestDateTime");

    m_creationRequestDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeySchema"))
  {
    Aws::Utils::Array<JsonView> keySchemaJsonList = jsonValue.GetArray("KeySchema");
    for(unsigned keySchemaIndex = 0; keySchemaIndex < keySchemaJsonList.GetLength(); ++keySchemaIndex)
    {
      m_keySchema.push_back(keySchemaJsonList[keySchemaIndex].AsObject());
    }
    m_keySchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Shards"))
  {
    Aws::Utils::Array<JsonView> shardsJsonList = jsonValue.GetArray("Shards");
    for(unsigned shardsIndex = 0; shardsIndex < shardsJsonList.GetLength(); ++shardsIndex)
    {
      m_shards.push_back(shardsJsonList[shardsIndex].AsObject());
    }
    m_shardsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastEvaluatedShardId"))
  {
    m_lastEvaluatedShardId = jsonValue.GetString("LastEvaluatedShardId");

    m_lastEvaluatedShardIdHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamDescription::Jsonize() const
{
  JsonValue payload;

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("StreamArn", m_streamArn);

  }

  if(m_streamLabelHasBeenSet)
  {
   payload.WithString("StreamLabel", m_streamLabel);

  }

  if(m_streamStatusHasBeenSet)
  {
   payload.WithString("StreamStatus", StreamStatusMapper::GetNameForStreamStatus(m_streamStatus));
  }

  if(m_streamViewTypeHasBeenSet)
  {
   payload.WithString("StreamViewType", StreamViewTypeMapper::GetNameForStreamViewType(m_streamViewType));
  }

  if(m_creationRequestDateTimeHasBeenSet)
  {
   payload.WithDouble("CreationRequestDateTime", m_creationRequestDateTime.SecondsWithMSPrecision());
  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_keySchemaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keySchemaJsonList(m_keySchema.size());
   for(unsigned keySchemaIndex = 0; keySchemaIndex < keySchemaJsonList.GetLength(); ++keySchemaIndex)
   {
     keySchemaJsonList[keySchemaIndex].AsObject(m_keySchema[keySchemaIndex].Jsonize());
   }
   payload.WithArray("KeySchema", std::move(keySchemaJsonList));

  }

  if(m_shardsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> shardsJsonList(m_shards.size());
   for(unsigned shardsIndex = 0; shardsIndex < shardsJsonList.GetLength(); ++shardsIndex)
   {
     shardsJsonList[shardsIndex].AsObject(m_shards[shardsIndex].Jsonize());
   }
   payload.WithArray("Shards", std::move(shardsJsonList));

  }

  if(m_lastEvaluatedShardIdHasBeenSet)
  {
   payload.WithString("LastEvaluatedShardId", m_lastEvaluatedShardId);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
