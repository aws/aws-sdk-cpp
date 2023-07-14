/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/model/GetShardIteratorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetShardIteratorRequest::GetShardIteratorRequest() : 
    m_streamNameHasBeenSet(false),
    m_shardIdHasBeenSet(false),
    m_shardIteratorType(ShardIteratorType::NOT_SET),
    m_shardIteratorTypeHasBeenSet(false),
    m_startingSequenceNumberHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

Aws::String GetShardIteratorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  if(m_shardIdHasBeenSet)
  {
   payload.WithString("ShardId", m_shardId);

  }

  if(m_shardIteratorTypeHasBeenSet)
  {
   payload.WithString("ShardIteratorType", ShardIteratorTypeMapper::GetNameForShardIteratorType(m_shardIteratorType));
  }

  if(m_startingSequenceNumberHasBeenSet)
  {
   payload.WithString("StartingSequenceNumber", m_startingSequenceNumber);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetShardIteratorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.GetShardIterator"));
  return headers;

}




