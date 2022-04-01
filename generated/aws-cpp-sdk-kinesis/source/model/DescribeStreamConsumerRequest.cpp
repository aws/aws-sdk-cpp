/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/model/DescribeStreamConsumerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeStreamConsumerRequest::DescribeStreamConsumerRequest() : 
    m_streamARNHasBeenSet(false),
    m_consumerNameHasBeenSet(false),
    m_consumerARNHasBeenSet(false)
{
}

Aws::String DescribeStreamConsumerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamARNHasBeenSet)
  {
   payload.WithString("StreamARN", m_streamARN);

  }

  if(m_consumerNameHasBeenSet)
  {
   payload.WithString("ConsumerName", m_consumerName);

  }

  if(m_consumerARNHasBeenSet)
  {
   payload.WithString("ConsumerARN", m_consumerARN);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeStreamConsumerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.DescribeStreamConsumer"));
  return headers;

}




