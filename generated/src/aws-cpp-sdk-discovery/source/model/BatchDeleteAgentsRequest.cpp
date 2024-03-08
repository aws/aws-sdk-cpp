/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/BatchDeleteAgentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteAgentsRequest::BatchDeleteAgentsRequest() : 
    m_deleteAgentsHasBeenSet(false)
{
}

Aws::String BatchDeleteAgentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deleteAgentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deleteAgentsJsonList(m_deleteAgents.size());
   for(unsigned deleteAgentsIndex = 0; deleteAgentsIndex < deleteAgentsJsonList.GetLength(); ++deleteAgentsIndex)
   {
     deleteAgentsJsonList[deleteAgentsIndex].AsObject(m_deleteAgents[deleteAgentsIndex].Jsonize());
   }
   payload.WithArray("deleteAgents", std::move(deleteAgentsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDeleteAgentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPoseidonService_V2015_11_01.BatchDeleteAgents"));
  return headers;

}




