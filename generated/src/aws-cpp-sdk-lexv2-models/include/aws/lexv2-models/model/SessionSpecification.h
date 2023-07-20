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
    AWS_LEXMODELSV2_API SessionSpecification();
    AWS_LEXMODELSV2_API SessionSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SessionSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the alias of the bot that the session was held with.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }

    /**
     * <p>The identifier of the alias of the bot that the session was held with.</p>
     */
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }

    /**
     * <p>The identifier of the alias of the bot that the session was held with.</p>
     */
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = value; }

    /**
     * <p>The identifier of the alias of the bot that the session was held with.</p>
     */
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::move(value); }

    /**
     * <p>The identifier of the alias of the bot that the session was held with.</p>
     */
    inline void SetBotAliasId(const char* value) { m_botAliasIdHasBeenSet = true; m_botAliasId.assign(value); }

    /**
     * <p>The identifier of the alias of the bot that the session was held with.</p>
     */
    inline SessionSpecification& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}

    /**
     * <p>The identifier of the alias of the bot that the session was held with.</p>
     */
    inline SessionSpecification& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the alias of the bot that the session was held with.</p>
     */
    inline SessionSpecification& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}


    /**
     * <p>The version of the bot that the session was held with.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that the session was held with.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot that the session was held with.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot that the session was held with.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that the session was held with.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that the session was held with.</p>
     */
    inline SessionSpecification& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that the session was held with.</p>
     */
    inline SessionSpecification& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that the session was held with.</p>
     */
    inline SessionSpecification& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The locale of the bot that the session was held with.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The locale of the bot that the session was held with.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The locale of the bot that the session was held with.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The locale of the bot that the session was held with.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The locale of the bot that the session was held with.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The locale of the bot that the session was held with.</p>
     */
    inline SessionSpecification& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The locale of the bot that the session was held with.</p>
     */
    inline SessionSpecification& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The locale of the bot that the session was held with.</p>
     */
    inline SessionSpecification& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The channel that is integrated with the bot that the session was held
     * with.</p>
     */
    inline const Aws::String& GetChannel() const{ return m_channel; }

    /**
     * <p>The channel that is integrated with the bot that the session was held
     * with.</p>
     */
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }

    /**
     * <p>The channel that is integrated with the bot that the session was held
     * with.</p>
     */
    inline void SetChannel(const Aws::String& value) { m_channelHasBeenSet = true; m_channel = value; }

    /**
     * <p>The channel that is integrated with the bot that the session was held
     * with.</p>
     */
    inline void SetChannel(Aws::String&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }

    /**
     * <p>The channel that is integrated with the bot that the session was held
     * with.</p>
     */
    inline void SetChannel(const char* value) { m_channelHasBeenSet = true; m_channel.assign(value); }

    /**
     * <p>The channel that is integrated with the bot that the session was held
     * with.</p>
     */
    inline SessionSpecification& WithChannel(const Aws::String& value) { SetChannel(value); return *this;}

    /**
     * <p>The channel that is integrated with the bot that the session was held
     * with.</p>
     */
    inline SessionSpecification& WithChannel(Aws::String&& value) { SetChannel(std::move(value)); return *this;}

    /**
     * <p>The channel that is integrated with the bot that the session was held
     * with.</p>
     */
    inline SessionSpecification& WithChannel(const char* value) { SetChannel(value); return *this;}


    /**
     * <p>The identifier of the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The identifier of the session.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The identifier of the session.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The identifier of the session.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The identifier of the session.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The identifier of the session.</p>
     */
    inline SessionSpecification& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The identifier of the session.</p>
     */
    inline SessionSpecification& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the session.</p>
     */
    inline SessionSpecification& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>The date and time when the conversation began. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetConversationStartTime() const{ return m_conversationStartTime; }

    /**
     * <p>The date and time when the conversation began. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline bool ConversationStartTimeHasBeenSet() const { return m_conversationStartTimeHasBeenSet; }

    /**
     * <p>The date and time when the conversation began. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline void SetConversationStartTime(const Aws::Utils::DateTime& value) { m_conversationStartTimeHasBeenSet = true; m_conversationStartTime = value; }

    /**
     * <p>The date and time when the conversation began. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline void SetConversationStartTime(Aws::Utils::DateTime&& value) { m_conversationStartTimeHasBeenSet = true; m_conversationStartTime = std::move(value); }

    /**
     * <p>The date and time when the conversation began. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline SessionSpecification& WithConversationStartTime(const Aws::Utils::DateTime& value) { SetConversationStartTime(value); return *this;}

    /**
     * <p>The date and time when the conversation began. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline SessionSpecification& WithConversationStartTime(Aws::Utils::DateTime&& value) { SetConversationStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the conversation ended. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetConversationEndTime() const{ return m_conversationEndTime; }

    /**
     * <p>The date and time when the conversation ended. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline bool ConversationEndTimeHasBeenSet() const { return m_conversationEndTimeHasBeenSet; }

    /**
     * <p>The date and time when the conversation ended. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline void SetConversationEndTime(const Aws::Utils::DateTime& value) { m_conversationEndTimeHasBeenSet = true; m_conversationEndTime = value; }

    /**
     * <p>The date and time when the conversation ended. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline void SetConversationEndTime(Aws::Utils::DateTime&& value) { m_conversationEndTimeHasBeenSet = true; m_conversationEndTime = std::move(value); }

    /**
     * <p>The date and time when the conversation ended. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline SessionSpecification& WithConversationEndTime(const Aws::Utils::DateTime& value) { SetConversationEndTime(value); return *this;}

    /**
     * <p>The date and time when the conversation ended. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline SessionSpecification& WithConversationEndTime(Aws::Utils::DateTime&& value) { SetConversationEndTime(std::move(value)); return *this;}


    /**
     * <p>The duration of the conversation in seconds. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline long long GetConversationDurationSeconds() const{ return m_conversationDurationSeconds; }

    /**
     * <p>The duration of the conversation in seconds. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline bool ConversationDurationSecondsHasBeenSet() const { return m_conversationDurationSecondsHasBeenSet; }

    /**
     * <p>The duration of the conversation in seconds. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline void SetConversationDurationSeconds(long long value) { m_conversationDurationSecondsHasBeenSet = true; m_conversationDurationSeconds = value; }

    /**
     * <p>The duration of the conversation in seconds. A conversation is defined as a
     * unique combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline SessionSpecification& WithConversationDurationSeconds(long long value) { SetConversationDurationSeconds(value); return *this;}


    /**
     * <p>The final state of the conversation. A conversation is defined as a unique
     * combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline const ConversationEndState& GetConversationEndState() const{ return m_conversationEndState; }

    /**
     * <p>The final state of the conversation. A conversation is defined as a unique
     * combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline bool ConversationEndStateHasBeenSet() const { return m_conversationEndStateHasBeenSet; }

    /**
     * <p>The final state of the conversation. A conversation is defined as a unique
     * combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline void SetConversationEndState(const ConversationEndState& value) { m_conversationEndStateHasBeenSet = true; m_conversationEndState = value; }

    /**
     * <p>The final state of the conversation. A conversation is defined as a unique
     * combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline void SetConversationEndState(ConversationEndState&& value) { m_conversationEndStateHasBeenSet = true; m_conversationEndState = std::move(value); }

    /**
     * <p>The final state of the conversation. A conversation is defined as a unique
     * combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline SessionSpecification& WithConversationEndState(const ConversationEndState& value) { SetConversationEndState(value); return *this;}

    /**
     * <p>The final state of the conversation. A conversation is defined as a unique
     * combination of a <code>sessionId</code> and an
     * <code>originatingRequestId</code>.</p>
     */
    inline SessionSpecification& WithConversationEndState(ConversationEndState&& value) { SetConversationEndState(std::move(value)); return *this;}


    /**
     * <p>The mode of the session. The possible values are as follows:</p> <ul> <li>
     * <p> <code>Speech</code> – The session was spoken.</p> </li> <li> <p>
     * <code>Text</code> – The session was written.</p> </li> <li> <p>
     * <code>DTMF</code> – The session used a touch-tone keypad (Dual Tone
     * Multi-Frequency).</p> </li> <li> <p> <code>MultiMode</code> – The session used
     * multiple modes.</p> </li> </ul>
     */
    inline const AnalyticsModality& GetMode() const{ return m_mode; }

    /**
     * <p>The mode of the session. The possible values are as follows:</p> <ul> <li>
     * <p> <code>Speech</code> – The session was spoken.</p> </li> <li> <p>
     * <code>Text</code> – The session was written.</p> </li> <li> <p>
     * <code>DTMF</code> – The session used a touch-tone keypad (Dual Tone
     * Multi-Frequency).</p> </li> <li> <p> <code>MultiMode</code> – The session used
     * multiple modes.</p> </li> </ul>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The mode of the session. The possible values are as follows:</p> <ul> <li>
     * <p> <code>Speech</code> – The session was spoken.</p> </li> <li> <p>
     * <code>Text</code> – The session was written.</p> </li> <li> <p>
     * <code>DTMF</code> – The session used a touch-tone keypad (Dual Tone
     * Multi-Frequency).</p> </li> <li> <p> <code>MultiMode</code> – The session used
     * multiple modes.</p> </li> </ul>
     */
    inline void SetMode(const AnalyticsModality& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The mode of the session. The possible values are as follows:</p> <ul> <li>
     * <p> <code>Speech</code> – The session was spoken.</p> </li> <li> <p>
     * <code>Text</code> – The session was written.</p> </li> <li> <p>
     * <code>DTMF</code> – The session used a touch-tone keypad (Dual Tone
     * Multi-Frequency).</p> </li> <li> <p> <code>MultiMode</code> – The session used
     * multiple modes.</p> </li> </ul>
     */
    inline void SetMode(AnalyticsModality&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The mode of the session. The possible values are as follows:</p> <ul> <li>
     * <p> <code>Speech</code> – The session was spoken.</p> </li> <li> <p>
     * <code>Text</code> – The session was written.</p> </li> <li> <p>
     * <code>DTMF</code> – The session used a touch-tone keypad (Dual Tone
     * Multi-Frequency).</p> </li> <li> <p> <code>MultiMode</code> – The session used
     * multiple modes.</p> </li> </ul>
     */
    inline SessionSpecification& WithMode(const AnalyticsModality& value) { SetMode(value); return *this;}

    /**
     * <p>The mode of the session. The possible values are as follows:</p> <ul> <li>
     * <p> <code>Speech</code> – The session was spoken.</p> </li> <li> <p>
     * <code>Text</code> – The session was written.</p> </li> <li> <p>
     * <code>DTMF</code> – The session used a touch-tone keypad (Dual Tone
     * Multi-Frequency).</p> </li> <li> <p> <code>MultiMode</code> – The session used
     * multiple modes.</p> </li> </ul>
     */
    inline SessionSpecification& WithMode(AnalyticsModality&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>The number of turns that the session took.</p>
     */
    inline long long GetNumberOfTurns() const{ return m_numberOfTurns; }

    /**
     * <p>The number of turns that the session took.</p>
     */
    inline bool NumberOfTurnsHasBeenSet() const { return m_numberOfTurnsHasBeenSet; }

    /**
     * <p>The number of turns that the session took.</p>
     */
    inline void SetNumberOfTurns(long long value) { m_numberOfTurnsHasBeenSet = true; m_numberOfTurns = value; }

    /**
     * <p>The number of turns that the session took.</p>
     */
    inline SessionSpecification& WithNumberOfTurns(long long value) { SetNumberOfTurns(value); return *this;}


    /**
     * <p>A list of objects containing the name of an intent that was invoked.</p>
     */
    inline const Aws::Vector<InvokedIntentSample>& GetInvokedIntentSamples() const{ return m_invokedIntentSamples; }

    /**
     * <p>A list of objects containing the name of an intent that was invoked.</p>
     */
    inline bool InvokedIntentSamplesHasBeenSet() const { return m_invokedIntentSamplesHasBeenSet; }

    /**
     * <p>A list of objects containing the name of an intent that was invoked.</p>
     */
    inline void SetInvokedIntentSamples(const Aws::Vector<InvokedIntentSample>& value) { m_invokedIntentSamplesHasBeenSet = true; m_invokedIntentSamples = value; }

    /**
     * <p>A list of objects containing the name of an intent that was invoked.</p>
     */
    inline void SetInvokedIntentSamples(Aws::Vector<InvokedIntentSample>&& value) { m_invokedIntentSamplesHasBeenSet = true; m_invokedIntentSamples = std::move(value); }

    /**
     * <p>A list of objects containing the name of an intent that was invoked.</p>
     */
    inline SessionSpecification& WithInvokedIntentSamples(const Aws::Vector<InvokedIntentSample>& value) { SetInvokedIntentSamples(value); return *this;}

    /**
     * <p>A list of objects containing the name of an intent that was invoked.</p>
     */
    inline SessionSpecification& WithInvokedIntentSamples(Aws::Vector<InvokedIntentSample>&& value) { SetInvokedIntentSamples(std::move(value)); return *this;}

    /**
     * <p>A list of objects containing the name of an intent that was invoked.</p>
     */
    inline SessionSpecification& AddInvokedIntentSamples(const InvokedIntentSample& value) { m_invokedIntentSamplesHasBeenSet = true; m_invokedIntentSamples.push_back(value); return *this; }

    /**
     * <p>A list of objects containing the name of an intent that was invoked.</p>
     */
    inline SessionSpecification& AddInvokedIntentSamples(InvokedIntentSample&& value) { m_invokedIntentSamplesHasBeenSet = true; m_invokedIntentSamples.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier of the first request in a session.</p>
     */
    inline const Aws::String& GetOriginatingRequestId() const{ return m_originatingRequestId; }

    /**
     * <p>The identifier of the first request in a session.</p>
     */
    inline bool OriginatingRequestIdHasBeenSet() const { return m_originatingRequestIdHasBeenSet; }

    /**
     * <p>The identifier of the first request in a session.</p>
     */
    inline void SetOriginatingRequestId(const Aws::String& value) { m_originatingRequestIdHasBeenSet = true; m_originatingRequestId = value; }

    /**
     * <p>The identifier of the first request in a session.</p>
     */
    inline void SetOriginatingRequestId(Aws::String&& value) { m_originatingRequestIdHasBeenSet = true; m_originatingRequestId = std::move(value); }

    /**
     * <p>The identifier of the first request in a session.</p>
     */
    inline void SetOriginatingRequestId(const char* value) { m_originatingRequestIdHasBeenSet = true; m_originatingRequestId.assign(value); }

    /**
     * <p>The identifier of the first request in a session.</p>
     */
    inline SessionSpecification& WithOriginatingRequestId(const Aws::String& value) { SetOriginatingRequestId(value); return *this;}

    /**
     * <p>The identifier of the first request in a session.</p>
     */
    inline SessionSpecification& WithOriginatingRequestId(Aws::String&& value) { SetOriginatingRequestId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the first request in a session.</p>
     */
    inline SessionSpecification& WithOriginatingRequestId(const char* value) { SetOriginatingRequestId(value); return *this;}

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

    Aws::Utils::DateTime m_conversationStartTime;
    bool m_conversationStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_conversationEndTime;
    bool m_conversationEndTimeHasBeenSet = false;

    long long m_conversationDurationSeconds;
    bool m_conversationDurationSecondsHasBeenSet = false;

    ConversationEndState m_conversationEndState;
    bool m_conversationEndStateHasBeenSet = false;

    AnalyticsModality m_mode;
    bool m_modeHasBeenSet = false;

    long long m_numberOfTurns;
    bool m_numberOfTurnsHasBeenSet = false;

    Aws::Vector<InvokedIntentSample> m_invokedIntentSamples;
    bool m_invokedIntentSamplesHasBeenSet = false;

    Aws::String m_originatingRequestId;
    bool m_originatingRequestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
