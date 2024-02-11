/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UtteranceSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

UtteranceSpecification::UtteranceSpecification() : 
    m_botAliasIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_mode(AnalyticsModality::NOT_SET),
    m_modeHasBeenSet(false),
    m_conversationStartTimeHasBeenSet(false),
    m_conversationEndTimeHasBeenSet(false),
    m_utteranceHasBeenSet(false),
    m_utteranceTimestampHasBeenSet(false),
    m_audioVoiceDurationMillis(0),
    m_audioVoiceDurationMillisHasBeenSet(false),
    m_utteranceUnderstood(false),
    m_utteranceUnderstoodHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_outputTypeHasBeenSet(false),
    m_associatedIntentNameHasBeenSet(false),
    m_associatedSlotNameHasBeenSet(false),
    m_intentState(IntentState::NOT_SET),
    m_intentStateHasBeenSet(false),
    m_dialogActionTypeHasBeenSet(false),
    m_botResponseAudioVoiceIdHasBeenSet(false),
    m_slotsFilledInSessionHasBeenSet(false),
    m_utteranceRequestIdHasBeenSet(false),
    m_botResponsesHasBeenSet(false)
{
}

UtteranceSpecification::UtteranceSpecification(JsonView jsonValue) : 
    m_botAliasIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_mode(AnalyticsModality::NOT_SET),
    m_modeHasBeenSet(false),
    m_conversationStartTimeHasBeenSet(false),
    m_conversationEndTimeHasBeenSet(false),
    m_utteranceHasBeenSet(false),
    m_utteranceTimestampHasBeenSet(false),
    m_audioVoiceDurationMillis(0),
    m_audioVoiceDurationMillisHasBeenSet(false),
    m_utteranceUnderstood(false),
    m_utteranceUnderstoodHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_outputTypeHasBeenSet(false),
    m_associatedIntentNameHasBeenSet(false),
    m_associatedSlotNameHasBeenSet(false),
    m_intentState(IntentState::NOT_SET),
    m_intentStateHasBeenSet(false),
    m_dialogActionTypeHasBeenSet(false),
    m_botResponseAudioVoiceIdHasBeenSet(false),
    m_slotsFilledInSessionHasBeenSet(false),
    m_utteranceRequestIdHasBeenSet(false),
    m_botResponsesHasBeenSet(false)
{
  *this = jsonValue;
}

UtteranceSpecification& UtteranceSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botAliasId"))
  {
    m_botAliasId = jsonValue.GetString("botAliasId");

    m_botAliasIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

    m_botVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");

    m_localeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

    m_sessionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("channel"))
  {
    m_channel = jsonValue.GetString("channel");

    m_channelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mode"))
  {
    m_mode = AnalyticsModalityMapper::GetAnalyticsModalityForName(jsonValue.GetString("mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("conversationStartTime"))
  {
    m_conversationStartTime = jsonValue.GetDouble("conversationStartTime");

    m_conversationStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("conversationEndTime"))
  {
    m_conversationEndTime = jsonValue.GetDouble("conversationEndTime");

    m_conversationEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("utterance"))
  {
    m_utterance = jsonValue.GetString("utterance");

    m_utteranceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("utteranceTimestamp"))
  {
    m_utteranceTimestamp = jsonValue.GetDouble("utteranceTimestamp");

    m_utteranceTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioVoiceDurationMillis"))
  {
    m_audioVoiceDurationMillis = jsonValue.GetInt64("audioVoiceDurationMillis");

    m_audioVoiceDurationMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("utteranceUnderstood"))
  {
    m_utteranceUnderstood = jsonValue.GetBool("utteranceUnderstood");

    m_utteranceUnderstoodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputType"))
  {
    m_inputType = jsonValue.GetString("inputType");

    m_inputTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputType"))
  {
    m_outputType = jsonValue.GetString("outputType");

    m_outputTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associatedIntentName"))
  {
    m_associatedIntentName = jsonValue.GetString("associatedIntentName");

    m_associatedIntentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associatedSlotName"))
  {
    m_associatedSlotName = jsonValue.GetString("associatedSlotName");

    m_associatedSlotNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intentState"))
  {
    m_intentState = IntentStateMapper::GetIntentStateForName(jsonValue.GetString("intentState"));

    m_intentStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dialogActionType"))
  {
    m_dialogActionType = jsonValue.GetString("dialogActionType");

    m_dialogActionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botResponseAudioVoiceId"))
  {
    m_botResponseAudioVoiceId = jsonValue.GetString("botResponseAudioVoiceId");

    m_botResponseAudioVoiceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotsFilledInSession"))
  {
    m_slotsFilledInSession = jsonValue.GetString("slotsFilledInSession");

    m_slotsFilledInSessionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("utteranceRequestId"))
  {
    m_utteranceRequestId = jsonValue.GetString("utteranceRequestId");

    m_utteranceRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botResponses"))
  {
    Aws::Utils::Array<JsonView> botResponsesJsonList = jsonValue.GetArray("botResponses");
    for(unsigned botResponsesIndex = 0; botResponsesIndex < botResponsesJsonList.GetLength(); ++botResponsesIndex)
    {
      m_botResponses.push_back(botResponsesJsonList[botResponsesIndex].AsObject());
    }
    m_botResponsesHasBeenSet = true;
  }

  return *this;
}

JsonValue UtteranceSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_botAliasIdHasBeenSet)
  {
   payload.WithString("botAliasId", m_botAliasId);

  }

  if(m_botVersionHasBeenSet)
  {
   payload.WithString("botVersion", m_botVersion);

  }

  if(m_localeIdHasBeenSet)
  {
   payload.WithString("localeId", m_localeId);

  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_channelHasBeenSet)
  {
   payload.WithString("channel", m_channel);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", AnalyticsModalityMapper::GetNameForAnalyticsModality(m_mode));
  }

  if(m_conversationStartTimeHasBeenSet)
  {
   payload.WithDouble("conversationStartTime", m_conversationStartTime.SecondsWithMSPrecision());
  }

  if(m_conversationEndTimeHasBeenSet)
  {
   payload.WithDouble("conversationEndTime", m_conversationEndTime.SecondsWithMSPrecision());
  }

  if(m_utteranceHasBeenSet)
  {
   payload.WithString("utterance", m_utterance);

  }

  if(m_utteranceTimestampHasBeenSet)
  {
   payload.WithDouble("utteranceTimestamp", m_utteranceTimestamp.SecondsWithMSPrecision());
  }

  if(m_audioVoiceDurationMillisHasBeenSet)
  {
   payload.WithInt64("audioVoiceDurationMillis", m_audioVoiceDurationMillis);

  }

  if(m_utteranceUnderstoodHasBeenSet)
  {
   payload.WithBool("utteranceUnderstood", m_utteranceUnderstood);

  }

  if(m_inputTypeHasBeenSet)
  {
   payload.WithString("inputType", m_inputType);

  }

  if(m_outputTypeHasBeenSet)
  {
   payload.WithString("outputType", m_outputType);

  }

  if(m_associatedIntentNameHasBeenSet)
  {
   payload.WithString("associatedIntentName", m_associatedIntentName);

  }

  if(m_associatedSlotNameHasBeenSet)
  {
   payload.WithString("associatedSlotName", m_associatedSlotName);

  }

  if(m_intentStateHasBeenSet)
  {
   payload.WithString("intentState", IntentStateMapper::GetNameForIntentState(m_intentState));
  }

  if(m_dialogActionTypeHasBeenSet)
  {
   payload.WithString("dialogActionType", m_dialogActionType);

  }

  if(m_botResponseAudioVoiceIdHasBeenSet)
  {
   payload.WithString("botResponseAudioVoiceId", m_botResponseAudioVoiceId);

  }

  if(m_slotsFilledInSessionHasBeenSet)
  {
   payload.WithString("slotsFilledInSession", m_slotsFilledInSession);

  }

  if(m_utteranceRequestIdHasBeenSet)
  {
   payload.WithString("utteranceRequestId", m_utteranceRequestId);

  }

  if(m_botResponsesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> botResponsesJsonList(m_botResponses.size());
   for(unsigned botResponsesIndex = 0; botResponsesIndex < botResponsesJsonList.GetLength(); ++botResponsesIndex)
   {
     botResponsesJsonList[botResponsesIndex].AsObject(m_botResponses[botResponsesIndex].Jsonize());
   }
   payload.WithArray("botResponses", std::move(botResponsesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
