/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/model/GetShardIteratorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KeyspacesStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetShardIteratorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("streamArn", m_streamArn);

  }

  if(m_shardIdHasBeenSet)
  {
   payload.WithString("shardId", m_shardId);

  }

  if(m_shardIteratorTypeHasBeenSet)
  {
   payload.WithString("shardIteratorType", ShardIteratorTypeMapper::GetNameForShardIteratorType(m_shardIteratorType));
  }

  if(m_sequenceNumberHasBeenSet)
  {
   payload.WithString("sequenceNumber", m_sequenceNumber);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetShardIteratorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KeyspacesStreams.GetShardIterator"));
  return headers;

}




