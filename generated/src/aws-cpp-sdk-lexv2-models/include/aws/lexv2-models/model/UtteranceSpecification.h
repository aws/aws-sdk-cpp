/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/AnalyticsModality.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/IntentState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/UtteranceBotResponse.h>
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
   * <p>An object containing information about a specific utterance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UtteranceSpecification">AWS
   * API Reference</a></p>
   */
  class UtteranceSpecification
  {
  public:
    AWS_LEXMODELSV2_API UtteranceSpecification() = default;
    AWS_LEXMODELSV2_API UtteranceSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UtteranceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the alias of the bot that the utterance was made to.</p>
     */
    inline const Aws::String& GetBotAliasId() const { return m_botAliasId; }
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }
    template<typename BotAliasIdT = Aws::String>
    void SetBotAliasId(BotAliasIdT&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::forward<BotAliasIdT>(value); }
    template<typename BotAliasIdT = Aws::String>
    UtteranceSpecification& WithBotAliasId(BotAliasIdT&& value) { SetBotAliasId(std::forward<BotAliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that the utterance was made to.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    UtteranceSpecification& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the bot that the utterance was made to.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    UtteranceSpecification& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session that the utterance was made in.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    UtteranceSpecification& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel that is integrated with the bot that the utterance was made
     * to.</p>
     */
    inline const Aws::String& GetChannel() const { return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    template<typename ChannelT = Aws::String>
    void SetChannel(ChannelT&& value) { m_channelHasBeenSet = true; m_channel = std::forward<ChannelT>(value); }
    template<typename ChannelT = Aws::String>
    UtteranceSpecification& WithChannel(ChannelT&& value) { SetChannel(std::forward<ChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of the session. The possible values are as follows:</p> <ul> <li>
     * <p> <code>Speech</code> – The session consisted of spoken dialogue.</p> </li>
     * <li> <p> <code>Text</code> – The session consisted of written dialogue.</p>
     * </li> <li> <p> <code>DTMF</code> – The session consisted of touch-tone keypad
     * (Dual Tone Multi-Frequency) key presses.</p> </li> <li> <p>
     * <code>MultiMode</code> – The session consisted of multiple modes.</p> </li>
     * </ul>
     */
    inline AnalyticsModality GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(AnalyticsModality value) { m_modeHasBeenSet = true; m_mode = value; }
    inline UtteranceSpecification& WithMode(AnalyticsModality value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the conversation in which the utterance took place
     * began. A conversation is defined as a unique combination of a
     * <code>sessionId</code> and an <code>originatingRequestId</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetConversationStartTime() const { return m_conversationStartTime; }
    inline bool ConversationStartTimeHasBeenSet() const { return m_conversationStartTimeHasBeenSet; }
    template<typename ConversationStartTimeT = Aws::Utils::DateTime>
    void SetConversationStartTime(ConversationStartTimeT&& value) { m_conversationStartTimeHasBeenSet = true; m_conversationStartTime = std::forward<ConversationStartTimeT>(value); }
    template<typename ConversationStartTimeT = Aws::Utils::DateTime>
    UtteranceSpecification& WithConversationStartTime(ConversationStartTimeT&& value) { SetConversationStartTime(std::forward<ConversationStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the conversation in which the utterance took place
     * ended. A conversation is defined as a unique combination of a
     * <code>sessionId</code> and an <code>originatingRequestId</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetConversationEndTime() const { return m_conversationEndTime; }
    inline bool ConversationEndTimeHasBeenSet() const { return m_conversationEndTimeHasBeenSet; }
    template<typename ConversationEndTimeT = Aws::Utils::DateTime>
    void SetConversationEndTime(ConversationEndTimeT&& value) { m_conversationEndTimeHasBeenSet = true; m_conversationEndTime = std::forward<ConversationEndTimeT>(value); }
    template<typename ConversationEndTimeT = Aws::Utils::DateTime>
    UtteranceSpecification& WithConversationEndTime(ConversationEndTimeT&& value) { SetConversationEndTime(std::forward<ConversationEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the utterance.</p>
     */
    inline const Aws::String& GetUtterance() const { return m_utterance; }
    inline bool UtteranceHasBeenSet() const { return m_utteranceHasBeenSet; }
    template<typename UtteranceT = Aws::String>
    void SetUtterance(UtteranceT&& value) { m_utteranceHasBeenSet = true; m_utterance = std::forward<UtteranceT>(value); }
    template<typename UtteranceT = Aws::String>
    UtteranceSpecification& WithUtterance(UtteranceT&& value) { SetUtterance(std::forward<UtteranceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the utterance took place.</p>
     */
    inline const Aws::Utils::DateTime& GetUtteranceTimestamp() const { return m_utteranceTimestamp; }
    inline bool UtteranceTimestampHasBeenSet() const { return m_utteranceTimestampHasBeenSet; }
    template<typename UtteranceTimestampT = Aws::Utils::DateTime>
    void SetUtteranceTimestamp(UtteranceTimestampT&& value) { m_utteranceTimestampHasBeenSet = true; m_utteranceTimestamp = std::forward<UtteranceTimestampT>(value); }
    template<typename UtteranceTimestampT = Aws::Utils::DateTime>
    UtteranceSpecification& WithUtteranceTimestamp(UtteranceTimestampT&& value) { SetUtteranceTimestamp(std::forward<UtteranceTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration in milliseconds of the audio associated with the utterance.</p>
     */
    inline long long GetAudioVoiceDurationMillis() const { return m_audioVoiceDurationMillis; }
    inline bool AudioVoiceDurationMillisHasBeenSet() const { return m_audioVoiceDurationMillisHasBeenSet; }
    inline void SetAudioVoiceDurationMillis(long long value) { m_audioVoiceDurationMillisHasBeenSet = true; m_audioVoiceDurationMillis = value; }
    inline UtteranceSpecification& WithAudioVoiceDurationMillis(long long value) { SetAudioVoiceDurationMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the bot understood the utterance or not.</p>
     */
    inline bool GetUtteranceUnderstood() const { return m_utteranceUnderstood; }
    inline bool UtteranceUnderstoodHasBeenSet() const { return m_utteranceUnderstoodHasBeenSet; }
    inline void SetUtteranceUnderstood(bool value) { m_utteranceUnderstoodHasBeenSet = true; m_utteranceUnderstood = value; }
    inline UtteranceSpecification& WithUtteranceUnderstood(bool value) { SetUtteranceUnderstood(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input type of the utterance. The possible values are as follows:</p> <ul>
     * <li> <p>PCM format: audio data must be in little-endian byte order.</p> <ul>
     * <li> <p> <code>audio/l16; rate=16000; channels=1</code> </p> </li> <li> <p>
     * <code>audio/x-l16; sample-rate=16000; channel-count=1</code> </p> </li> <li> <p>
     * <code>audio/lpcm; sample-rate=8000; sample-size-bits=16; channel-count=1;
     * is-big-endian=false</code> </p> </li> </ul> </li> <li> <p>Opus format</p> <ul>
     * <li> <p>
     * <code>audio/x-cbr-opus-with-preamble;preamble-size=0;bit-rate=256000;frame-size-milliseconds=4</code>
     * </p> </li> </ul> </li> <li> <p>Text format</p> <ul> <li> <p> <code>text/plain;
     * charset=utf-8</code> </p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetInputType() const { return m_inputType; }
    inline bool InputTypeHasBeenSet() const { return m_inputTypeHasBeenSet; }
    template<typename InputTypeT = Aws::String>
    void SetInputType(InputTypeT&& value) { m_inputTypeHasBeenSet = true; m_inputType = std::forward<InputTypeT>(value); }
    template<typename InputTypeT = Aws::String>
    UtteranceSpecification& WithInputType(InputTypeT&& value) { SetInputType(std::forward<InputTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output type of the utterance. The possible values are as follows:</p>
     * <ul> <li> <p> <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code>
     * </p> </li> <li> <p> <code>audio/pcm (16 KHz)</code> </p> </li> <li> <p>
     * <code>audio/</code> (defaults to <code>mpeg</code>)</p> </li> <li> <p>
     * <code>text/plain; charset=utf-8</code> </p> </li> </ul>
     */
    inline const Aws::String& GetOutputType() const { return m_outputType; }
    inline bool OutputTypeHasBeenSet() const { return m_outputTypeHasBeenSet; }
    template<typename OutputTypeT = Aws::String>
    void SetOutputType(OutputTypeT&& value) { m_outputTypeHasBeenSet = true; m_outputType = std::forward<OutputTypeT>(value); }
    template<typename OutputTypeT = Aws::String>
    UtteranceSpecification& WithOutputType(OutputTypeT&& value) { SetOutputType(std::forward<OutputTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the intent that the utterance is associated to.</p>
     */
    inline const Aws::String& GetAssociatedIntentName() const { return m_associatedIntentName; }
    inline bool AssociatedIntentNameHasBeenSet() const { return m_associatedIntentNameHasBeenSet; }
    template<typename AssociatedIntentNameT = Aws::String>
    void SetAssociatedIntentName(AssociatedIntentNameT&& value) { m_associatedIntentNameHasBeenSet = true; m_associatedIntentName = std::forward<AssociatedIntentNameT>(value); }
    template<typename AssociatedIntentNameT = Aws::String>
    UtteranceSpecification& WithAssociatedIntentName(AssociatedIntentNameT&& value) { SetAssociatedIntentName(std::forward<AssociatedIntentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the slot that the utterance is associated to.</p>
     */
    inline const Aws::String& GetAssociatedSlotName() const { return m_associatedSlotName; }
    inline bool AssociatedSlotNameHasBeenSet() const { return m_associatedSlotNameHasBeenSet; }
    template<typename AssociatedSlotNameT = Aws::String>
    void SetAssociatedSlotName(AssociatedSlotNameT&& value) { m_associatedSlotNameHasBeenSet = true; m_associatedSlotName = std::forward<AssociatedSlotNameT>(value); }
    template<typename AssociatedSlotNameT = Aws::String>
    UtteranceSpecification& WithAssociatedSlotName(AssociatedSlotNameT&& value) { SetAssociatedSlotName(std::forward<AssociatedSlotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the intent that the utterance is associated to.</p>
     */
    inline IntentState GetIntentState() const { return m_intentState; }
    inline bool IntentStateHasBeenSet() const { return m_intentStateHasBeenSet; }
    inline void SetIntentState(IntentState value) { m_intentStateHasBeenSet = true; m_intentState = value; }
    inline UtteranceSpecification& WithIntentState(IntentState value) { SetIntentState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of dialog action that the utterance is associated to. See the
     * <code>type</code> field in <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_runtime_DialogAction.html">DialogAction</a>
     * for more information.</p>
     */
    inline const Aws::String& GetDialogActionType() const { return m_dialogActionType; }
    inline bool DialogActionTypeHasBeenSet() const { return m_dialogActionTypeHasBeenSet; }
    template<typename DialogActionTypeT = Aws::String>
    void SetDialogActionType(DialogActionTypeT&& value) { m_dialogActionTypeHasBeenSet = true; m_dialogActionType = std::forward<DialogActionTypeT>(value); }
    template<typename DialogActionTypeT = Aws::String>
    UtteranceSpecification& WithDialogActionType(DialogActionTypeT&& value) { SetDialogActionType(std::forward<DialogActionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the audio of the bot response.</p>
     */
    inline const Aws::String& GetBotResponseAudioVoiceId() const { return m_botResponseAudioVoiceId; }
    inline bool BotResponseAudioVoiceIdHasBeenSet() const { return m_botResponseAudioVoiceIdHasBeenSet; }
    template<typename BotResponseAudioVoiceIdT = Aws::String>
    void SetBotResponseAudioVoiceId(BotResponseAudioVoiceIdT&& value) { m_botResponseAudioVoiceIdHasBeenSet = true; m_botResponseAudioVoiceId = std::forward<BotResponseAudioVoiceIdT>(value); }
    template<typename BotResponseAudioVoiceIdT = Aws::String>
    UtteranceSpecification& WithBotResponseAudioVoiceId(BotResponseAudioVoiceIdT&& value) { SetBotResponseAudioVoiceId(std::forward<BotResponseAudioVoiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The slots that have been filled in the session by the time of the
     * utterance.</p>
     */
    inline const Aws::String& GetSlotsFilledInSession() const { return m_slotsFilledInSession; }
    inline bool SlotsFilledInSessionHasBeenSet() const { return m_slotsFilledInSessionHasBeenSet; }
    template<typename SlotsFilledInSessionT = Aws::String>
    void SetSlotsFilledInSession(SlotsFilledInSessionT&& value) { m_slotsFilledInSessionHasBeenSet = true; m_slotsFilledInSession = std::forward<SlotsFilledInSessionT>(value); }
    template<typename SlotsFilledInSessionT = Aws::String>
    UtteranceSpecification& WithSlotsFilledInSession(SlotsFilledInSessionT&& value) { SetSlotsFilledInSession(std::forward<SlotsFilledInSessionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the request associated with the utterance.</p>
     */
    inline const Aws::String& GetUtteranceRequestId() const { return m_utteranceRequestId; }
    inline bool UtteranceRequestIdHasBeenSet() const { return m_utteranceRequestIdHasBeenSet; }
    template<typename UtteranceRequestIdT = Aws::String>
    void SetUtteranceRequestId(UtteranceRequestIdT&& value) { m_utteranceRequestIdHasBeenSet = true; m_utteranceRequestId = std::forward<UtteranceRequestIdT>(value); }
    template<typename UtteranceRequestIdT = Aws::String>
    UtteranceSpecification& WithUtteranceRequestId(UtteranceRequestIdT&& value) { SetUtteranceRequestId(std::forward<UtteranceRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects containing information about the bot response to the
     * utterance.</p>
     */
    inline const Aws::Vector<UtteranceBotResponse>& GetBotResponses() const { return m_botResponses; }
    inline bool BotResponsesHasBeenSet() const { return m_botResponsesHasBeenSet; }
    template<typename BotResponsesT = Aws::Vector<UtteranceBotResponse>>
    void SetBotResponses(BotResponsesT&& value) { m_botResponsesHasBeenSet = true; m_botResponses = std::forward<BotResponsesT>(value); }
    template<typename BotResponsesT = Aws::Vector<UtteranceBotResponse>>
    UtteranceSpecification& WithBotResponses(BotResponsesT&& value) { SetBotResponses(std::forward<BotResponsesT>(value)); return *this;}
    template<typename BotResponsesT = UtteranceBotResponse>
    UtteranceSpecification& AddBotResponses(BotResponsesT&& value) { m_botResponsesHasBeenSet = true; m_botResponses.emplace_back(std::forward<BotResponsesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_botAliasId;
    bool m_botAliasIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_channel;
    bool m_channelHasBeenSet = false;

    AnalyticsModality m_mode{AnalyticsModality::NOT_SET};
    bool m_modeHasBeenSet = false;

    Aws::Utils::DateTime m_conversationStartTime{};
    bool m_conversationStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_conversationEndTime{};
    bool m_conversationEndTimeHasBeenSet = false;

    Aws::String m_utterance;
    bool m_utteranceHasBeenSet = false;

    Aws::Utils::DateTime m_utteranceTimestamp{};
    bool m_utteranceTimestampHasBeenSet = false;

    long long m_audioVoiceDurationMillis{0};
    bool m_audioVoiceDurationMillisHasBeenSet = false;

    bool m_utteranceUnderstood{false};
    bool m_utteranceUnderstoodHasBeenSet = false;

    Aws::String m_inputType;
    bool m_inputTypeHasBeenSet = false;

    Aws::String m_outputType;
    bool m_outputTypeHasBeenSet = false;

    Aws::String m_associatedIntentName;
    bool m_associatedIntentNameHasBeenSet = false;

    Aws::String m_associatedSlotName;
    bool m_associatedSlotNameHasBeenSet = false;

    IntentState m_intentState{IntentState::NOT_SET};
    bool m_intentStateHasBeenSet = false;

    Aws::String m_dialogActionType;
    bool m_dialogActionTypeHasBeenSet = false;

    Aws::String m_botResponseAudioVoiceId;
    bool m_botResponseAudioVoiceIdHasBeenSet = false;

    Aws::String m_slotsFilledInSession;
    bool m_slotsFilledInSessionHasBeenSet = false;

    Aws::String m_utteranceRequestId;
    bool m_utteranceRequestIdHasBeenSet = false;

    Aws::Vector<UtteranceBotResponse> m_botResponses;
    bool m_botResponsesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
