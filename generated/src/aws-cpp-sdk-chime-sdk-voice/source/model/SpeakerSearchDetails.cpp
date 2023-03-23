/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/SpeakerSearchDetails.h>
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

SpeakerSearchDetails::SpeakerSearchDetails() : 
    m_resultsHasBeenSet(false),
    m_voiceprintGenerationStatusHasBeenSet(false)
{
}

SpeakerSearchDetails::SpeakerSearchDetails(JsonView jsonValue) : 
    m_resultsHasBeenSet(false),
    m_voiceprintGenerationStatusHasBeenSet(false)
{
  *this = jsonValue;
}

SpeakerSearchDetails& SpeakerSearchDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Results"))
  {
    Aws::Utils::Array<JsonView> resultsJsonList = jsonValue.GetArray("Results");
    for(unsigned resultsIndex = 0; resultsIndex < resultsJsonList.GetLength(); ++resultsIndex)
    {
      m_results.push_back(resultsJsonList[resultsIndex].AsObject());
    }
    m_resultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceprintGenerationStatus"))
  {
    m_voiceprintGenerationStatus = jsonValue.GetString("VoiceprintGenerationStatus");

    m_voiceprintGenerationStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue SpeakerSearchDetails::Jsonize() const
{
  JsonValue payload;

  if(m_resultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resultsJsonList(m_results.size());
   for(unsigned resultsIndex = 0; resultsIndex < resultsJsonList.GetLength(); ++resultsIndex)
   {
     resultsJsonList[resultsIndex].AsObject(m_results[resultsIndex].Jsonize());
   }
   payload.WithArray("Results", std::move(resultsJsonList));

  }

  if(m_voiceprintGenerationStatusHasBeenSet)
  {
   payload.WithString("VoiceprintGenerationStatus", m_voiceprintGenerationStatus);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
