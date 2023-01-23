/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeDeliveryChannelStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDeliveryChannelStatusRequest::DescribeDeliveryChannelStatusRequest() : 
    m_deliveryChannelNamesHasBeenSet(false)
{
}

Aws::String DescribeDeliveryChannelStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deliveryChannelNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deliveryChannelNamesJsonList(m_deliveryChannelNames.size());
   for(unsigned deliveryChannelNamesIndex = 0; deliveryChannelNamesIndex < deliveryChannelNamesJsonList.GetLength(); ++deliveryChannelNamesIndex)
   {
     deliveryChannelNamesJsonList[deliveryChannelNamesIndex].AsString(m_deliveryChannelNames[deliveryChannelNamesIndex]);
   }
   payload.WithArray("DeliveryChannelNames", std::move(deliveryChannelNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDeliveryChannelStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DescribeDeliveryChannelStatus"));
  return headers;

}




