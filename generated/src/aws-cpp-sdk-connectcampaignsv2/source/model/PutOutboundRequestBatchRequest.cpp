/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/PutOutboundRequestBatchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCampaignsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutOutboundRequestBatchRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_outboundRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outboundRequestsJsonList(m_outboundRequests.size());
   for(unsigned outboundRequestsIndex = 0; outboundRequestsIndex < outboundRequestsJsonList.GetLength(); ++outboundRequestsIndex)
   {
     outboundRequestsJsonList[outboundRequestsIndex].AsObject(m_outboundRequests[outboundRequestsIndex].Jsonize());
   }
   payload.WithArray("outboundRequests", std::move(outboundRequestsJsonList));

  }

  return payload.View().WriteReadable();
}




