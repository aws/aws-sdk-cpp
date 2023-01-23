/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/PutDialRequestBatchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCampaigns::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutDialRequestBatchRequest::PutDialRequestBatchRequest() : 
    m_dialRequestsHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

Aws::String PutDialRequestBatchRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dialRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dialRequestsJsonList(m_dialRequests.size());
   for(unsigned dialRequestsIndex = 0; dialRequestsIndex < dialRequestsJsonList.GetLength(); ++dialRequestsIndex)
   {
     dialRequestsJsonList[dialRequestsIndex].AsObject(m_dialRequests[dialRequestsIndex].Jsonize());
   }
   payload.WithArray("dialRequests", std::move(dialRequestsJsonList));

  }

  return payload.View().WriteReadable();
}




