/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ParticipantMetrics.h>
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

ParticipantMetrics::ParticipantMetrics(JsonView jsonValue)
{
  *this = jsonValue;
}

ParticipantMetrics& ParticipantMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParticipantId"))
  {
    m_participantId = jsonValue.GetString("ParticipantId");
    m_participantIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParticipantType"))
  {
    m_participantType = ParticipantTypeMapper::GetParticipantTypeForName(jsonValue.GetString("ParticipantType"));
    m_participantTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConversationAbandon"))
  {
    m_conversationAbandon = jsonValue.GetBool("ConversationAbandon");
    m_conversationAbandonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MessagesSent"))
  {
    m_messagesSent = jsonValue.GetInteger("MessagesSent");
    m_messagesSentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumResponses"))
  {
    m_numResponses = jsonValue.GetInteger("NumResponses");
    m_numResponsesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MessageLengthInChars"))
  {
    m_messageLengthInChars = jsonValue.GetInteger("MessageLengthInChars");
    m_messageLengthInCharsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalResponseTimeInMillis"))
  {
    m_totalResponseTimeInMillis = jsonValue.GetInt64("TotalResponseTimeInMillis");
    m_totalResponseTimeInMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxResponseTimeInMillis"))
  {
    m_maxResponseTimeInMillis = jsonValue.GetInt64("MaxResponseTimeInMillis");
    m_maxResponseTimeInMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastMessageTimestamp"))
  {
    m_lastMessageTimestamp = jsonValue.GetDouble("LastMessageTimestamp");
    m_lastMessageTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue ParticipantMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_participantIdHasBeenSet)
  {
   payload.WithString("ParticipantId", m_participantId);

  }

  if(m_participantTypeHasBeenSet)
  {
   payload.WithString("ParticipantType", ParticipantTypeMapper::GetNameForParticipantType(m_participantType));
  }

  if(m_conversationAbandonHasBeenSet)
  {
   payload.WithBool("ConversationAbandon", m_conversationAbandon);

  }

  if(m_messagesSentHasBeenSet)
  {
   payload.WithInteger("MessagesSent", m_messagesSent);

  }

  if(m_numResponsesHasBeenSet)
  {
   payload.WithInteger("NumResponses", m_numResponses);

  }

  if(m_messageLengthInCharsHasBeenSet)
  {
   payload.WithInteger("MessageLengthInChars", m_messageLengthInChars);

  }

  if(m_totalResponseTimeInMillisHasBeenSet)
  {
   payload.WithInt64("TotalResponseTimeInMillis", m_totalResponseTimeInMillis);

  }

  if(m_maxResponseTimeInMillisHasBeenSet)
  {
   payload.WithInt64("MaxResponseTimeInMillis", m_maxResponseTimeInMillis);

  }

  if(m_lastMessageTimestampHasBeenSet)
  {
   payload.WithDouble("LastMessageTimestamp", m_lastMessageTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
