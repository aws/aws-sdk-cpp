/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/Event.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

Event::Event() : 
    m_errorCode(EventErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_name(EventName::NOT_SET),
    m_nameHasBeenSet(false),
    m_participantIdHasBeenSet(false),
    m_remoteParticipantIdHasBeenSet(false)
{
}

Event::Event(JsonView jsonValue) : 
    m_errorCode(EventErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_name(EventName::NOT_SET),
    m_nameHasBeenSet(false),
    m_participantIdHasBeenSet(false),
    m_remoteParticipantIdHasBeenSet(false)
{
  *this = jsonValue;
}

Event& Event::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = EventErrorCodeMapper::GetEventErrorCodeForName(jsonValue.GetString("errorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventTime"))
  {
    m_eventTime = jsonValue.GetString("eventTime");

    m_eventTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = EventNameMapper::GetEventNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("participantId"))
  {
    m_participantId = jsonValue.GetString("participantId");

    m_participantIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remoteParticipantId"))
  {
    m_remoteParticipantId = jsonValue.GetString("remoteParticipantId");

    m_remoteParticipantIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Event::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", EventErrorCodeMapper::GetNameForEventErrorCode(m_errorCode));
  }

  if(m_eventTimeHasBeenSet)
  {
   payload.WithString("eventTime", m_eventTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", EventNameMapper::GetNameForEventName(m_name));
  }

  if(m_participantIdHasBeenSet)
  {
   payload.WithString("participantId", m_participantId);

  }

  if(m_remoteParticipantIdHasBeenSet)
  {
   payload.WithString("remoteParticipantId", m_remoteParticipantId);

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
