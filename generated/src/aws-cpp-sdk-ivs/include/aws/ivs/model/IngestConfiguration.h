/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/AudioConfiguration.h>
#include <aws/ivs/model/VideoConfiguration.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>Object specifying the ingest configuration set up by the broadcaster, usually
   * in an encoder.</p> <p> <b>Note:</b> IngestConfiguration is deprecated in favor
   * of <a>IngestConfigurations</a> but retained to ensure backward compatibility. If
   * multitrack is not enabled, IngestConfiguration and IngestConfigurations contain
   * the same data, namely information about track0 (the sole track). If multitrack
   * is enabled, IngestConfiguration contains data for only the first track (track0)
   * and IngestConfigurations contains data for all tracks.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/IngestConfiguration">AWS
   * API Reference</a></p>
   */
  class IngestConfiguration
  {
  public:
    AWS_IVS_API IngestConfiguration() = default;
    AWS_IVS_API IngestConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API IngestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Encoder settings for audio.</p>
     */
    inline const AudioConfiguration& GetAudio() const { return m_audio; }
    inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }
    template<typename AudioT = AudioConfiguration>
    void SetAudio(AudioT&& value) { m_audioHasBeenSet = true; m_audio = std::forward<AudioT>(value); }
    template<typename AudioT = AudioConfiguration>
    IngestConfiguration& WithAudio(AudioT&& value) { SetAudio(std::forward<AudioT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encoder settings for video.</p>
     */
    inline const VideoConfiguration& GetVideo() const { return m_video; }
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
    template<typename VideoT = VideoConfiguration>
    void SetVideo(VideoT&& value) { m_videoHasBeenSet = true; m_video = std::forward<VideoT>(value); }
    template<typename VideoT = VideoConfiguration>
    IngestConfiguration& WithVideo(VideoT&& value) { SetVideo(std::forward<VideoT>(value)); return *this;}
    ///@}
  private:

    AudioConfiguration m_audio;
    bool m_audioHasBeenSet = false;

    VideoConfiguration m_video;
    bool m_videoHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
