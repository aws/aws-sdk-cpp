/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/AuthenticationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VoiceID
{
namespace Model
{

AuthenticationResult::AuthenticationResult() : 
    m_audioAggregationEndedAtHasBeenSet(false),
    m_audioAggregationStartedAtHasBeenSet(false),
    m_authenticationResultIdHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_customerSpeakerIdHasBeenSet(false),
    m_decision(AuthenticationDecision::NOT_SET),
    m_decisionHasBeenSet(false),
    m_generatedSpeakerIdHasBeenSet(false),
    m_score(0),
    m_scoreHasBeenSet(false)
{
}

AuthenticationResult::AuthenticationResult(JsonView jsonValue) : 
    m_audioAggregationEndedAtHasBeenSet(false),
    m_audioAggregationStartedAtHasBeenSet(false),
    m_authenticationResultIdHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_customerSpeakerIdHasBeenSet(false),
    m_decision(AuthenticationDecision::NOT_SET),
    m_decisionHasBeenSet(false),
    m_generatedSpeakerIdHasBeenSet(false),
    m_score(0),
    m_scoreHasBeenSet(false)
{
  *this = jsonValue;
}

AuthenticationResult& AuthenticationResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AudioAggregationEndedAt"))
  {
    m_audioAggregationEndedAt = jsonValue.GetDouble("AudioAggregationEndedAt");

    m_audioAggregationEndedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AudioAggregationStartedAt"))
  {
    m_audioAggregationStartedAt = jsonValue.GetDouble("AudioAggregationStartedAt");

    m_audioAggregationStartedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthenticationResultId"))
  {
    m_authenticationResultId = jsonValue.GetString("AuthenticationResultId");

    m_authenticationResultIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Configuration"))
  {
    m_configuration = jsonValue.GetObject("Configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomerSpeakerId"))
  {
    m_customerSpeakerId = jsonValue.GetString("CustomerSpeakerId");

    m_customerSpeakerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Decision"))
  {
    m_decision = AuthenticationDecisionMapper::GetAuthenticationDecisionForName(jsonValue.GetString("Decision"));

    m_decisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeneratedSpeakerId"))
  {
    m_generatedSpeakerId = jsonValue.GetString("GeneratedSpeakerId");

    m_generatedSpeakerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetInteger("Score");

    m_scoreHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthenticationResult::Jsonize() const
{
  JsonValue payload;

  if(m_audioAggregationEndedAtHasBeenSet)
  {
   payload.WithDouble("AudioAggregationEndedAt", m_audioAggregationEndedAt.SecondsWithMSPrecision());
  }

  if(m_audioAggregationStartedAtHasBeenSet)
  {
   payload.WithDouble("AudioAggregationStartedAt", m_audioAggregationStartedAt.SecondsWithMSPrecision());
  }

  if(m_authenticationResultIdHasBeenSet)
  {
   payload.WithString("AuthenticationResultId", m_authenticationResultId);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("Configuration", m_configuration.Jsonize());

  }

  if(m_customerSpeakerIdHasBeenSet)
  {
   payload.WithString("CustomerSpeakerId", m_customerSpeakerId);

  }

  if(m_decisionHasBeenSet)
  {
   payload.WithString("Decision", AuthenticationDecisionMapper::GetNameForAuthenticationDecision(m_decision));
  }

  if(m_generatedSpeakerIdHasBeenSet)
  {
   payload.WithString("GeneratedSpeakerId", m_generatedSpeakerId);

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithInteger("Score", m_score);

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
