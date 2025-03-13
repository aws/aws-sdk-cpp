/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/ConversationEndState.h>
#include <aws/lexv2-models/model/AnalyticsModality.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/InvokedIntentSample.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>An object containing information about a specific session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SessionSpecification">AWS
   * API Reference</a></p>
   */
  class SessionSpecification
  {
  public:
    AWS_LEXMODELSV2_API SessionSpecification() = default;
    AWS_LEXMODELSV2_API SessionSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SessionSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the alias of the bot that the session was held with.</p>
     */
    inline const Aws::String& GetBotAliasId() const { return m_botAliasId; }
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }
    template<typename BotAliasIdT = Aws::String>
    void SetBotAliasId(BotAliasIdT&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::forward<BotAliasIdT>(value); }
    template<typename BotAliasIdT = Aws::String>
    SessionSpecification& WithBotAliasId(BotAliasIdT&& value) { SetBotAliasId(std::forward<BotAliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that the session was held with.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    SessionSpecification& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the bot that the session was held with.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    SessionSpecification& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel that is integrated with the bot that the session was held
     * with.</p>
     */
    inline const Aws::String& GetChannel() const { return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    template<typename ChannelT = Aws::String>
    void SetChannel(ChannelT&& value) { m_channelHasBeenSet = true; m_channel = std::forward<ChannelT>(value); }
    template<typename ChannelT = Aws::String>
    SessionSpecification& WithChannel(ChannelT&& value) { SetChannel(std::forward<ChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    SessionSpecification& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the conversation began. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetConversationStartTime() const { return m_conversationStartTime; }
    inline bool ConversationStartTimeHasBeenSet() const { return m_conversationStartTimeHasBeenSet; }
    template<typename ConversationStartTimeT = Aws::Utils::DateTime>
    void SetConversationStartTime(ConversationStartTimeT&& value) { m_conversationStartTimeHasBeenSet = true; m_conversationStartTime = std::forward<ConversationStartTimeT>(value); }
    template<typename ConversationStartTimeT = Aws::Utils::DateTime>
    SessionSpecification& WithConversationStartTime(ConversationStartTimeT&& value) { SetConversationStartTime(std::forward<ConversationStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the conversation ended. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetConversationEndTime() const { return m_conversationEndTime; }
    inline bool ConversationEndTimeHasBeenSet() const { return m_conversationEndTimeHasBeenSet; }
    template<typename ConversationEndTimeT = Aws::Utils::DateTime>
    void SetConversationEndTime(ConversationEndTimeT&& value) { m_conversationEndTimeHasBeenSet = true; m_conversationEndTime = std::forward<ConversationEndTimeT>(value); }
    template<typename ConversationEndTimeT = Aws::Utils::DateTime>
    SessionSpecification& WithConversationEndTime(ConversationEndTimeT&& value) { SetConversationEndTime(std::forward<ConversationEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the conversation in seconds. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline long long GetConversationDurationSeconds() const { return m_conversationDurationSeconds; }
    inline bool ConversationDurationSecondsHasBeenSet() const { return m_conversationDurationSecondsHasBeenSet; }
    inline void SetConversationDurationSeconds(long long value) { m_conversationDurationSecondsHasBeenSet = true; m_conversationDurationSeconds = value; }
    inline SessionSpecification& WithConversationDurationSeconds(long long value) { SetConversationDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The final state of the conversation. A conversation is defined as a unique
     * combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline ConversationEndState GetConversationEndState() const { return m_conversationEndState; }
    inline bool ConversationEndStateHasBeenSet() const { return m_conversationEndStateHasBeenSet; }
    inline void SetConversationEndState(ConversationEndState value) { m_conversationEndStateHasBeenSet = true; m_conversationEndState = value; }
    inline SessionSpecification& WithConversationEndState(ConversationEndState value) { SetConversationEndState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of the session. The possible values are as follows:</p> <ul> <li>
     * <p> <code>Speech</code> – The session was spoken.</p> </li> <li> <p>
     * <code>Text</code> – The session was written.</p> </li> <li> <p>
     * <code>DTMF</code> – The session used a touch-tone keypad (Dual Tone
     * Multi-Frequency).</p> </li> <li> <p> <code>MultiMode</code> – The session used
     * multiple modes.</p> </li> </ul>
     */
    inline AnalyticsModality GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(AnalyticsModality value) { m_modeHasBeenSet = true; m_mode = value; }
    inline SessionSpecification& WithMode(AnalyticsModality value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of turns that the session took.</p>
     */
    inline long long GetNumberOfTurns() const { return m_numberOfTurns; }
    inline bool NumberOfTurnsHasBeenSet() const { return m_numberOfTurnsHasBeenSet; }
    inline void SetNumberOfTurns(long long value) { m_numberOfTurnsHasBeenSet = true; m_numberOfTurns = value; }
    inline SessionSpecification& WithNumberOfTurns(long long value) { SetNumberOfTurns(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects containing the name of an intent that was invoked.</p>
     */
    inline const Aws::Vector<InvokedIntentSample>& GetInvokedIntentSamples() const { return m_invokedIntentSamples; }
    inline bool InvokedIntentSamplesHasBeenSet() const { return m_invokedIntentSamplesHasBeenSet; }
    template<typename InvokedIntentSamplesT = Aws::Vector<InvokedIntentSample>>
    void SetInvokedIntentSamples(InvokedIntentSamplesT&& value) { m_invokedIntentSamplesHasBeenSet = true; m_invokedIntentSamples = std::forward<InvokedIntentSamplesT>(value); }
    template<typename InvokedIntentSamplesT = Aws::Vector<InvokedIntentSample>>
    SessionSpecification& WithInvokedIntentSamples(InvokedIntentSamplesT&& value) { SetInvokedIntentSamples(std::forward<InvokedIntentSamplesT>(value)); return *this;}
    template<typename InvokedIntentSamplesT = InvokedIntentSample>
    SessionSpecification& AddInvokedIntentSamples(InvokedIntentSamplesT&& value) { m_invokedIntentSamplesHasBeenSet = true; m_invokedIntentSamples.emplace_back(std::forward<InvokedIntentSamplesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the first request in a session.</p>
     */
    inline const Aws::String& GetOriginatingRequestId() const { return m_originatingRequestId; }
    inline bool OriginatingRequestIdHasBeenSet() const { return m_originatingRequestIdHasBeenSet; }
    template<typename OriginatingRequestIdT = Aws::String>
    void SetOriginatingRequestId(OriginatingRequestIdT&& value) { m_originatingRequestIdHasBeenSet = true; m_originatingRequestId = std::forward<OriginatingRequestIdT>(value); }
    template<typename OriginatingRequestIdT = Aws::String>
    SessionSpecification& WithOriginatingRequestId(OriginatingRequestIdT&& value) { SetOriginatingRequestId(std::forward<OriginatingRequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botAliasId;
    bool m_botAliasIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_channel;
    bool m_channelHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::Utils::DateTime m_conversationStartTime{};
    bool m_conversationStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_conversationEndTime{};
    bool m_conversationEndTimeHasBeenSet = false;

    long long m_conversationDurationSeconds{0};
    bool m_conversationDurationSecondsHasBeenSet = false;

    ConversationEndState m_conversationEndState{ConversationEndState::NOT_SET};
    bool m_conversationEndStateHasBeenSet = false;

    AnalyticsModality m_mode{AnalyticsModality::NOT_SET};
    bool m_modeHasBeenSet = false;

    long long m_numberOfTurns{0};
    bool m_numberOfTurnsHasBeenSet = false;

    Aws::Vector<InvokedIntentSample> m_invokedIntentSamples;
    bool m_invokedIntentSamplesHasBeenSet = false;

    Aws::String m_originatingRequestId;
    bool m_originatingRequestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
