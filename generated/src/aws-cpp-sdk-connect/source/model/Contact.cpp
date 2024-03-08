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

Contact::Contact() : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_initialContactIdHasBeenSet(false),
    m_previousContactIdHasBeenSet(false),
    m_initiationMethod(ContactInitiationMethod::NOT_SET),
    m_initiationMethodHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_channel(Channel::NOT_SET),
    m_channelHasBeenSet(false),
    m_queueInfoHasBeenSet(false),
    m_agentInfoHasBeenSet(false),
    m_initiationTimestampHasBeenSet(false),
    m_disconnectTimestampHasBeenSet(false),
    m_lastUpdateTimestampHasBeenSet(false),
    m_lastPausedTimestampHasBeenSet(false),
    m_lastResumedTimestampHasBeenSet(false),
    m_totalPauseCount(0),
    m_totalPauseCountHasBeenSet(false),
    m_totalPauseDurationInSeconds(0),
    m_totalPauseDurationInSecondsHasBeenSet(false),
    m_scheduledTimestampHasBeenSet(false),
    m_relatedContactIdHasBeenSet(false),
    m_wisdomInfoHasBeenSet(false),
    m_queueTimeAdjustmentSeconds(0),
    m_queueTimeAdjustmentSecondsHasBeenSet(false),
    m_queuePriority(0),
    m_queuePriorityHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Contact::Contact(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_initialContactIdHasBeenSet(false),
    m_previousContactIdHasBeenSet(false),
    m_initiationMethod(ContactInitiationMethod::NOT_SET),
    m_initiationMethodHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_channel(Channel::NOT_SET),
    m_channelHasBeenSet(false),
    m_queueInfoHasBeenSet(false),
    m_agentInfoHasBeenSet(false),
    m_initiationTimestampHasBeenSet(false),
    m_disconnectTimestampHasBeenSet(false),
    m_lastUpdateTimestampHasBeenSet(false),
    m_lastPausedTimestampHasBeenSet(false),
    m_lastResumedTimestampHasBeenSet(false),
    m_totalPauseCount(0),
    m_totalPauseCountHasBeenSet(false),
    m_totalPauseDurationInSeconds(0),
    m_totalPauseDurationInSecondsHasBeenSet(false),
    m_scheduledTimestampHasBeenSet(false),
    m_relatedContactIdHasBeenSet(false),
    m_wisdomInfoHasBeenSet(false),
    m_queueTimeAdjustmentSeconds(0),
    m_queueTimeAdjustmentSecondsHasBeenSet(false),
    m_queuePriority(0),
    m_queuePriorityHasBeenSet(false),
    m_tagsHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
