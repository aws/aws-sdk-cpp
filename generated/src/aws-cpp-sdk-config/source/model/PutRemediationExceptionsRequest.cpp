/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/PutRemediationExceptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRemediationExceptionsRequest::PutRemediationExceptionsRequest() : 
    m_configRuleNameHasBeenSet(false),
    m_resourceKeysHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_expirationTimeHasBeenSet(false)
{
}

Aws::String PutRemediationExceptionsRequest::SerializePayload() const
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

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithDouble("ExpirationTime", m_expirationTime.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutRemediationExceptionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.PutRemediationExceptions"));
  return headers;

}




