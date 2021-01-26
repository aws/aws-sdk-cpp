/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/model/GetShardIteratorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDBStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetShardIteratorRequest::GetShardIteratorRequest() : 
    m_streamArnHasBeenSet(false),
    m_shardIdHasBeenSet(false),
    m_shardIteratorType(ShardIteratorType::NOT_SET),
    m_shardIteratorTypeHasBeenSet(false),
    m_sequenceNumberHasBeenSet(false)
{
}

Aws::String GetShardIteratorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("StreamArn", m_streamArn);

  }

  if(m_shardIdHasBeenSet)
  {
   payload.WithString("ShardId", m_shardId);

  }

  if(m_shardIteratorTypeHasBeenSet)
  {
   payload.WithString("ShardIteratorType", ShardIteratorTypeMapper::GetNameForShardIteratorType(m_shardIteratorType));
  }

  if(m_sequenceNumberHasBeenSet)
  {
   payload.WithString("SequenceNumber", m_sequenceNumber);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetShardIteratorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDBStreams_20120810.GetShardIterator"));
  return headers;

}




