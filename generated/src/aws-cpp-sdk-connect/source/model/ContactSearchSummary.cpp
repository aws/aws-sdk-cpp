/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactSearchSummary.h>
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

ContactSearchSummary::ContactSearchSummary() : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_initialContactIdHasBeenSet(false),
    m_previousContactIdHasBeenSet(false),
    m_initiationMethod(ContactInitiationMethod::NOT_SET),
    m_initiationMethodHasBeenSet(false),
    m_channel(Channel::NOT_SET),
    m_channelHasBeenSet(false),
    m_queueInfoHasBeenSet(false),
    m_agentInfoHasBeenSet(false),
    m_initiationTimestampHasBeenSet(false),
    m_disconnectTimestampHasBeenSet(false),
    m_scheduledTimestampHasBeenSet(false)
{
}

ContactSearchSummary::ContactSearchSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_initialContactIdHasBeenSet(false),
    m_previousContactIdHasBeenSet(false),
    m_initiationMethod(ContactInitiationMethod::NOT_SET),
    m_initiationMethodHasBeenSet(false),
    m_channel(Channel::NOT_SET),
    m_channelHasBeenSet(false),
    m_queueInfoHasBeenSet(false),
    m_agentInfoHasBeenSet(false),
    m_initiationTimestampHasBeenSet(false),
    m_disconnectTimestampHasBeenSet(false),
    m_scheduledTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

ContactSearchSummary& ContactSearchSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ScheduledTimestamp"))
  {
    m_scheduledTimestamp = jsonValue.GetDouble("ScheduledTimestamp");

    m_scheduledTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue ContactSearchSummary::Jsonize() const
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

  if(m_scheduledTimestampHasBeenSet)
  {
   payload.WithDouble("ScheduledTimestamp", m_scheduledTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
