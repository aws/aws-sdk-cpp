/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/LiveConnectorRTMPConfiguration.h>
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

LiveConnectorRTMPConfiguration::LiveConnectorRTMPConfiguration() : 
    m_urlHasBeenSet(false),
    m_audioChannels(AudioChannelsOption::NOT_SET),
    m_audioChannelsHasBeenSet(false),
    m_audioSampleRateHasBeenSet(false)
{
}

LiveConnectorRTMPConfiguration::LiveConnectorRTMPConfiguration(JsonView jsonValue) : 
    m_urlHasBeenSet(false),
    m_audioChannels(AudioChannelsOption::NOT_SET),
    m_audioChannelsHasBeenSet(false),
    m_audioSampleRateHasBeenSet(false)
{
  *this = jsonValue;
}

LiveConnectorRTMPConfiguration& LiveConnectorRTMPConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AudioChannels"))
  {
    m_audioChannels = AudioChannelsOptionMapper::GetAudioChannelsOptionForName(jsonValue.GetString("AudioChannels"));

    m_audioChannelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AudioSampleRate"))
  {
    m_audioSampleRate = jsonValue.GetString("AudioSampleRate");

    m_audioSampleRateHasBeenSet = true;
  }

  return *this;
}

JsonValue LiveConnectorRTMPConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_audioChannelsHasBeenSet)
  {
   payload.WithString("AudioChannels", AudioChannelsOptionMapper::GetNameForAudioChannelsOption(m_audioChannels));
  }

  if(m_audioSampleRateHasBeenSet)
  {
   payload.WithString("AudioSampleRate", m_audioSampleRate);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
