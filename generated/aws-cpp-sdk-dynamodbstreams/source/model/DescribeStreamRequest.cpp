/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/model/DescribeStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDBStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeStreamRequest::DescribeStreamRequest() : 
    m_streamArnHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_exclusiveStartShardIdHasBeenSet(false)
{
}

Aws::String DescribeStreamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("StreamArn", m_streamArn);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_exclusiveStartShardIdHasBeenSet)
  {
   payload.WithString("ExclusiveStartShardId", m_exclusiveStartShardId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeStreamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDBStreams_20120810.DescribeStream"));
  return headers;

}




