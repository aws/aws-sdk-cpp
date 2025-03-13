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
    AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorRTMPConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorRTMPConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorRTMPConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of the RTMP configuration.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    LiveConnectorRTMPConfiguration& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The audio channels set for the RTMP configuration</p>
     */
    inline AudioChannelsOption GetAudioChannels() const { return m_audioChannels; }
    inline bool AudioChannelsHasBeenSet() const { return m_audioChannelsHasBeenSet; }
    inline void SetAudioChannels(AudioChannelsOption value) { m_audioChannelsHasBeenSet = true; m_audioChannels = value; }
    inline LiveConnectorRTMPConfiguration& WithAudioChannels(AudioChannelsOption value) { SetAudioChannels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The audio sample rate set for the RTMP configuration. Default: 48000.</p>
     */
    inline const Aws::String& GetAudioSampleRate() const { return m_audioSampleRate; }
    inline bool AudioSampleRateHasBeenSet() const { return m_audioSampleRateHasBeenSet; }
    template<typename AudioSampleRateT = Aws::String>
    void SetAudioSampleRate(AudioSampleRateT&& value) { m_audioSampleRateHasBeenSet = true; m_audioSampleRate = std::forward<AudioSampleRateT>(value); }
    template<typename AudioSampleRateT = Aws::String>
    LiveConnectorRTMPConfiguration& WithAudioSampleRate(AudioSampleRateT&& value) { SetAudioSampleRate(std::forward<AudioSampleRateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    AudioChannelsOption m_audioChannels{AudioChannelsOption::NOT_SET};
    bool m_audioChannelsHasBeenSet = false;

    Aws::String m_audioSampleRate;
    bool m_audioSampleRateHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
