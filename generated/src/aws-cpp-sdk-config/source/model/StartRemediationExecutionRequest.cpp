/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/StartRemediationExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartRemediationExecutionRequest::StartRemediationExecutionRequest() : 
    m_configRuleNameHasBeenSet(false),
    m_resourceKeysHasBeenSet(false)
{
}

Aws::String StartRemediationExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configRuleNameHasBeenSet)
  {
   payload.WithString("ConfigRuleName", m_configRuleName);

  }

  if(m_resourceKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceKeysJsonList(m_resourceKeys.size());
   for(unsigned resourceKeysIndex = 0; resourceKeysIndex < resourceKeysJsonList.GetLength(); ++resourceKeysIndex)
   {
     resourceKeysJsonList[resourceKeysIndex].AsObject(m_resourceKeys[resourceKeysIndex].Jsonize());
   }
   payload.WithArray("ResourceKeys", std::move(resourceKeysJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartRemediationExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.StartRemediationExecution"));
  return headers;

}




