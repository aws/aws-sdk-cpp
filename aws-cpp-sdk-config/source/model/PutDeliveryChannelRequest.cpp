/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/PutDeliveryChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutDeliveryChannelRequest::PutDeliveryChannelRequest() : 
    m_deliveryChannelHasBeenSet(false)
{
}

Aws::String PutDeliveryChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deliveryChannelHasBeenSet)
  {
   payload.WithObject("DeliveryChannel", m_deliveryChannel.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutDeliveryChannelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.PutDeliveryChannel"));
  return headers;

}




