/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Contact.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

Contact::Contact(JsonView jsonValue)
{
  *this = jsonValue;
}

Contact& Contact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InitialContactId"))
  {
    m_initialContactId = jsonValue.GetString("InitialContactId");
    m_initialContactIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreviousContactId"))
  {
    m_previousContactId = jsonValue.GetString("PreviousContactId");
    m_previousContactIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContactAssociationId"))
  {
    m_contactAssociationId = jsonValue.GetString("ContactAssociationId");
    m_contactAssociationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InitiationMethod"))
  {
    m_initiationMethod = ContactInitiationMethodMapper::GetContactInitiationMethodForName(jsonValue.GetString("InitiationMethod"));
    m_initiationMethodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Channel"))
  {
    m_channel = ChannelMapper::GetChannelForName(jsonValue.GetString("Channel"));
    m_channelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueueInfo"))
  {
    m_queueInfo = jsonValue.GetObject("QueueInfo");
    m_queueInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AgentInfo"))
  {
    m_agentInfo = jsonValue.GetObject("AgentInfo");
    m_agentInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InitiationTimestamp"))
  {
    m_initiationTimestamp = jsonValue.GetDouble("InitiationTimestamp");
    m_initiationTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisconnectTimestamp"))
  {
    m_disconnectTimestamp = jsonValue.GetDouble("DisconnectTimestamp");
    m_disconnectTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdateTimestamp"))
  {
    m_lastUpdateTimestamp = jsonValue.GetDouble("LastUpdateTimestamp");
    m_lastUpdateTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastPausedTimestamp"))
  {
    m_lastPausedTimestamp = jsonValue.GetDouble("LastPausedTimestamp");
    m_lastPausedTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastResumedTimestamp"))
  {
    m_lastResumedTimestamp = jsonValue.GetDouble("LastResumedTimestamp");
    m_lastResumedTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalPauseCount"))
  {
    m_totalPauseCount = jsonValue.GetInteger("TotalPauseCount");
    m_totalPauseCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalPauseDurationInSeconds"))
  {
    m_totalPauseDurationInSeconds = jsonValue.GetInteger("TotalPauseDurationInSeconds");
    m_totalPauseDurationInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScheduledTimestamp"))
  {
    m_scheduledTimestamp = jsonValue.GetDouble("ScheduledTimestamp");
    m_scheduledTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RelatedContactId"))
  {
    m_relatedContactId = jsonValue.GetString("RelatedContactId");
    m_relatedContactIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WisdomInfo"))
  {
    m_wisdomInfo = jsonValue.GetObject("WisdomInfo");
    m_wisdomInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomerId"))
  {
    m_customerId = jsonValue.GetString("CustomerId");
    m_customerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomerEndpoint"))
  {
    m_customerEndpoint = jsonValue.GetObject("CustomerEndpoint");
    m_customerEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SystemEndpoint"))
  {
    m_systemEndpoint = jsonValue.GetObject("SystemEndpoint");
    m_systemEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueueTimeAdjustmentSeconds"))
  {
    m_queueTimeAdjustmentSeconds = jsonValue.GetInteger("QueueTimeAdjustmentSeconds");
    m_queueTimeAdjustmentSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueuePriority"))
  {
    m_queuePriority = jsonValue.GetInt64("QueuePriority");
    m_queuePriorityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectedToSystemTimestamp"))
  {
    m_connectedToSystemTimestamp = jsonValue.GetDouble("ConnectedToSystemTimestamp");
    m_connectedToSystemTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoutingCriteria"))
  {
    m_routingCriteria = jsonValue.GetObject("RoutingCriteria");
    m_routingCriteriaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Customer"))
  {
    m_customer = jsonValue.GetObject("Customer");
    m_customerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Campaign"))
  {
    m_campaign = jsonValue.GetObject("Campaign");
    m_campaignHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnsweringMachineDetectionStatus"))
  {
    m_answeringMachineDetectionStatus = AnsweringMachineDetectionStatusMapper::GetAnsweringMachineDetectionStatusForName(jsonValue.GetString("AnsweringMachineDetectionStatus"));
    m_answeringMachineDetectionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomerVoiceActivity"))
  {
    m_customerVoiceActivity = jsonValue.GetObject("CustomerVoiceActivity");
    m_customerVoiceActivityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QualityMetrics"))
  {
    m_qualityMetrics = jsonValue.GetObject("QualityMetrics");
    m_qualityMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChatMetrics"))
  {
    m_chatMetrics = jsonValue.GetObject("ChatMetrics");
    m_chatMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisconnectDetails"))
  {
    m_disconnectDetails = jsonValue.GetObject("DisconnectDetails");
    m_disconnectDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdditionalEmailRecipients"))
  {
    m_additionalEmailRecipients = jsonValue.GetObject("AdditionalEmailRecipients");
    m_additionalEmailRecipientsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SegmentAttributes"))
  {
    Aws::Map<Aws::String, JsonView> segmentAttributesJsonMap = jsonValue.GetObject("SegmentAttributes").GetAllObjects();
    for(auto& segmentAttributesItem : segmentAttributesJsonMap)
    {
      m_segmentAttributes[segmentAttributesItem.first] = segmentAttributesItem.second.AsObject();
    }
    m_segmentAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Recordings"))
  {
    Aws::Utils::Array<JsonView> recordingsJsonList = jsonValue.GetArray("Recordings");
    for(unsigned recordingsIndex = 0; recordingsIndex < recordingsJsonList.GetLength(); ++recordingsIndex)
    {
      m_recordings.push_back(recordingsJsonList[recordingsIndex].AsObject());
    }
    m_recordingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisconnectReason"))
  {
    m_disconnectReason = jsonValue.GetString("DisconnectReason");
    m_disconnectReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContactEvaluations"))
  {
    Aws::Map<Aws::String, JsonView> contactEvaluationsJsonMap = jsonValue.GetObject("ContactEvaluations").GetAllObjects();
    for(auto& contactEvaluationsItem : contactEvaluationsJsonMap)
    {
      m_contactEvaluations[contactEvaluationsItem.first] = contactEvaluationsItem.second.AsObject();
    }
    m_contactEvaluationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContactDetails"))
  {
    m_contactDetails = jsonValue.GetObject("ContactDetails");
    m_contactDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }
  return *this;
}

JsonValue Contact::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_initialContactIdHasBeenSet)
  {
   payload.WithString("InitialContactId", m_initialContactId);

  }

  if(m_previousContactIdHasBeenSet)
  {
   payload.WithString("PreviousContactId", m_previousContactId);

  }

  if(m_contactAssociationIdHasBeenSet)
  {
   payload.WithString("ContactAssociationId", m_contactAssociationId);

  }

  if(m_initiationMethodHasBeenSet)
  {
   payload.WithString("InitiationMethod", ContactInitiationMethodMapper::GetNameForContactInitiationMethod(m_initiationMethod));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_channelHasBeenSet)
  {
   payload.WithString("Channel", ChannelMapper::GetNameForChannel(m_channel));
  }

  if(m_queueInfoHasBeenSet)
  {
   payload.WithObject("QueueInfo", m_queueInfo.Jsonize());

  }

  if(m_agentInfoHasBeenSet)
  {
   payload.WithObject("AgentInfo", m_agentInfo.Jsonize());

  }

  if(m_initiationTimestampHasBeenSet)
  {
   payload.WithDouble("InitiationTimestamp", m_initiationTimestamp.SecondsWithMSPrecision());
  }

  if(m_disconnectTimestampHasBeenSet)
  {
   payload.WithDouble("DisconnectTimestamp", m_disconnectTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdateTimestamp", m_lastUpdateTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastPausedTimestampHasBeenSet)
  {
   payload.WithDouble("LastPausedTimestamp", m_lastPausedTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastResumedTimestampHasBeenSet)
  {
   payload.WithDouble("LastResumedTimestamp", m_lastResumedTimestamp.SecondsWithMSPrecision());
  }

  if(m_totalPauseCountHasBeenSet)
  {
   payload.WithInteger("TotalPauseCount", m_totalPauseCount);

  }

  if(m_totalPauseDurationInSecondsHasBeenSet)
  {
   payload.WithInteger("TotalPauseDurationInSeconds", m_totalPauseDurationInSeconds);

  }

  if(m_scheduledTimestampHasBeenSet)
  {
   payload.WithDouble("ScheduledTimestamp", m_scheduledTimestamp.SecondsWithMSPrecision());
  }

  if(m_relatedContactIdHasBeenSet)
  {
   payload.WithString("RelatedContactId", m_relatedContactId);

  }

  if(m_wisdomInfoHasBeenSet)
  {
   payload.WithObject("WisdomInfo", m_wisdomInfo.Jsonize());

  }

  if(m_customerIdHasBeenSet)
  {
   payload.WithString("CustomerId", m_customerId);

  }

  if(m_customerEndpointHasBeenSet)
  {
   payload.WithObject("CustomerEndpoint", m_customerEndpoint.Jsonize());

  }

  if(m_systemEndpointHasBeenSet)
  {
   payload.WithObject("SystemEndpoint", m_systemEndpoint.Jsonize());

  }

  if(m_queueTimeAdjustmentSecondsHasBeenSet)
  {
   payload.WithInteger("QueueTimeAdjustmentSeconds", m_queueTimeAdjustmentSeconds);

  }

  if(m_queuePriorityHasBeenSet)
  {
   payload.WithInt64("QueuePriority", m_queuePriority);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_connectedToSystemTimestampHasBeenSet)
  {
   payload.WithDouble("ConnectedToSystemTimestamp", m_connectedToSystemTimestamp.SecondsWithMSPrecision());
  }

  if(m_routingCriteriaHasBeenSet)
  {
   payload.WithObject("RoutingCriteria", m_routingCriteria.Jsonize());

  }

  if(m_customerHasBeenSet)
  {
   payload.WithObject("Customer", m_customer.Jsonize());

  }

  if(m_campaignHasBeenSet)
  {
   payload.WithObject("Campaign", m_campaign.Jsonize());

  }

  if(m_answeringMachineDetectionStatusHasBeenSet)
  {
   payload.WithString("AnsweringMachineDetectionStatus", AnsweringMachineDetectionStatusMapper::GetNameForAnsweringMachineDetectionStatus(m_answeringMachineDetectionStatus));
  }

  if(m_customerVoiceActivityHasBeenSet)
  {
   payload.WithObject("CustomerVoiceActivity", m_customerVoiceActivity.Jsonize());

  }

  if(m_qualityMetricsHasBeenSet)
  {
   payload.WithObject("QualityMetrics", m_qualityMetrics.Jsonize());

  }

  if(m_chatMetricsHasBeenSet)
  {
   payload.WithObject("ChatMetrics", m_chatMetrics.Jsonize());

  }

  if(m_disconnectDetailsHasBeenSet)
  {
   payload.WithObject("DisconnectDetails", m_disconnectDetails.Jsonize());

  }

  if(m_additionalEmailRecipientsHasBeenSet)
  {
   payload.WithObject("AdditionalEmailRecipients", m_additionalEmailRecipients.Jsonize());

  }

  if(m_segmentAttributesHasBeenSet)
  {
   JsonValue segmentAttributesJsonMap;
   for(auto& segmentAttributesItem : m_segmentAttributes)
   {
     segmentAttributesJsonMap.WithObject(segmentAttributesItem.first, segmentAttributesItem.second.Jsonize());
   }
   payload.WithObject("SegmentAttributes", std::move(segmentAttributesJsonMap));

  }

  if(m_recordingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recordingsJsonList(m_recordings.size());
   for(unsigned recordingsIndex = 0; recordingsIndex < recordingsJsonList.GetLength(); ++recordingsIndex)
   {
     recordingsJsonList[recordingsIndex].AsObject(m_recordings[recordingsIndex].Jsonize());
   }
   payload.WithArray("Recordings", std::move(recordingsJsonList));

  }

  if(m_disconnectReasonHasBeenSet)
  {
   payload.WithString("DisconnectReason", m_disconnectReason);

  }

  if(m_contactEvaluationsHasBeenSet)
  {
   JsonValue contactEvaluationsJsonMap;
   for(auto& contactEvaluationsItem : m_contactEvaluations)
   {
     contactEvaluationsJsonMap.WithObject(contactEvaluationsItem.first, contactEvaluationsItem.second.Jsonize());
   }
   payload.WithObject("ContactEvaluations", std::move(contactEvaluationsJsonMap));

  }

  if(m_contactDetailsHasBeenSet)
  {
   payload.WithObject("ContactDetails", m_contactDetails.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
