/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/CreateResponsePlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMIncidents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateResponsePlanRequest::CreateResponsePlanRequest() : 
    m_actionsHasBeenSet(false),
    m_chatChannelHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_displayNameHasBeenSet(false),
    m_engagementsHasBeenSet(false),
    m_incidentTemplateHasBeenSet(false),
    m_integrationsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateResponsePlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
   }
   payload.WithArray("actions", std::move(actionsJsonList));

  }

  if(m_chatChannelHasBeenSet)
  {
   payload.WithObject("chatChannel", m_chatChannel.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_engagementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> engagementsJsonList(m_engagements.size());
   for(unsigned engagementsIndex = 0; engagementsIndex < engagementsJsonList.GetLength(); ++engagementsIndex)
   {
     engagementsJsonList[engagementsIndex].AsString(m_engagements[engagementsIndex]);
   }
   payload.WithArray("engagements", std::move(engagementsJsonList));

  }

  if(m_incidentTemplateHasBeenSet)
  {
   payload.WithObject("incidentTemplate", m_incidentTemplate.Jsonize());

  }

  if(m_integrationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> integrationsJsonList(m_integrations.size());
   for(unsigned integrationsIndex = 0; integrationsIndex < integrationsJsonList.GetLength(); ++integrationsIndex)
   {
     integrationsJsonList[integrationsIndex].AsObject(m_integrations[integrationsIndex].Jsonize());
   }
   payload.WithArray("integrations", std::move(integrationsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

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




