/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisSegmentEvent.h>
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

RealTimeContactAnalysisSegmentEvent::RealTimeContactAnalysisSegmentEvent() : 
    m_idHasBeenSet(false),
    m_participantIdHasBeenSet(false),
    m_participantRole(ParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_timeHasBeenSet(false)
{
}

RealTimeContactAnalysisSegmentEvent::RealTimeContactAnalysisSegmentEvent(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_participantIdHasBeenSet(false),
    m_participantRole(ParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_timeHasBeenSet(false)
{
  *this = jsonValue;
}

RealTimeContactAnalysisSegmentEvent& RealTimeContactAnalysisSegmentEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParticipantId"))
  {
    m_participantId = jsonValue.GetString("ParticipantId");

    m_participantIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParticipantRole"))
  {
    m_participantRole = ParticipantRoleMapper::GetParticipantRoleForName(jsonValue.GetString("ParticipantRole"));

    m_participantRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventType"))
  {
    m_eventType = jsonValue.GetString("EventType");

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Time"))
  {
    m_time = jsonValue.GetObject("Time");

    m_timeHasBeenSet = true;
  }

  return *this;
}

JsonValue RealTimeContactAnalysisSegmentEvent::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_participantIdHasBeenSet)
  {
   payload.WithString("ParticipantId", m_participantId);

  }

  if(m_participantRoleHasBeenSet)
  {
   payload.WithString("ParticipantRole", ParticipantRoleMapper::GetNameForParticipantRole(m_participantRole));
  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("EventType", m_eventType);

  }

  if(m_timeHasBeenSet)
  {
   payload.WithObject("Time", m_time.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
