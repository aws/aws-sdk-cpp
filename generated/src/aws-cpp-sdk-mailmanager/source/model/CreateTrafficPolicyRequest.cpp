/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/CreateTrafficPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateTrafficPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_trafficPolicyNameHasBeenSet)
  {
   payload.WithString("TrafficPolicyName", m_trafficPolicyName);

  }

  if(m_policyStatementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policyStatementsJsonList(m_policyStatements.size());
   for(unsigned policyStatementsIndex = 0; policyStatementsIndex < policyStatementsJsonList.GetLength(); ++policyStatementsIndex)
   {
     policyStatementsJsonList[policyStatementsIndex].AsObject(m_policyStatements[policyStatementsIndex].Jsonize());
   }
   payload.WithArray("PolicyStatements", std::move(policyStatementsJsonList));

  }

  if(m_defaultActionHasBeenSet)
  {
   payload.WithString("DefaultAction", AcceptActionMapper::GetNameForAcceptAction(m_defaultAction));
  }

  if(m_maxMessageSizeBytesHasBeenSet)
  {
   payload.WithInteger("MaxMessageSizeBytes", m_maxMessageSizeBytes);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTrafficPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.CreateTrafficPolicy"));
  return headers;

}




