/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaCapturePipeline.h>
#include <aws/chime-sdk-media-pipelines/model/MediaLiveConnectorPipeline.h>
#include <aws/chime-sdk-media-pipelines/model/MediaConcatenationPipeline.h>
#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipeline.h>
#include <aws/chime-sdk-media-pipelines/model/MediaStreamPipeline.h>
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
   * <p>A pipeline consisting of a media capture, media concatenation, or
   * live-streaming pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/MediaPipeline">AWS
   * API Reference</a></p>
   */
  class MediaPipeline
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API MediaPipeline();
    AWS_CHIMESDKMEDIAPIPELINES_API MediaPipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaPipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A pipeline that enables users to capture audio and video.</p>
     */
    inline const MediaCapturePipeline& GetMediaCapturePipeline() const{ return m_mediaCapturePipeline; }

    /**
     * <p>A pipeline that enables users to capture audio and video.</p>
     */
    inline bool MediaCapturePipelineHasBeenSet() const { return m_mediaCapturePipelineHasBeenSet; }

    /**
     * <p>A pipeline that enables users to capture audio and video.</p>
     */
    inline void SetMediaCapturePipeline(const MediaCapturePipeline& value) { m_mediaCapturePipelineHasBeenSet = true; m_mediaCapturePipeline = value; }

    /**
     * <p>A pipeline that enables users to capture audio and video.</p>
     */
    inline void SetMediaCapturePipeline(MediaCapturePipeline&& value) { m_mediaCapturePipelineHasBeenSet = true; m_mediaCapturePipeline = std::move(value); }

    /**
     * <p>A pipeline that enables users to capture audio and video.</p>
     */
    inline MediaPipeline& WithMediaCapturePipeline(const MediaCapturePipeline& value) { SetMediaCapturePipeline(value); return *this;}

    /**
     * <p>A pipeline that enables users to capture audio and video.</p>
     */
    inline MediaPipeline& WithMediaCapturePipeline(MediaCapturePipeline&& value) { SetMediaCapturePipeline(std::move(value)); return *this;}


    /**
     * <p>The connector pipeline of the media pipeline.</p>
     */
    inline const MediaLiveConnectorPipeline& GetMediaLiveConnectorPipeline() const{ return m_mediaLiveConnectorPipeline; }

    /**
     * <p>The connector pipeline of the media pipeline.</p>
     */
    inline bool MediaLiveConnectorPipelineHasBeenSet() const { return m_mediaLiveConnectorPipelineHasBeenSet; }

    /**
     * <p>The connector pipeline of the media pipeline.</p>
     */
    inline void SetMediaLiveConnectorPipeline(const MediaLiveConnectorPipeline& value) { m_mediaLiveConnectorPipelineHasBeenSet = true; m_mediaLiveConnectorPipeline = value; }

    /**
     * <p>The connector pipeline of the media pipeline.</p>
     */
    inline void SetMediaLiveConnectorPipeline(MediaLiveConnectorPipeline&& value) { m_mediaLiveConnectorPipelineHasBeenSet = true; m_mediaLiveConnectorPipeline = std::move(value); }

    /**
     * <p>The connector pipeline of the media pipeline.</p>
     */
    inline MediaPipeline& WithMediaLiveConnectorPipeline(const MediaLiveConnectorPipeline& value) { SetMediaLiveConnectorPipeline(value); return *this;}

    /**
     * <p>The connector pipeline of the media pipeline.</p>
     */
    inline MediaPipeline& WithMediaLiveConnectorPipeline(MediaLiveConnectorPipeline&& value) { SetMediaLiveConnectorPipeline(std::move(value)); return *this;}


    /**
     * <p>The media concatenation pipeline in a media pipeline.</p>
     */
    inline const MediaConcatenationPipeline& GetMediaConcatenationPipeline() const{ return m_mediaConcatenationPipeline; }

    /**
     * <p>The media concatenation pipeline in a media pipeline.</p>
     */
    inline bool MediaConcatenationPipelineHasBeenSet() const { return m_mediaConcatenationPipelineHasBeenSet; }

    /**
     * <p>The media concatenation pipeline in a media pipeline.</p>
     */
    inline void SetMediaConcatenationPipeline(const MediaConcatenationPipeline& value) { m_mediaConcatenationPipelineHasBeenSet = true; m_mediaConcatenationPipeline = value; }

    /**
     * <p>The media concatenation pipeline in a media pipeline.</p>
     */
    inline void SetMediaConcatenationPipeline(MediaConcatenationPipeline&& value) { m_mediaConcatenationPipelineHasBeenSet = true; m_mediaConcatenationPipeline = std::move(value); }

    /**
     * <p>The media concatenation pipeline in a media pipeline.</p>
     */
    inline MediaPipeline& WithMediaConcatenationPipeline(const MediaConcatenationPipeline& value) { SetMediaConcatenationPipeline(value); return *this;}

    /**
     * <p>The media concatenation pipeline in a media pipeline.</p>
     */
    inline MediaPipeline& WithMediaConcatenationPipeline(MediaConcatenationPipeline&& value) { SetMediaConcatenationPipeline(std::move(value)); return *this;}


    /**
     * <p>The media insights pipeline of a media pipeline.</p>
     */
    inline const MediaInsightsPipeline& GetMediaInsightsPipeline() const{ return m_mediaInsightsPipeline; }

    /**
     * <p>The media insights pipeline of a media pipeline.</p>
     */
    inline bool MediaInsightsPipelineHasBeenSet() const { return m_mediaInsightsPipelineHasBeenSet; }

    /**
     * <p>The media insights pipeline of a media pipeline.</p>
     */
    inline void SetMediaInsightsPipeline(const MediaInsightsPipeline& value) { m_mediaInsightsPipelineHasBeenSet = true; m_mediaInsightsPipeline = value; }

    /**
     * <p>The media insights pipeline of a media pipeline.</p>
     */
    inline void SetMediaInsightsPipeline(MediaInsightsPipeline&& value) { m_mediaInsightsPipelineHasBeenSet = true; m_mediaInsightsPipeline = std::move(value); }

    /**
     * <p>The media insights pipeline of a media pipeline.</p>
     */
    inline MediaPipeline& WithMediaInsightsPipeline(const MediaInsightsPipeline& value) { SetMediaInsightsPipeline(value); return *this;}

    /**
     * <p>The media insights pipeline of a media pipeline.</p>
     */
    inline MediaPipeline& WithMediaInsightsPipeline(MediaInsightsPipeline&& value) { SetMediaInsightsPipeline(std::move(value)); return *this;}


    /**
     * <p>Designates a media pipeline as a media stream pipeline.</p>
     */
    inline const MediaStreamPipeline& GetMediaStreamPipeline() const{ return m_mediaStreamPipeline; }

    /**
     * <p>Designates a media pipeline as a media stream pipeline.</p>
     */
    inline bool MediaStreamPipelineHasBeenSet() const { return m_mediaStreamPipelineHasBeenSet; }

    /**
     * <p>Designates a media pipeline as a media stream pipeline.</p>
     */
    inline void SetMediaStreamPipeline(const MediaStreamPipeline& value) { m_mediaStreamPipelineHasBeenSet = true; m_mediaStreamPipeline = value; }

    /**
     * <p>Designates a media pipeline as a media stream pipeline.</p>
     */
    inline void SetMediaStreamPipeline(MediaStreamPipeline&& value) { m_mediaStreamPipelineHasBeenSet = true; m_mediaStreamPipeline = std::move(value); }

    /**
     * <p>Designates a media pipeline as a media stream pipeline.</p>
     */
    inline MediaPipeline& WithMediaStreamPipeline(const MediaStreamPipeline& value) { SetMediaStreamPipeline(value); return *this;}

    /**
     * <p>Designates a media pipeline as a media stream pipeline.</p>
     */
    inline MediaPipeline& WithMediaStreamPipeline(MediaStreamPipeline&& value) { SetMediaStreamPipeline(std::move(value)); return *this;}

  private:

    MediaCapturePipeline m_mediaCapturePipeline;
    bool m_mediaCapturePipelineHasBeenSet = false;

    MediaLiveConnectorPipeline m_mediaLiveConnectorPipeline;
    bool m_mediaLiveConnectorPipelineHasBeenSet = false;

    MediaConcatenationPipeline m_mediaConcatenationPipeline;
    bool m_mediaConcatenationPipelineHasBeenSet = false;

    MediaInsightsPipeline m_mediaInsightsPipeline;
    bool m_mediaInsightsPipelineHasBeenSet = false;

    MediaStreamPipeline m_mediaStreamPipeline;
    bool m_mediaStreamPipelineHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
