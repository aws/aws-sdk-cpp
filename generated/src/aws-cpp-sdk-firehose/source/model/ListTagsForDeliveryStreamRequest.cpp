/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/ListTagsForDeliveryStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Firehose::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTagsForDeliveryStreamRequest::ListTagsForDeliveryStreamRequest() : 
    m_deliveryStreamNameHasBeenSet(false),
    m_exclusiveStartTagKeyHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String ListTagsForDeliveryStreamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deliveryStreamNameHasBeenSet)
  {
   payload.WithString("DeliveryStreamName", m_deliveryStreamName);

  }

  if(m_exclusiveStartTagKeyHasBeenSet)
  {
   payload.WithString("ExclusiveStartTagKey", m_exclusiveStartTagKey);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListTagsForDeliveryStreamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Firehose_20150804.ListTagsForDeliveryStream"));
  return headers;

}




