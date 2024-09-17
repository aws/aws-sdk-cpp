/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/AudioChannelsOption.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>The media pipeline's RTMP configuration object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/LiveConnectorRTMPConfiguration">AWS
   * API Reference</a></p>
   */
  class LiveConnectorRTMPConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorRTMPConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorRTMPConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorRTMPConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of the RTMP configuration.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline LiveConnectorRTMPConfiguration& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline LiveConnectorRTMPConfiguration& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline LiveConnectorRTMPConfiguration& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The audio channels set for the RTMP configuration</p>
     */
    inline const AudioChannelsOption& GetAudioChannels() const{ return m_audioChannels; }
    inline bool AudioChannelsHasBeenSet() const { return m_audioChannelsHasBeenSet; }
    inline void SetAudioChannels(const AudioChannelsOption& value) { m_audioChannelsHasBeenSet = true; m_audioChannels = value; }
    inline void SetAudioChannels(AudioChannelsOption&& value) { m_audioChannelsHasBeenSet = true; m_audioChannels = std::move(value); }
    inline LiveConnectorRTMPConfiguration& WithAudioChannels(const AudioChannelsOption& value) { SetAudioChannels(value); return *this;}
    inline LiveConnectorRTMPConfiguration& WithAudioChannels(AudioChannelsOption&& value) { SetAudioChannels(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The audio sample rate set for the RTMP configuration. Default: 48000.</p>
     */
    inline const Aws::String& GetAudioSampleRate() const{ return m_audioSampleRate; }
    inline bool AudioSampleRateHasBeenSet() const { return m_audioSampleRateHasBeenSet; }
    inline void SetAudioSampleRate(const Aws::String& value) { m_audioSampleRateHasBeenSet = true; m_audioSampleRate = value; }
    inline void SetAudioSampleRate(Aws::String&& value) { m_audioSampleRateHasBeenSet = true; m_audioSampleRate = std::move(value); }
    inline void SetAudioSampleRate(const char* value) { m_audioSampleRateHasBeenSet = true; m_audioSampleRate.assign(value); }
    inline LiveConnectorRTMPConfiguration& WithAudioSampleRate(const Aws::String& value) { SetAudioSampleRate(value); return *this;}
    inline LiveConnectorRTMPConfiguration& WithAudioSampleRate(Aws::String&& value) { SetAudioSampleRate(std::move(value)); return *this;}
    inline LiveConnectorRTMPConfiguration& WithAudioSampleRate(const char* value) { SetAudioSampleRate(value); return *this;}
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    AudioChannelsOption m_audioChannels;
    bool m_audioChannelsHasBeenSet = false;

    Aws::String m_audioSampleRate;
    bool m_audioSampleRateHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
