/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ChatContactMetrics.h>
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

ChatContactMetrics::ChatContactMetrics(JsonView jsonValue)
{
  *this = jsonValue;
}

ChatContactMetrics& ChatContactMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MultiParty"))
  {
    m_multiParty = jsonValue.GetBool("MultiParty");
    m_multiPartyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalMessages"))
  {
    m_totalMessages = jsonValue.GetInteger("TotalMessages");
    m_totalMessagesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalBotMessages"))
  {
    m_totalBotMessages = jsonValue.GetInteger("TotalBotMessages");
    m_totalBotMessagesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalBotMessageLengthInChars"))
  {
    m_totalBotMessageLengthInChars = jsonValue.GetInteger("TotalBotMessageLengthInChars");
    m_totalBotMessageLengthInCharsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConversationCloseTimeInMillis"))
  {
    m_conversationCloseTimeInMillis = jsonValue.GetInt64("ConversationCloseTimeInMillis");
    m_conversationCloseTimeInMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConversationTurnCount"))
  {
    m_conversationTurnCount = jsonValue.GetInteger("ConversationTurnCount");
    m_conversationTurnCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AgentFirstResponseTimestamp"))
  {
    m_agentFirstResponseTimestamp = jsonValue.GetDouble("AgentFirstResponseTimestamp");
    m_agentFirstResponseTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AgentFirstResponseTimeInMillis"))
  {
    m_agentFirstResponseTimeInMillis = jsonValue.GetInt64("AgentFirstResponseTimeInMillis");
    m_agentFirstResponseTimeInMillisHasBeenSet = true;
  }
  return *this;
}

JsonValue ChatContactMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_multiPartyHasBeenSet)
  {
   payload.WithBool("MultiParty", m_multiParty);

  }

  if(m_totalMessagesHasBeenSet)
  {
   payload.WithInteger("TotalMessages", m_totalMessages);

  }

  if(m_totalBotMessagesHasBeenSet)
  {
   payload.WithInteger("TotalBotMessages", m_totalBotMessages);

  }

  if(m_totalBotMessageLengthInCharsHasBeenSet)
  {
   payload.WithInteger("TotalBotMessageLengthInChars", m_totalBotMessageLengthInChars);

  }

  if(m_conversationCloseTimeInMillisHasBeenSet)
  {
   payload.WithInt64("ConversationCloseTimeInMillis", m_conversationCloseTimeInMillis);

  }

  if(m_conversationTurnCountHasBeenSet)
  {
   payload.WithInteger("ConversationTurnCount", m_conversationTurnCount);

  }

  if(m_agentFirstResponseTimestampHasBeenSet)
  {
   payload.WithDouble("AgentFirstResponseTimestamp", m_agentFirstResponseTimestamp.SecondsWithMSPrecision());
  }

  if(m_agentFirstResponseTimeInMillisHasBeenSet)
  {
   payload.WithInt64("AgentFirstResponseTimeInMillis", m_agentFirstResponseTimeInMillis);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
