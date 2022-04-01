/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/AudioConcatenationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

AudioConcatenationConfiguration::AudioConcatenationConfiguration() : 
    m_state(AudioArtifactsConcatenationState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

AudioConcatenationConfiguration::AudioConcatenationConfiguration(JsonView jsonValue) : 
    m_state(AudioArtifactsConcatenationState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

AudioConcatenationConfiguration& AudioConcatenationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = AudioArtifactsConcatenationStateMapper::GetAudioArtifactsConcatenationStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioConcatenationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", AudioArtifactsConcatenationStateMapper::GetNameForAudioArtifactsConcatenationState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
