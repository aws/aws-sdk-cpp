/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AgentContactReference.h>
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

AgentContactReference::AgentContactReference() : 
    m_contactIdHasBeenSet(false),
    m_channel(Channel::NOT_SET),
    m_channelHasBeenSet(false),
    m_initiationMethod(ContactInitiationMethod::NOT_SET),
    m_initiationMethodHasBeenSet(false),
    m_agentContactState(ContactState::NOT_SET),
    m_agentContactStateHasBeenSet(false),
    m_stateStartTimestampHasBeenSet(false),
    m_connectedToAgentTimestampHasBeenSet(false),
    m_queueHasBeenSet(false)
{
}

AgentContactReference::AgentContactReference(JsonView jsonValue) : 
    m_contactIdHasBeenSet(false),
    m_channel(Channel::NOT_SET),
    m_channelHasBeenSet(false),
    m_initiationMethod(ContactInitiationMethod::NOT_SET),
    m_initiationMethodHasBeenSet(false),
    m_agentContactState(ContactState::NOT_SET),
    m_agentContactStateHasBeenSet(false),
    m_stateStartTimestampHasBeenSet(false),
    m_connectedToAgentTimestampHasBeenSet(false),
    m_queueHasBeenSet(false)
{
  *this = jsonValue;
}

AgentContactReference& AgentContactReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContactId"))
  {
    m_contactId = jsonValue.GetString("ContactId");

    m_contactIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Channel"))
  {
    m_channel = ChannelMapper::GetChannelForName(jsonValue.GetString("Channel"));

    m_channelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InitiationMethod"))
  {
    m_initiationMethod = ContactInitiationMethodMapper::GetContactInitiationMethodForName(jsonValue.GetString("InitiationMethod"));

    m_initiationMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AgentContactState"))
  {
    m_agentContactState = ContactStateMapper::GetContactStateForName(jsonValue.GetString("AgentContactState"));

    m_agentContactStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateStartTimestamp"))
  {
    m_stateStartTimestamp = jsonValue.GetDouble("StateStartTimestamp");

    m_stateStartTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectedToAgentTimestamp"))
  {
    m_connectedToAgentTimestamp = jsonValue.GetDouble("ConnectedToAgentTimestamp");

    m_connectedToAgentTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Queue"))
  {
    m_queue = jsonValue.GetObject("Queue");

    m_queueHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentContactReference::Jsonize() const
{
  JsonValue payload;

  if(m_contactIdHasBeenSet)
  {
   payload.WithString("ContactId", m_contactId);

  }

  if(m_channelHasBeenSet)
  {
   payload.WithString("Channel", ChannelMapper::GetNameForChannel(m_channel));
  }

  if(m_initiationMethodHasBeenSet)
  {
   payload.WithString("InitiationMethod", ContactInitiationMethodMapper::GetNameForContactInitiationMethod(m_initiationMethod));
  }

  if(m_agentContactStateHasBeenSet)
  {
   payload.WithString("AgentContactState", ContactStateMapper::GetNameForContactState(m_agentContactState));
  }

  if(m_stateStartTimestampHasBeenSet)
  {
   payload.WithDouble("StateStartTimestamp", m_stateStartTimestamp.SecondsWithMSPrecision());
  }

  if(m_connectedToAgentTimestampHasBeenSet)
  {
   payload.WithDouble("ConnectedToAgentTimestamp", m_connectedToAgentTimestamp.SecondsWithMSPrecision());
  }

  if(m_queueHasBeenSet)
  {
   payload.WithObject("Queue", m_queue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
