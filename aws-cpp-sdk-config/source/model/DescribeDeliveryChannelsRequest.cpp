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
#include <aws/config/model/DescribeDeliveryChannelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDeliveryChannelsRequest::DescribeDeliveryChannelsRequest() : 
    m_deliveryChannelNamesHasBeenSet(false)
{
}

Aws::String DescribeDeliveryChannelsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deliveryChannelNamesHasBeenSet)
  {
   Array<JsonValue> deliveryChannelNamesJsonList(m_deliveryChannelNames.size());
   for(unsigned deliveryChannelNamesIndex = 0; deliveryChannelNamesIndex < deliveryChannelNamesJsonList.GetLength(); ++deliveryChannelNamesIndex)
   {
     deliveryChannelNamesJsonList[deliveryChannelNamesIndex].AsString(m_deliveryChannelNames[deliveryChannelNamesIndex]);
   }
   payload.WithArray("DeliveryChannelNames", std::move(deliveryChannelNamesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDeliveryChannelsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DescribeDeliveryChannels"));
  return headers;

}



