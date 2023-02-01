/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/AudioArtifactsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

AudioArtifactsConfiguration::AudioArtifactsConfiguration() : 
    m_muxType(AudioMuxType::NOT_SET),
    m_muxTypeHasBeenSet(false)
{
}

AudioArtifactsConfiguration::AudioArtifactsConfiguration(JsonView jsonValue) : 
    m_muxType(AudioMuxType::NOT_SET),
    m_muxTypeHasBeenSet(false)
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
} // namespace Chime
} // namespace Aws
