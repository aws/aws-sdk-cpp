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
    AWS_CHIMESDKMEDIAPIPELINES_API MediaPipeline() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API MediaPipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaPipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A pipeline that enables users to capture audio and video.</p>
     */
    inline const MediaCapturePipeline& GetMediaCapturePipeline() const { return m_mediaCapturePipeline; }
    inline bool MediaCapturePipelineHasBeenSet() const { return m_mediaCapturePipelineHasBeenSet; }
    template<typename MediaCapturePipelineT = MediaCapturePipeline>
    void SetMediaCapturePipeline(MediaCapturePipelineT&& value) { m_mediaCapturePipelineHasBeenSet = true; m_mediaCapturePipeline = std::forward<MediaCapturePipelineT>(value); }
    template<typename MediaCapturePipelineT = MediaCapturePipeline>
    MediaPipeline& WithMediaCapturePipeline(MediaCapturePipelineT&& value) { SetMediaCapturePipeline(std::forward<MediaCapturePipelineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector pipeline of the media pipeline.</p>
     */
    inline const MediaLiveConnectorPipeline& GetMediaLiveConnectorPipeline() const { return m_mediaLiveConnectorPipeline; }
    inline bool MediaLiveConnectorPipelineHasBeenSet() const { return m_mediaLiveConnectorPipelineHasBeenSet; }
    template<typename MediaLiveConnectorPipelineT = MediaLiveConnectorPipeline>
    void SetMediaLiveConnectorPipeline(MediaLiveConnectorPipelineT&& value) { m_mediaLiveConnectorPipelineHasBeenSet = true; m_mediaLiveConnectorPipeline = std::forward<MediaLiveConnectorPipelineT>(value); }
    template<typename MediaLiveConnectorPipelineT = MediaLiveConnectorPipeline>
    MediaPipeline& WithMediaLiveConnectorPipeline(MediaLiveConnectorPipelineT&& value) { SetMediaLiveConnectorPipeline(std::forward<MediaLiveConnectorPipelineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media concatenation pipeline in a media pipeline.</p>
     */
    inline const MediaConcatenationPipeline& GetMediaConcatenationPipeline() const { return m_mediaConcatenationPipeline; }
    inline bool MediaConcatenationPipelineHasBeenSet() const { return m_mediaConcatenationPipelineHasBeenSet; }
    template<typename MediaConcatenationPipelineT = MediaConcatenationPipeline>
    void SetMediaConcatenationPipeline(MediaConcatenationPipelineT&& value) { m_mediaConcatenationPipelineHasBeenSet = true; m_mediaConcatenationPipeline = std::forward<MediaConcatenationPipelineT>(value); }
    template<typename MediaConcatenationPipelineT = MediaConcatenationPipeline>
    MediaPipeline& WithMediaConcatenationPipeline(MediaConcatenationPipelineT&& value) { SetMediaConcatenationPipeline(std::forward<MediaConcatenationPipelineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media insights pipeline of a media pipeline.</p>
     */
    inline const MediaInsightsPipeline& GetMediaInsightsPipeline() const { return m_mediaInsightsPipeline; }
    inline bool MediaInsightsPipelineHasBeenSet() const { return m_mediaInsightsPipelineHasBeenSet; }
    template<typename MediaInsightsPipelineT = MediaInsightsPipeline>
    void SetMediaInsightsPipeline(MediaInsightsPipelineT&& value) { m_mediaInsightsPipelineHasBeenSet = true; m_mediaInsightsPipeline = std::forward<MediaInsightsPipelineT>(value); }
    template<typename MediaInsightsPipelineT = MediaInsightsPipeline>
    MediaPipeline& WithMediaInsightsPipeline(MediaInsightsPipelineT&& value) { SetMediaInsightsPipeline(std::forward<MediaInsightsPipelineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Designates a media pipeline as a media stream pipeline.</p>
     */
    inline const MediaStreamPipeline& GetMediaStreamPipeline() const { return m_mediaStreamPipeline; }
    inline bool MediaStreamPipelineHasBeenSet() const { return m_mediaStreamPipelineHasBeenSet; }
    template<typename MediaStreamPipelineT = MediaStreamPipeline>
    void SetMediaStreamPipeline(MediaStreamPipelineT&& value) { m_mediaStreamPipelineHasBeenSet = true; m_mediaStreamPipeline = std::forward<MediaStreamPipelineT>(value); }
    template<typename MediaStreamPipelineT = MediaStreamPipeline>
    MediaPipeline& WithMediaStreamPipeline(MediaStreamPipelineT&& value) { SetMediaStreamPipeline(std::forward<MediaStreamPipelineT>(value)); return *this;}
    ///@}
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
