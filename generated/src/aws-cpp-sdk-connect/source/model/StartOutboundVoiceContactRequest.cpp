/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/StartOutboundVoiceContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartOutboundVoiceContactRequest::StartOutboundVoiceContactRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_relatedContactIdHasBeenSet(false),
    m_destinationPhoneNumberHasBeenSet(false),
    m_contactFlowIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_sourcePhoneNumberHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_answerMachineDetectionConfigHasBeenSet(false),
    m_campaignIdHasBeenSet(false),
    m_trafficType(TrafficType::NOT_SET),
    m_trafficTypeHasBeenSet(false)
{
}

Aws::String StartOutboundVoiceContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

  if(m_relatedContactIdHasBeenSet)
  {
   payload.WithString("RelatedContactId", m_relatedContactId);

  }

  if(m_destinationPhoneNumberHasBeenSet)
  {
   payload.WithString("DestinationPhoneNumber", m_destinationPhoneNumber);

  }

  if(m_contactFlowIdHasBeenSet)
  {
   payload.WithString("ContactFlowId", m_contactFlowId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_sourcePhoneNumberHasBeenSet)
  {
   payload.WithString("SourcePhoneNumber", m_sourcePhoneNumber);

  }

  if(m_queueIdHasBeenSet)
  {
   payload.WithString("QueueId", m_queueId);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_answerMachineDetectionConfigHasBeenSet)
  {
   payload.WithObject("AnswerMachineDetectionConfig", m_answerMachineDetectionConfig.Jsonize());

  }

  if(m_campaignIdHasBeenSet)
  {
   payload.WithString("CampaignId", m_campaignId);

  }

  if(m_trafficTypeHasBeenSet)
  {
   payload.WithString("TrafficType", TrafficTypeMapper::GetNameForTrafficType(m_trafficType));
  }

  return payload.View().WriteReadable();
}




