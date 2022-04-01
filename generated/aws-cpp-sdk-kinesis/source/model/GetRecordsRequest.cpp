/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/model/GetRecordsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRecordsRequest::GetRecordsRequest() : 
    m_shardIteratorHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String GetRecordsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_shardIteratorHasBeenSet)
  {
   payload.WithString("ShardIterator", m_shardIterator);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRecordsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.GetRecords"));
  return headers;

}




