/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/AudioArtifactsConfiguration.h>
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

AudioArtifactsConfiguration::AudioArtifactsConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AudioArtifactsConfiguration& AudioArtifactsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MuxType"))
  {
    m_muxType = AudioMuxTypeMapper::GetAudioMuxTypeForName(jsonValue.GetString("MuxType"));
    m_muxTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioArtifactsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_muxTypeHasBeenSet)
  {
   payload.WithString("MuxType", AudioMuxTypeMapper::GetNameForAudioMuxType(m_muxType));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
