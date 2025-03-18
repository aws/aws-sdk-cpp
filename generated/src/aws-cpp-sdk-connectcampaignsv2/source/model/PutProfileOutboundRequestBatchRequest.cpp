/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/PutProfileOutboundRequestBatchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCampaignsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutProfileOutboundRequestBatchRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_profileOutboundRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> profileOutboundRequestsJsonList(m_profileOutboundRequests.size());
   for(unsigned profileOutboundRequestsIndex = 0; profileOutboundRequestsIndex < profileOutboundRequestsJsonList.GetLength(); ++profileOutboundRequestsIndex)
   {
     profileOutboundRequestsJsonList[profileOutboundRequestsIndex].AsObject(m_profileOutboundRequests[profileOutboundRequestsIndex].Jsonize());
   }
   payload.WithArray("profileOutboundRequests", std::move(profileOutboundRequestsJsonList));

  }

  return payload.View().WriteReadable();
}




