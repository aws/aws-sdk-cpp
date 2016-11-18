/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/firehose/model/ListDeliveryStreamsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Firehose::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListDeliveryStreamsRequest::ListDeliveryStreamsRequest() : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_exclusiveStartDeliveryStreamNameHasBeenSet(false)
{
}

Aws::String ListDeliveryStreamsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_exclusiveStartDeliveryStreamNameHasBeenSet)
  {
   payload.WithString("ExclusiveStartDeliveryStreamName", m_exclusiveStartDeliveryStreamName);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListDeliveryStreamsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Firehose_20150804.ListDeliveryStreams"));
  return headers;

}



