/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/StopDataCollectionByAgentIdsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopDataCollectionByAgentIdsRequest::StopDataCollectionByAgentIdsRequest() : 
    m_agentIdsHasBeenSet(false)
{
}

Aws::String StopDataCollectionByAgentIdsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agentIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentIdsJsonList(m_agentIds.size());
   for(unsigned agentIdsIndex = 0; agentIdsIndex < agentIdsJsonList.GetLength(); ++agentIdsIndex)
   {
     agentIdsJsonList[agentIdsIndex].AsString(m_agentIds[agentIdsIndex]);
   }
   payload.WithArray("agentIds", std::move(agentIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopDataCollectionByAgentIdsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPoseidonService_V2015_11_01.StopDataCollectionByAgentIds"));
  return headers;

}




