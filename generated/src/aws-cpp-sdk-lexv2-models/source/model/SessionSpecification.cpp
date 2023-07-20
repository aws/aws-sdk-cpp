/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SessionSpecification.h>
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

SessionSpecification::SessionSpecification() : 
    m_botAliasIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_conversationStartTimeHasBeenSet(false),
    m_conversationEndTimeHasBeenSet(false),
    m_conversationDurationSeconds(0),
    m_conversationDurationSecondsHasBeenSet(false),
    m_conversationEndState(ConversationEndState::NOT_SET),
    m_conversationEndStateHasBeenSet(false),
    m_mode(AnalyticsModality::NOT_SET),
    m_modeHasBeenSet(false),
    m_numberOfTurns(0),
    m_numberOfTurnsHasBeenSet(false),
    m_invokedIntentSamplesHasBeenSet(false),
    m_originatingRequestIdHasBeenSet(false)
{
}

SessionSpecification::SessionSpecification(JsonView jsonValue) : 
    m_botAliasIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_conversationStartTimeHasBeenSet(false),
    m_conversationEndTimeHasBeenSet(false),
    m_conversationDurationSeconds(0),
    m_conversationDurationSecondsHasBeenSet(false),
    m_conversationEndState(ConversationEndState::NOT_SET),
    m_conversationEndStateHasBeenSet(false),
    m_mode(AnalyticsModality::NOT_SET),
    m_modeHasBeenSet(false),
    m_numberOfTurns(0),
    m_numberOfTurnsHasBeenSet(false),
    m_invokedIntentSamplesHasBeenSet(false),
    m_originatingRequestIdHasBeenSet(false)
{
  *this = jsonValue;
}

SessionSpecification& SessionSpecification::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("channel"))
  {
    m_channel = jsonValue.GetString("channel");

    m_channelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

    m_sessionIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("conversationDurationSeconds"))
  {
    m_conversationDurationSeconds = jsonValue.GetInt64("conversationDurationSeconds");

    m_conversationDurationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("conversationEndState"))
  {
    m_conversationEndState = ConversationEndStateMapper::GetConversationEndStateForName(jsonValue.GetString("conversationEndState"));

    m_conversationEndStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mode"))
  {
    m_mode = AnalyticsModalityMapper::GetAnalyticsModalityForName(jsonValue.GetString("mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfTurns"))
  {
    m_numberOfTurns = jsonValue.GetInt64("numberOfTurns");

    m_numberOfTurnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("invokedIntentSamples"))
  {
    Aws::Utils::Array<JsonView> invokedIntentSamplesJsonList = jsonValue.GetArray("invokedIntentSamples");
    for(unsigned invokedIntentSamplesIndex = 0; invokedIntentSamplesIndex < invokedIntentSamplesJsonList.GetLength(); ++invokedIntentSamplesIndex)
    {
      m_invokedIntentSamples.push_back(invokedIntentSamplesJsonList[invokedIntentSamplesIndex].AsObject());
    }
    m_invokedIntentSamplesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("originatingRequestId"))
  {
    m_originatingRequestId = jsonValue.GetString("originatingRequestId");

    m_originatingRequestIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionSpecification::Jsonize() const
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

  if(m_channelHasBeenSet)
  {
   payload.WithString("channel", m_channel);

  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_conversationStartTimeHasBeenSet)
  {
   payload.WithDouble("conversationStartTime", m_conversationStartTime.SecondsWithMSPrecision());
  }

  if(m_conversationEndTimeHasBeenSet)
  {
   payload.WithDouble("conversationEndTime", m_conversationEndTime.SecondsWithMSPrecision());
  }

  if(m_conversationDurationSecondsHasBeenSet)
  {
   payload.WithInt64("conversationDurationSeconds", m_conversationDurationSeconds);

  }

  if(m_conversationEndStateHasBeenSet)
  {
   payload.WithString("conversationEndState", ConversationEndStateMapper::GetNameForConversationEndState(m_conversationEndState));
  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", AnalyticsModalityMapper::GetNameForAnalyticsModality(m_mode));
  }

  if(m_numberOfTurnsHasBeenSet)
  {
   payload.WithInt64("numberOfTurns", m_numberOfTurns);

  }

  if(m_invokedIntentSamplesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> invokedIntentSamplesJsonList(m_invokedIntentSamples.size());
   for(unsigned invokedIntentSamplesIndex = 0; invokedIntentSamplesIndex < invokedIntentSamplesJsonList.GetLength(); ++invokedIntentSamplesIndex)
   {
     invokedIntentSamplesJsonList[invokedIntentSamplesIndex].AsObject(m_invokedIntentSamples[invokedIntentSamplesIndex].Jsonize());
   }
   payload.WithArray("invokedIntentSamples", std::move(invokedIntentSamplesJsonList));

  }

  if(m_originatingRequestIdHasBeenSet)
  {
   payload.WithString("originatingRequestId", m_originatingRequestId);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
