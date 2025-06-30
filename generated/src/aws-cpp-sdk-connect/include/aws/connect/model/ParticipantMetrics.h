/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ParticipantType.h>
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
   * <p>Information about a participant's interactions in a contact.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ParticipantMetrics">AWS
   * API Reference</a></p>
   */
  class ParticipantMetrics
  {
  public:
    AWS_CONNECT_API ParticipantMetrics() = default;
    AWS_CONNECT_API ParticipantMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ParticipantMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Participant's ID.</p>
     */
    inline const Aws::String& GetParticipantId() const { return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    template<typename ParticipantIdT = Aws::String>
    void SetParticipantId(ParticipantIdT&& value) { m_participantIdHasBeenSet = true; m_participantId = std::forward<ParticipantIdT>(value); }
    template<typename ParticipantIdT = Aws::String>
    ParticipantMetrics& WithParticipantId(ParticipantIdT&& value) { SetParticipantId(std::forward<ParticipantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the conversation participant. Following are the participant
     * types: [Agent, Customer, Supervisor].</p>
     */
    inline ParticipantType GetParticipantType() const { return m_participantType; }
    inline bool ParticipantTypeHasBeenSet() const { return m_participantTypeHasBeenSet; }
    inline void SetParticipantType(ParticipantType value) { m_participantTypeHasBeenSet = true; m_participantType = value; }
    inline ParticipantMetrics& WithParticipantType(ParticipantType value) { SetParticipantType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean flag indicating whether the chat conversation was abandoned by a
     * Participant.</p>
     */
    inline bool GetConversationAbandon() const { return m_conversationAbandon; }
    inline bool ConversationAbandonHasBeenSet() const { return m_conversationAbandonHasBeenSet; }
    inline void SetConversationAbandon(bool value) { m_conversationAbandonHasBeenSet = true; m_conversationAbandon = value; }
    inline ParticipantMetrics& WithConversationAbandon(bool value) { SetConversationAbandon(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of chat messages sent by Participant.</p>
     */
    inline int GetMessagesSent() const { return m_messagesSent; }
    inline bool MessagesSentHasBeenSet() const { return m_messagesSentHasBeenSet; }
    inline void SetMessagesSent(int value) { m_messagesSentHasBeenSet = true; m_messagesSent = value; }
    inline ParticipantMetrics& WithMessagesSent(int value) { SetMessagesSent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of chat messages sent by Participant.</p>
     */
    inline int GetNumResponses() const { return m_numResponses; }
    inline bool NumResponsesHasBeenSet() const { return m_numResponsesHasBeenSet; }
    inline void SetNumResponses(int value) { m_numResponsesHasBeenSet = true; m_numResponses = value; }
    inline ParticipantMetrics& WithNumResponses(int value) { SetNumResponses(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of chat characters sent by Participant.</p>
     */
    inline int GetMessageLengthInChars() const { return m_messageLengthInChars; }
    inline bool MessageLengthInCharsHasBeenSet() const { return m_messageLengthInCharsHasBeenSet; }
    inline void SetMessageLengthInChars(int value) { m_messageLengthInCharsHasBeenSet = true; m_messageLengthInChars = value; }
    inline ParticipantMetrics& WithMessageLengthInChars(int value) { SetMessageLengthInChars(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total chat response time by Participant.</p>
     */
    inline long long GetTotalResponseTimeInMillis() const { return m_totalResponseTimeInMillis; }
    inline bool TotalResponseTimeInMillisHasBeenSet() const { return m_totalResponseTimeInMillisHasBeenSet; }
    inline void SetTotalResponseTimeInMillis(long long value) { m_totalResponseTimeInMillisHasBeenSet = true; m_totalResponseTimeInMillis = value; }
    inline ParticipantMetrics& WithTotalResponseTimeInMillis(long long value) { SetTotalResponseTimeInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum chat response time by Participant.</p>
     */
    inline long long GetMaxResponseTimeInMillis() const { return m_maxResponseTimeInMillis; }
    inline bool MaxResponseTimeInMillisHasBeenSet() const { return m_maxResponseTimeInMillisHasBeenSet; }
    inline void SetMaxResponseTimeInMillis(long long value) { m_maxResponseTimeInMillisHasBeenSet = true; m_maxResponseTimeInMillis = value; }
    inline ParticipantMetrics& WithMaxResponseTimeInMillis(long long value) { SetMaxResponseTimeInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of last chat message by Participant.</p>
     */
    inline const Aws::Utils::DateTime& GetLastMessageTimestamp() const { return m_lastMessageTimestamp; }
    inline bool LastMessageTimestampHasBeenSet() const { return m_lastMessageTimestampHasBeenSet; }
    template<typename LastMessageTimestampT = Aws::Utils::DateTime>
    void SetLastMessageTimestamp(LastMessageTimestampT&& value) { m_lastMessageTimestampHasBeenSet = true; m_lastMessageTimestamp = std::forward<LastMessageTimestampT>(value); }
    template<typename LastMessageTimestampT = Aws::Utils::DateTime>
    ParticipantMetrics& WithLastMessageTimestamp(LastMessageTimestampT&& value) { SetLastMessageTimestamp(std::forward<LastMessageTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    ParticipantType m_participantType{ParticipantType::NOT_SET};
    bool m_participantTypeHasBeenSet = false;

    bool m_conversationAbandon{false};
    bool m_conversationAbandonHasBeenSet = false;

    int m_messagesSent{0};
    bool m_messagesSentHasBeenSet = false;

    int m_numResponses{0};
    bool m_numResponsesHasBeenSet = false;

    int m_messageLengthInChars{0};
    bool m_messageLengthInCharsHasBeenSet = false;

    long long m_totalResponseTimeInMillis{0};
    bool m_totalResponseTimeInMillisHasBeenSet = false;

    long long m_maxResponseTimeInMillis{0};
    bool m_maxResponseTimeInMillisHasBeenSet = false;

    Aws::Utils::DateTime m_lastMessageTimestamp{};
    bool m_lastMessageTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
