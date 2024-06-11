﻿/**
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
    AWS_LEXMODELSV2_API UtteranceSpecification();
    AWS_LEXMODELSV2_API UtteranceSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UtteranceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the alias of the bot that the utterance was made to.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = value; }
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::move(value); }
    inline void SetBotAliasId(const char* value) { m_botAliasIdHasBeenSet = true; m_botAliasId.assign(value); }
    inline UtteranceSpecification& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}
    inline UtteranceSpecification& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}
    inline UtteranceSpecification& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that the utterance was made to.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }
    inline UtteranceSpecification& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline UtteranceSpecification& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline UtteranceSpecification& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the bot that the utterance was made to.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }
    inline UtteranceSpecification& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline UtteranceSpecification& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline UtteranceSpecification& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session that the utterance was made in.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline UtteranceSpecification& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline UtteranceSpecification& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline UtteranceSpecification& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel that is integrated with the bot that the utterance was made
     * to.</p>
     */
    inline const Aws::String& GetChannel() const{ return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(const Aws::String& value) { m_channelHasBeenSet = true; m_channel = value; }
    inline void SetChannel(Aws::String&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }
    inline void SetChannel(const char* value) { m_channelHasBeenSet = true; m_channel.assign(value); }
    inline UtteranceSpecification& WithChannel(const Aws::String& value) { SetChannel(value); return *this;}
    inline UtteranceSpecification& WithChannel(Aws::String&& value) { SetChannel(std::move(value)); return *this;}
    inline UtteranceSpecification& WithChannel(const char* value) { SetChannel(value); return *this;}
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
    inline const AnalyticsModality& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const AnalyticsModality& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(AnalyticsModality&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline UtteranceSpecification& WithMode(const AnalyticsModality& value) { SetMode(value); return *this;}
    inline UtteranceSpecification& WithMode(AnalyticsModality&& value) { SetMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the conversation in which the utterance took place
     * began. A conversation is defined as a unique combination of a
     * <code>sessionId</code> and an <code>originatingRequestId</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetConversationStartTime() const{ return m_conversationStartTime; }
    inline bool ConversationStartTimeHasBeenSet() const { return m_conversationStartTimeHasBeenSet; }
    inline void SetConversationStartTime(const Aws::Utils::DateTime& value) { m_conversationStartTimeHasBeenSet = true; m_conversationStartTime = value; }
    inline void SetConversationStartTime(Aws::Utils::DateTime&& value) { m_conversationStartTimeHasBeenSet = true; m_conversationStartTime = std::move(value); }
    inline UtteranceSpecification& WithConversationStartTime(const Aws::Utils::DateTime& value) { SetConversationStartTime(value); return *this;}
    inline UtteranceSpecification& WithConversationStartTime(Aws::Utils::DateTime&& value) { SetConversationStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the conversation in which the utterance took place
     * ended. A conversation is defined as a unique combination of a
     * <code>sessionId</code> and an <code>originatingRequestId</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetConversationEndTime() const{ return m_conversationEndTime; }
    inline bool ConversationEndTimeHasBeenSet() const { return m_conversationEndTimeHasBeenSet; }
    inline void SetConversationEndTime(const Aws::Utils::DateTime& value) { m_conversationEndTimeHasBeenSet = true; m_conversationEndTime = value; }
    inline void SetConversationEndTime(Aws::Utils::DateTime&& value) { m_conversationEndTimeHasBeenSet = true; m_conversationEndTime = std::move(value); }
    inline UtteranceSpecification& WithConversationEndTime(const Aws::Utils::DateTime& value) { SetConversationEndTime(value); return *this;}
    inline UtteranceSpecification& WithConversationEndTime(Aws::Utils::DateTime&& value) { SetConversationEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the utterance.</p>
     */
    inline const Aws::String& GetUtterance() const{ return m_utterance; }
    inline bool UtteranceHasBeenSet() const { return m_utteranceHasBeenSet; }
    inline void SetUtterance(const Aws::String& value) { m_utteranceHasBeenSet = true; m_utterance = value; }
    inline void SetUtterance(Aws::String&& value) { m_utteranceHasBeenSet = true; m_utterance = std::move(value); }
    inline void SetUtterance(const char* value) { m_utteranceHasBeenSet = true; m_utterance.assign(value); }
    inline UtteranceSpecification& WithUtterance(const Aws::String& value) { SetUtterance(value); return *this;}
    inline UtteranceSpecification& WithUtterance(Aws::String&& value) { SetUtterance(std::move(value)); return *this;}
    inline UtteranceSpecification& WithUtterance(const char* value) { SetUtterance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the utterance took place.</p>
     */
    inline const Aws::Utils::DateTime& GetUtteranceTimestamp() const{ return m_utteranceTimestamp; }
    inline bool UtteranceTimestampHasBeenSet() const { return m_utteranceTimestampHasBeenSet; }
    inline void SetUtteranceTimestamp(const Aws::Utils::DateTime& value) { m_utteranceTimestampHasBeenSet = true; m_utteranceTimestamp = value; }
    inline void SetUtteranceTimestamp(Aws::Utils::DateTime&& value) { m_utteranceTimestampHasBeenSet = true; m_utteranceTimestamp = std::move(value); }
    inline UtteranceSpecification& WithUtteranceTimestamp(const Aws::Utils::DateTime& value) { SetUtteranceTimestamp(value); return *this;}
    inline UtteranceSpecification& WithUtteranceTimestamp(Aws::Utils::DateTime&& value) { SetUtteranceTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration in milliseconds of the audio associated with the utterance.</p>
     */
    inline long long GetAudioVoiceDurationMillis() const{ return m_audioVoiceDurationMillis; }
    inline bool AudioVoiceDurationMillisHasBeenSet() const { return m_audioVoiceDurationMillisHasBeenSet; }
    inline void SetAudioVoiceDurationMillis(long long value) { m_audioVoiceDurationMillisHasBeenSet = true; m_audioVoiceDurationMillis = value; }
    inline UtteranceSpecification& WithAudioVoiceDurationMillis(long long value) { SetAudioVoiceDurationMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the bot understood the utterance or not.</p>
     */
    inline bool GetUtteranceUnderstood() const{ return m_utteranceUnderstood; }
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
    inline const Aws::String& GetInputType() const{ return m_inputType; }
    inline bool InputTypeHasBeenSet() const { return m_inputTypeHasBeenSet; }
    inline void SetInputType(const Aws::String& value) { m_inputTypeHasBeenSet = true; m_inputType = value; }
    inline void SetInputType(Aws::String&& value) { m_inputTypeHasBeenSet = true; m_inputType = std::move(value); }
    inline void SetInputType(const char* value) { m_inputTypeHasBeenSet = true; m_inputType.assign(value); }
    inline UtteranceSpecification& WithInputType(const Aws::String& value) { SetInputType(value); return *this;}
    inline UtteranceSpecification& WithInputType(Aws::String&& value) { SetInputType(std::move(value)); return *this;}
    inline UtteranceSpecification& WithInputType(const char* value) { SetInputType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output type of the utterance. The possible values are as follows:</p>
     * <ul> <li> <p> <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code>
     * </p> </li> <li> <p> <code>audio/pcm (16 KHz)</code> </p> </li> <li> <p>
     * <code>audio/</code> (defaults to <code>mpeg</code>)</p> </li> <li> <p>
     * <code>text/plain; charset=utf-8</code> </p> </li> </ul>
     */
    inline const Aws::String& GetOutputType() const{ return m_outputType; }
    inline bool OutputTypeHasBeenSet() const { return m_outputTypeHasBeenSet; }
    inline void SetOutputType(const Aws::String& value) { m_outputTypeHasBeenSet = true; m_outputType = value; }
    inline void SetOutputType(Aws::String&& value) { m_outputTypeHasBeenSet = true; m_outputType = std::move(value); }
    inline void SetOutputType(const char* value) { m_outputTypeHasBeenSet = true; m_outputType.assign(value); }
    inline UtteranceSpecification& WithOutputType(const Aws::String& value) { SetOutputType(value); return *this;}
    inline UtteranceSpecification& WithOutputType(Aws::String&& value) { SetOutputType(std::move(value)); return *this;}
    inline UtteranceSpecification& WithOutputType(const char* value) { SetOutputType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the intent that the utterance is associated to.</p>
     */
    inline const Aws::String& GetAssociatedIntentName() const{ return m_associatedIntentName; }
    inline bool AssociatedIntentNameHasBeenSet() const { return m_associatedIntentNameHasBeenSet; }
    inline void SetAssociatedIntentName(const Aws::String& value) { m_associatedIntentNameHasBeenSet = true; m_associatedIntentName = value; }
    inline void SetAssociatedIntentName(Aws::String&& value) { m_associatedIntentNameHasBeenSet = true; m_associatedIntentName = std::move(value); }
    inline void SetAssociatedIntentName(const char* value) { m_associatedIntentNameHasBeenSet = true; m_associatedIntentName.assign(value); }
    inline UtteranceSpecification& WithAssociatedIntentName(const Aws::String& value) { SetAssociatedIntentName(value); return *this;}
    inline UtteranceSpecification& WithAssociatedIntentName(Aws::String&& value) { SetAssociatedIntentName(std::move(value)); return *this;}
    inline UtteranceSpecification& WithAssociatedIntentName(const char* value) { SetAssociatedIntentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the slot that the utterance is associated to.</p>
     */
    inline const Aws::String& GetAssociatedSlotName() const{ return m_associatedSlotName; }
    inline bool AssociatedSlotNameHasBeenSet() const { return m_associatedSlotNameHasBeenSet; }
    inline void SetAssociatedSlotName(const Aws::String& value) { m_associatedSlotNameHasBeenSet = true; m_associatedSlotName = value; }
    inline void SetAssociatedSlotName(Aws::String&& value) { m_associatedSlotNameHasBeenSet = true; m_associatedSlotName = std::move(value); }
    inline void SetAssociatedSlotName(const char* value) { m_associatedSlotNameHasBeenSet = true; m_associatedSlotName.assign(value); }
    inline UtteranceSpecification& WithAssociatedSlotName(const Aws::String& value) { SetAssociatedSlotName(value); return *this;}
    inline UtteranceSpecification& WithAssociatedSlotName(Aws::String&& value) { SetAssociatedSlotName(std::move(value)); return *this;}
    inline UtteranceSpecification& WithAssociatedSlotName(const char* value) { SetAssociatedSlotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the intent that the utterance is associated to.</p>
     */
    inline const IntentState& GetIntentState() const{ return m_intentState; }
    inline bool IntentStateHasBeenSet() const { return m_intentStateHasBeenSet; }
    inline void SetIntentState(const IntentState& value) { m_intentStateHasBeenSet = true; m_intentState = value; }
    inline void SetIntentState(IntentState&& value) { m_intentStateHasBeenSet = true; m_intentState = std::move(value); }
    inline UtteranceSpecification& WithIntentState(const IntentState& value) { SetIntentState(value); return *this;}
    inline UtteranceSpecification& WithIntentState(IntentState&& value) { SetIntentState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of dialog action that the utterance is associated to. See the
     * <code>type</code> field in <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_runtime_DialogAction.html">DialogAction</a>
     * for more information.</p>
     */
    inline const Aws::String& GetDialogActionType() const{ return m_dialogActionType; }
    inline bool DialogActionTypeHasBeenSet() const { return m_dialogActionTypeHasBeenSet; }
    inline void SetDialogActionType(const Aws::String& value) { m_dialogActionTypeHasBeenSet = true; m_dialogActionType = value; }
    inline void SetDialogActionType(Aws::String&& value) { m_dialogActionTypeHasBeenSet = true; m_dialogActionType = std::move(value); }
    inline void SetDialogActionType(const char* value) { m_dialogActionTypeHasBeenSet = true; m_dialogActionType.assign(value); }
    inline UtteranceSpecification& WithDialogActionType(const Aws::String& value) { SetDialogActionType(value); return *this;}
    inline UtteranceSpecification& WithDialogActionType(Aws::String&& value) { SetDialogActionType(std::move(value)); return *this;}
    inline UtteranceSpecification& WithDialogActionType(const char* value) { SetDialogActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the audio of the bot response.</p>
     */
    inline const Aws::String& GetBotResponseAudioVoiceId() const{ return m_botResponseAudioVoiceId; }
    inline bool BotResponseAudioVoiceIdHasBeenSet() const { return m_botResponseAudioVoiceIdHasBeenSet; }
    inline void SetBotResponseAudioVoiceId(const Aws::String& value) { m_botResponseAudioVoiceIdHasBeenSet = true; m_botResponseAudioVoiceId = value; }
    inline void SetBotResponseAudioVoiceId(Aws::String&& value) { m_botResponseAudioVoiceIdHasBeenSet = true; m_botResponseAudioVoiceId = std::move(value); }
    inline void SetBotResponseAudioVoiceId(const char* value) { m_botResponseAudioVoiceIdHasBeenSet = true; m_botResponseAudioVoiceId.assign(value); }
    inline UtteranceSpecification& WithBotResponseAudioVoiceId(const Aws::String& value) { SetBotResponseAudioVoiceId(value); return *this;}
    inline UtteranceSpecification& WithBotResponseAudioVoiceId(Aws::String&& value) { SetBotResponseAudioVoiceId(std::move(value)); return *this;}
    inline UtteranceSpecification& WithBotResponseAudioVoiceId(const char* value) { SetBotResponseAudioVoiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The slots that have been filled in the session by the time of the
     * utterance.</p>
     */
    inline const Aws::String& GetSlotsFilledInSession() const{ return m_slotsFilledInSession; }
    inline bool SlotsFilledInSessionHasBeenSet() const { return m_slotsFilledInSessionHasBeenSet; }
    inline void SetSlotsFilledInSession(const Aws::String& value) { m_slotsFilledInSessionHasBeenSet = true; m_slotsFilledInSession = value; }
    inline void SetSlotsFilledInSession(Aws::String&& value) { m_slotsFilledInSessionHasBeenSet = true; m_slotsFilledInSession = std::move(value); }
    inline void SetSlotsFilledInSession(const char* value) { m_slotsFilledInSessionHasBeenSet = true; m_slotsFilledInSession.assign(value); }
    inline UtteranceSpecification& WithSlotsFilledInSession(const Aws::String& value) { SetSlotsFilledInSession(value); return *this;}
    inline UtteranceSpecification& WithSlotsFilledInSession(Aws::String&& value) { SetSlotsFilledInSession(std::move(value)); return *this;}
    inline UtteranceSpecification& WithSlotsFilledInSession(const char* value) { SetSlotsFilledInSession(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the request associated with the utterance.</p>
     */
    inline const Aws::String& GetUtteranceRequestId() const{ return m_utteranceRequestId; }
    inline bool UtteranceRequestIdHasBeenSet() const { return m_utteranceRequestIdHasBeenSet; }
    inline void SetUtteranceRequestId(const Aws::String& value) { m_utteranceRequestIdHasBeenSet = true; m_utteranceRequestId = value; }
    inline void SetUtteranceRequestId(Aws::String&& value) { m_utteranceRequestIdHasBeenSet = true; m_utteranceRequestId = std::move(value); }
    inline void SetUtteranceRequestId(const char* value) { m_utteranceRequestIdHasBeenSet = true; m_utteranceRequestId.assign(value); }
    inline UtteranceSpecification& WithUtteranceRequestId(const Aws::String& value) { SetUtteranceRequestId(value); return *this;}
    inline UtteranceSpecification& WithUtteranceRequestId(Aws::String&& value) { SetUtteranceRequestId(std::move(value)); return *this;}
    inline UtteranceSpecification& WithUtteranceRequestId(const char* value) { SetUtteranceRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects containing information about the bot response to the
     * utterance.</p>
     */
    inline const Aws::Vector<UtteranceBotResponse>& GetBotResponses() const{ return m_botResponses; }
    inline bool BotResponsesHasBeenSet() const { return m_botResponsesHasBeenSet; }
    inline void SetBotResponses(const Aws::Vector<UtteranceBotResponse>& value) { m_botResponsesHasBeenSet = true; m_botResponses = value; }
    inline void SetBotResponses(Aws::Vector<UtteranceBotResponse>&& value) { m_botResponsesHasBeenSet = true; m_botResponses = std::move(value); }
    inline UtteranceSpecification& WithBotResponses(const Aws::Vector<UtteranceBotResponse>& value) { SetBotResponses(value); return *this;}
    inline UtteranceSpecification& WithBotResponses(Aws::Vector<UtteranceBotResponse>&& value) { SetBotResponses(std::move(value)); return *this;}
    inline UtteranceSpecification& AddBotResponses(const UtteranceBotResponse& value) { m_botResponsesHasBeenSet = true; m_botResponses.push_back(value); return *this; }
    inline UtteranceSpecification& AddBotResponses(UtteranceBotResponse&& value) { m_botResponsesHasBeenSet = true; m_botResponses.push_back(std::move(value)); return *this; }
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

    AnalyticsModality m_mode;
    bool m_modeHasBeenSet = false;

    Aws::Utils::DateTime m_conversationStartTime;
    bool m_conversationStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_conversationEndTime;
    bool m_conversationEndTimeHasBeenSet = false;

    Aws::String m_utterance;
    bool m_utteranceHasBeenSet = false;

    Aws::Utils::DateTime m_utteranceTimestamp;
    bool m_utteranceTimestampHasBeenSet = false;

    long long m_audioVoiceDurationMillis;
    bool m_audioVoiceDurationMillisHasBeenSet = false;

    bool m_utteranceUnderstood;
    bool m_utteranceUnderstoodHasBeenSet = false;

    Aws::String m_inputType;
    bool m_inputTypeHasBeenSet = false;

    Aws::String m_outputType;
    bool m_outputTypeHasBeenSet = false;

    Aws::String m_associatedIntentName;
    bool m_associatedIntentNameHasBeenSet = false;

    Aws::String m_associatedSlotName;
    bool m_associatedSlotNameHasBeenSet = false;

    IntentState m_intentState;
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
