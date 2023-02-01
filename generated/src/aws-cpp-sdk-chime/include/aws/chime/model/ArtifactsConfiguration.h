/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/AudioArtifactsConfiguration.h>
#include <aws/chime/model/VideoArtifactsConfiguration.h>
#include <aws/chime/model/ContentArtifactsConfiguration.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The configuration for the artifacts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ArtifactsConfiguration">AWS
   * API Reference</a></p>
   */
  class ArtifactsConfiguration
  {
  public:
    AWS_CHIME_API ArtifactsConfiguration();
    AWS_CHIME_API ArtifactsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API ArtifactsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration for the audio artifacts.</p>
     */
    inline const AudioArtifactsConfiguration& GetAudio() const{ return m_audio; }

    /**
     * <p>The configuration for the audio artifacts.</p>
     */
    inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }

    /**
     * <p>The configuration for the audio artifacts.</p>
     */
    inline void SetAudio(const AudioArtifactsConfiguration& value) { m_audioHasBeenSet = true; m_audio = value; }

    /**
     * <p>The configuration for the audio artifacts.</p>
     */
    inline void SetAudio(AudioArtifactsConfiguration&& value) { m_audioHasBeenSet = true; m_audio = std::move(value); }

    /**
     * <p>The configuration for the audio artifacts.</p>
     */
    inline ArtifactsConfiguration& WithAudio(const AudioArtifactsConfiguration& value) { SetAudio(value); return *this;}

    /**
     * <p>The configuration for the audio artifacts.</p>
     */
    inline ArtifactsConfiguration& WithAudio(AudioArtifactsConfiguration&& value) { SetAudio(std::move(value)); return *this;}


    /**
     * <p>The configuration for the video artifacts.</p>
     */
    inline const VideoArtifactsConfiguration& GetVideo() const{ return m_video; }

    /**
     * <p>The configuration for the video artifacts.</p>
     */
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }

    /**
     * <p>The configuration for the video artifacts.</p>
     */
    inline void SetVideo(const VideoArtifactsConfiguration& value) { m_videoHasBeenSet = true; m_video = value; }

    /**
     * <p>The configuration for the video artifacts.</p>
     */
    inline void SetVideo(VideoArtifactsConfiguration&& value) { m_videoHasBeenSet = true; m_video = std::move(value); }

    /**
     * <p>The configuration for the video artifacts.</p>
     */
    inline ArtifactsConfiguration& WithVideo(const VideoArtifactsConfiguration& value) { SetVideo(value); return *this;}

    /**
     * <p>The configuration for the video artifacts.</p>
     */
    inline ArtifactsConfiguration& WithVideo(VideoArtifactsConfiguration&& value) { SetVideo(std::move(value)); return *this;}


    /**
     * <p>The configuration for the content artifacts.</p>
     */
    inline const ContentArtifactsConfiguration& GetContent() const{ return m_content; }

    /**
     * <p>The configuration for the content artifacts.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The configuration for the content artifacts.</p>
     */
    inline void SetContent(const ContentArtifactsConfiguration& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The configuration for the content artifacts.</p>
     */
    inline void SetContent(ContentArtifactsConfiguration&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The configuration for the content artifacts.</p>
     */
    inline ArtifactsConfiguration& WithContent(const ContentArtifactsConfiguration& value) { SetContent(value); return *this;}

    /**
     * <p>The configuration for the content artifacts.</p>
     */
    inline ArtifactsConfiguration& WithContent(ContentArtifactsConfiguration&& value) { SetContent(std::move(value)); return *this;}

  private:

    AudioArtifactsConfiguration m_audio;
    bool m_audioHasBeenSet = false;

    VideoArtifactsConfiguration m_video;
    bool m_videoHasBeenSet = false;

    ContentArtifactsConfiguration m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
