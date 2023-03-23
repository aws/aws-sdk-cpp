/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/SpeakerSearchResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

SpeakerSearchResult::SpeakerSearchResult() : 
    m_confidenceScore(0.0),
    m_confidenceScoreHasBeenSet(false),
    m_voiceProfileIdHasBeenSet(false)
{
}

SpeakerSearchResult::SpeakerSearchResult(JsonView jsonValue) : 
    m_confidenceScore(0.0),
    m_confidenceScoreHasBeenSet(false),
    m_voiceProfileIdHasBeenSet(false)
{
  *this = jsonValue;
}

SpeakerSearchResult& SpeakerSearchResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfidenceScore"))
  {
    m_confidenceScore = jsonValue.GetDouble("ConfidenceScore");

    m_confidenceScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceProfileId"))
  {
    m_voiceProfileId = jsonValue.GetString("VoiceProfileId");

    m_voiceProfileIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SpeakerSearchResult::Jsonize() const
{
  JsonValue payload;

  if(m_confidenceScoreHasBeenSet)
  {
   payload.WithDouble("ConfidenceScore", m_confidenceScore);

  }

  if(m_voiceProfileIdHasBeenSet)
  {
   payload.WithString("VoiceProfileId", m_voiceProfileId);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
