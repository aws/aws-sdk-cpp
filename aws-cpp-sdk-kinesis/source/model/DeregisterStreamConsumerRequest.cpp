﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/kinesis/model/DeregisterStreamConsumerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterStreamConsumerRequest::DeregisterStreamConsumerRequest() : 
    m_streamARNHasBeenSet(false),
    m_consumerNameHasBeenSet(false),
    m_consumerARNHasBeenSet(false)
{
}

Aws::String DeregisterStreamConsumerRequest::SerializePayload() const
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

Aws::Http::HeaderValueCollection DeregisterStreamConsumerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.DeregisterStreamConsumer"));
  return headers;

}




