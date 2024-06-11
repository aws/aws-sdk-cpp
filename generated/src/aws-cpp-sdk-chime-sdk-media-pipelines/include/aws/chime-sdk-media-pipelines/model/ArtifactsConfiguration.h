﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/AudioArtifactsConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/VideoArtifactsConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/ContentArtifactsConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/CompositedVideoArtifactsConfiguration.h>
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
   * <p>The configuration for the artifacts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ArtifactsConfiguration">AWS
   * API Reference</a></p>
   */
  class ArtifactsConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ArtifactsConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API ArtifactsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API ArtifactsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for the audio artifacts.</p>
     */
    inline const AudioArtifactsConfiguration& GetAudio() const{ return m_audio; }
    inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }
    inline void SetAudio(const AudioArtifactsConfiguration& value) { m_audioHasBeenSet = true; m_audio = value; }
    inline void SetAudio(AudioArtifactsConfiguration&& value) { m_audioHasBeenSet = true; m_audio = std::move(value); }
    inline ArtifactsConfiguration& WithAudio(const AudioArtifactsConfiguration& value) { SetAudio(value); return *this;}
    inline ArtifactsConfiguration& WithAudio(AudioArtifactsConfiguration&& value) { SetAudio(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the video artifacts.</p>
     */
    inline const VideoArtifactsConfiguration& GetVideo() const{ return m_video; }
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
    inline void SetVideo(const VideoArtifactsConfiguration& value) { m_videoHasBeenSet = true; m_video = value; }
    inline void SetVideo(VideoArtifactsConfiguration&& value) { m_videoHasBeenSet = true; m_video = std::move(value); }
    inline ArtifactsConfiguration& WithVideo(const VideoArtifactsConfiguration& value) { SetVideo(value); return *this;}
    inline ArtifactsConfiguration& WithVideo(VideoArtifactsConfiguration&& value) { SetVideo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the content artifacts.</p>
     */
    inline const ContentArtifactsConfiguration& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const ContentArtifactsConfiguration& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(ContentArtifactsConfiguration&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline ArtifactsConfiguration& WithContent(const ContentArtifactsConfiguration& value) { SetContent(value); return *this;}
    inline ArtifactsConfiguration& WithContent(ContentArtifactsConfiguration&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables video compositing.</p>
     */
    inline const CompositedVideoArtifactsConfiguration& GetCompositedVideo() const{ return m_compositedVideo; }
    inline bool CompositedVideoHasBeenSet() const { return m_compositedVideoHasBeenSet; }
    inline void SetCompositedVideo(const CompositedVideoArtifactsConfiguration& value) { m_compositedVideoHasBeenSet = true; m_compositedVideo = value; }
    inline void SetCompositedVideo(CompositedVideoArtifactsConfiguration&& value) { m_compositedVideoHasBeenSet = true; m_compositedVideo = std::move(value); }
    inline ArtifactsConfiguration& WithCompositedVideo(const CompositedVideoArtifactsConfiguration& value) { SetCompositedVideo(value); return *this;}
    inline ArtifactsConfiguration& WithCompositedVideo(CompositedVideoArtifactsConfiguration&& value) { SetCompositedVideo(std::move(value)); return *this;}
    ///@}
  private:

    AudioArtifactsConfiguration m_audio;
    bool m_audioHasBeenSet = false;

    VideoArtifactsConfiguration m_video;
    bool m_videoHasBeenSet = false;

    ContentArtifactsConfiguration m_content;
    bool m_contentHasBeenSet = false;

    CompositedVideoArtifactsConfiguration m_compositedVideo;
    bool m_compositedVideoHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
