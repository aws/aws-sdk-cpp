/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/kinesis/model/GetShardIteratorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetShardIteratorRequest::GetShardIteratorRequest() : 
    m_startingSequenceNumberHasBeenSet(false)
{
}

Aws::String GetShardIteratorRequest::SerializePayload() const
{
  JsonValue payload;

  payload.WithString("StreamName", m_streamName);

  payload.WithString("ShardId", m_shardId);

  payload.WithString("ShardIteratorType", ShardIteratorTypeMapper::GetNameForShardIteratorType(m_shardIteratorType));
  if(m_startingSequenceNumberHasBeenSet)
  {
   payload.WithString("StartingSequenceNumber", m_startingSequenceNumber);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection GetShardIteratorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.GetShardIterator"));
  return std::move(headers);

}



