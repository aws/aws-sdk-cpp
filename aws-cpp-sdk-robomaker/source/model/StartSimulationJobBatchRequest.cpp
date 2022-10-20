/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/StartSimulationJobBatchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartSimulationJobBatchRequest::StartSimulationJobBatchRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_batchPolicyHasBeenSet(false),
    m_createSimulationJobRequestsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String StartSimulationJobBatchRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_batchPolicyHasBeenSet)
  {
   payload.WithObject("batchPolicy", m_batchPolicy.Jsonize());

  }

  if(m_createSimulationJobRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> createSimulationJobRequestsJsonList(m_createSimulationJobRequests.size());
   for(unsigned createSimulationJobRequestsIndex = 0; createSimulationJobRequestsIndex < createSimulationJobRequestsJsonList.GetLength(); ++createSimulationJobRequestsIndex)
   {
     createSimulationJobRequestsJsonList[createSimulationJobRequestsIndex].AsObject(m_createSimulationJobRequests[createSimulationJobRequestsIndex].Jsonize());
   }
   payload.WithArray("createSimulationJobRequests", std::move(createSimulationJobRequestsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




