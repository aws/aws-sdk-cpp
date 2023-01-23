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
   * in an encoder.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/IngestConfiguration">AWS
   * API Reference</a></p>
   */
  class IngestConfiguration
  {
  public:
    AWS_IVS_API IngestConfiguration();
    AWS_IVS_API IngestConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API IngestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Encoder settings for audio.</p>
     */
    inline const AudioConfiguration& GetAudio() const{ return m_audio; }

    /**
     * <p>Encoder settings for audio.</p>
     */
    inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }

    /**
     * <p>Encoder settings for audio.</p>
     */
    inline void SetAudio(const AudioConfiguration& value) { m_audioHasBeenSet = true; m_audio = value; }

    /**
     * <p>Encoder settings for audio.</p>
     */
    inline void SetAudio(AudioConfiguration&& value) { m_audioHasBeenSet = true; m_audio = std::move(value); }

    /**
     * <p>Encoder settings for audio.</p>
     */
    inline IngestConfiguration& WithAudio(const AudioConfiguration& value) { SetAudio(value); return *this;}

    /**
     * <p>Encoder settings for audio.</p>
     */
    inline IngestConfiguration& WithAudio(AudioConfiguration&& value) { SetAudio(std::move(value)); return *this;}


    /**
     * <p>Encoder settings for video.</p>
     */
    inline const VideoConfiguration& GetVideo() const{ return m_video; }

    /**
     * <p>Encoder settings for video.</p>
     */
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }

    /**
     * <p>Encoder settings for video.</p>
     */
    inline void SetVideo(const VideoConfiguration& value) { m_videoHasBeenSet = true; m_video = value; }

    /**
     * <p>Encoder settings for video.</p>
     */
    inline void SetVideo(VideoConfiguration&& value) { m_videoHasBeenSet = true; m_video = std::move(value); }

    /**
     * <p>Encoder settings for video.</p>
     */
    inline IngestConfiguration& WithVideo(const VideoConfiguration& value) { SetVideo(value); return *this;}

    /**
     * <p>Encoder settings for video.</p>
     */
    inline IngestConfiguration& WithVideo(VideoConfiguration&& value) { SetVideo(std::move(value)); return *this;}

  private:

    AudioConfiguration m_audio;
    bool m_audioHasBeenSet = false;

    VideoConfiguration m_video;
    bool m_videoHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
