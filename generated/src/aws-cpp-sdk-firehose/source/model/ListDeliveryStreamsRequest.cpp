/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_deliveryStreamType(DeliveryStreamType::NOT_SET),
    m_deliveryStreamTypeHasBeenSet(false),
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

  if(m_deliveryStreamTypeHasBeenSet)
  {
   payload.WithString("DeliveryStreamType", DeliveryStreamTypeMapper::GetNameForDeliveryStreamType(m_deliveryStreamType));
  }

  if(m_exclusiveStartDeliveryStreamNameHasBeenSet)
  {
   payload.WithString("ExclusiveStartDeliveryStreamName", m_exclusiveStartDeliveryStreamName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListDeliveryStreamsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Firehose_20150804.ListDeliveryStreams"));
  return headers;

}




