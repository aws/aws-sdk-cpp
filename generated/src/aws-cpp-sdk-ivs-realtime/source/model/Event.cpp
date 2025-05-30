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

Event::Event(JsonView jsonValue)
{
  *this = jsonValue;
}

Event& Event::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("eventTime"))
  {
    m_eventTime = jsonValue.GetString("eventTime");
    m_eventTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remoteParticipantId"))
  {
    m_remoteParticipantId = jsonValue.GetString("remoteParticipantId");
    m_remoteParticipantIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = EventErrorCodeMapper::GetEventErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("destinationStageArn"))
  {
    m_destinationStageArn = jsonValue.GetString("destinationStageArn");
    m_destinationStageArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("destinationSessionId"))
  {
    m_destinationSessionId = jsonValue.GetString("destinationSessionId");
    m_destinationSessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("replica"))
  {
    m_replica = jsonValue.GetBool("replica");
    m_replicaHasBeenSet = true;
  }
  return *this;
}

JsonValue Event::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", EventNameMapper::GetNameForEventName(m_name));
  }

  if(m_participantIdHasBeenSet)
  {
   payload.WithString("participantId", m_participantId);

  }

  if(m_eventTimeHasBeenSet)
  {
   payload.WithString("eventTime", m_eventTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_remoteParticipantIdHasBeenSet)
  {
   payload.WithString("remoteParticipantId", m_remoteParticipantId);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", EventErrorCodeMapper::GetNameForEventErrorCode(m_errorCode));
  }

  if(m_destinationStageArnHasBeenSet)
  {
   payload.WithString("destinationStageArn", m_destinationStageArn);

  }

  if(m_destinationSessionIdHasBeenSet)
  {
   payload.WithString("destinationSessionId", m_destinationSessionId);

  }

  if(m_replicaHasBeenSet)
  {
   payload.WithBool("replica", m_replica);

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
