/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the overall participant interactions at the contact
   * level.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ChatContactMetrics">AWS
   * API Reference</a></p>
   */
  class ChatContactMetrics
  {
  public:
    AWS_CONNECT_API ChatContactMetrics() = default;
    AWS_CONNECT_API ChatContactMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ChatContactMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A boolean flag indicating whether multiparty chat or supervisor barge were
     * enabled on this contact.</p>
     */
    inline bool GetMultiParty() const { return m_multiParty; }
    inline bool MultiPartyHasBeenSet() const { return m_multiPartyHasBeenSet; }
    inline void SetMultiParty(bool value) { m_multiPartyHasBeenSet = true; m_multiParty = value; }
    inline ChatContactMetrics& WithMultiParty(bool value) { SetMultiParty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of chat messages on the contact.</p>
     */
    inline int GetTotalMessages() const { return m_totalMessages; }
    inline bool TotalMessagesHasBeenSet() const { return m_totalMessagesHasBeenSet; }
    inline void SetTotalMessages(int value) { m_totalMessagesHasBeenSet = true; m_totalMessages = value; }
    inline ChatContactMetrics& WithTotalMessages(int value) { SetTotalMessages(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of bot and automated messages on a chat contact.</p>
     */
    inline int GetTotalBotMessages() const { return m_totalBotMessages; }
    inline bool TotalBotMessagesHasBeenSet() const { return m_totalBotMessagesHasBeenSet; }
    inline void SetTotalBotMessages(int value) { m_totalBotMessagesHasBeenSet = true; m_totalBotMessages = value; }
    inline ChatContactMetrics& WithTotalBotMessages(int value) { SetTotalBotMessages(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of characters from bot and automated messages on a chat
     * contact.</p>
     */
    inline int GetTotalBotMessageLengthInChars() const { return m_totalBotMessageLengthInChars; }
    inline bool TotalBotMessageLengthInCharsHasBeenSet() const { return m_totalBotMessageLengthInCharsHasBeenSet; }
    inline void SetTotalBotMessageLengthInChars(int value) { m_totalBotMessageLengthInCharsHasBeenSet = true; m_totalBotMessageLengthInChars = value; }
    inline ChatContactMetrics& WithTotalBotMessageLengthInChars(int value) { SetTotalBotMessageLengthInChars(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time it took for a contact to end after the last customer message.</p>
     */
    inline long long GetConversationCloseTimeInMillis() const { return m_conversationCloseTimeInMillis; }
    inline bool ConversationCloseTimeInMillisHasBeenSet() const { return m_conversationCloseTimeInMillisHasBeenSet; }
    inline void SetConversationCloseTimeInMillis(long long value) { m_conversationCloseTimeInMillisHasBeenSet = true; m_conversationCloseTimeInMillis = value; }
    inline ChatContactMetrics& WithConversationCloseTimeInMillis(long long value) { SetConversationCloseTimeInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of conversation turns in a chat contact, which represents the
     * back-and-forth exchanges between customer and other participants.</p>
     */
    inline int GetConversationTurnCount() const { return m_conversationTurnCount; }
    inline bool ConversationTurnCountHasBeenSet() const { return m_conversationTurnCountHasBeenSet; }
    inline void SetConversationTurnCount(int value) { m_conversationTurnCountHasBeenSet = true; m_conversationTurnCount = value; }
    inline ChatContactMetrics& WithConversationTurnCount(int value) { SetConversationTurnCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent first response timestamp for a chat contact.</p>
     */
    inline const Aws::Utils::DateTime& GetAgentFirstResponseTimestamp() const { return m_agentFirstResponseTimestamp; }
    inline bool AgentFirstResponseTimestampHasBeenSet() const { return m_agentFirstResponseTimestampHasBeenSet; }
    template<typename AgentFirstResponseTimestampT = Aws::Utils::DateTime>
    void SetAgentFirstResponseTimestamp(AgentFirstResponseTimestampT&& value) { m_agentFirstResponseTimestampHasBeenSet = true; m_agentFirstResponseTimestamp = std::forward<AgentFirstResponseTimestampT>(value); }
    template<typename AgentFirstResponseTimestampT = Aws::Utils::DateTime>
    ChatContactMetrics& WithAgentFirstResponseTimestamp(AgentFirstResponseTimestampT&& value) { SetAgentFirstResponseTimestamp(std::forward<AgentFirstResponseTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time for an agent to respond after obtaining a chat contact.</p>
     */
    inline long long GetAgentFirstResponseTimeInMillis() const { return m_agentFirstResponseTimeInMillis; }
    inline bool AgentFirstResponseTimeInMillisHasBeenSet() const { return m_agentFirstResponseTimeInMillisHasBeenSet; }
    inline void SetAgentFirstResponseTimeInMillis(long long value) { m_agentFirstResponseTimeInMillisHasBeenSet = true; m_agentFirstResponseTimeInMillis = value; }
    inline ChatContactMetrics& WithAgentFirstResponseTimeInMillis(long long value) { SetAgentFirstResponseTimeInMillis(value); return *this;}
    ///@}
  private:

    bool m_multiParty{false};
    bool m_multiPartyHasBeenSet = false;

    int m_totalMessages{0};
    bool m_totalMessagesHasBeenSet = false;

    int m_totalBotMessages{0};
    bool m_totalBotMessagesHasBeenSet = false;

    int m_totalBotMessageLengthInChars{0};
    bool m_totalBotMessageLengthInCharsHasBeenSet = false;

    long long m_conversationCloseTimeInMillis{0};
    bool m_conversationCloseTimeInMillisHasBeenSet = false;

    int m_conversationTurnCount{0};
    bool m_conversationTurnCountHasBeenSet = false;

    Aws::Utils::DateTime m_agentFirstResponseTimestamp{};
    bool m_agentFirstResponseTimestampHasBeenSet = false;

    long long m_agentFirstResponseTimeInMillis{0};
    bool m_agentFirstResponseTimeInMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
