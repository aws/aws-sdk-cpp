/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/StartWebRTCContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartWebRTCContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_contactFlowIdHasBeenSet)
  {
   payload.WithString("ContactFlowId", m_contactFlowId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_allowedCapabilitiesHasBeenSet)
  {
   payload.WithObject("AllowedCapabilities", m_allowedCapabilities.Jsonize());

  }

  if(m_participantDetailsHasBeenSet)
  {
   payload.WithObject("ParticipantDetails", m_participantDetails.Jsonize());

  }

  if(m_relatedContactIdHasBeenSet)
  {
   payload.WithString("RelatedContactId", m_relatedContactId);

  }

  if(m_referencesHasBeenSet)
  {
   JsonValue referencesJsonMap;
   for(auto& referencesItem : m_references)
   {
     referencesJsonMap.WithObject(referencesItem.first, referencesItem.second.Jsonize());
   }
   payload.WithObject("References", std::move(referencesJsonMap));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload.View().WriteReadable();
}




