/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-media-pipelines/model/MediaPipelineStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime-sdk-media-pipelines/model/ConcatenationSource.h>
#include <aws/chime-sdk-media-pipelines/model/ConcatenationSink.h>
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
   * <p>Concatenates audio and video data from one or more data
   * streams.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/MediaConcatenationPipeline">AWS
   * API Reference</a></p>
   */
  class MediaConcatenationPipeline
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API MediaConcatenationPipeline() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API MediaConcatenationPipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaConcatenationPipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the media pipeline being concatenated.</p>
     */
    inline const Aws::String& GetMediaPipelineId() const { return m_mediaPipelineId; }
    inline bool MediaPipelineIdHasBeenSet() const { return m_mediaPipelineIdHasBeenSet; }
    template<typename MediaPipelineIdT = Aws::String>
    void SetMediaPipelineId(MediaPipelineIdT&& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = std::forward<MediaPipelineIdT>(value); }
    template<typename MediaPipelineIdT = Aws::String>
    MediaConcatenationPipeline& WithMediaPipelineId(MediaPipelineIdT&& value) { SetMediaPipelineId(std::forward<MediaPipelineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the media pipeline that you specify in the
     * <code>SourceConfiguration</code> object.</p>
     */
    inline const Aws::String& GetMediaPipelineArn() const { return m_mediaPipelineArn; }
    inline bool MediaPipelineArnHasBeenSet() const { return m_mediaPipelineArnHasBeenSet; }
    template<typename MediaPipelineArnT = Aws::String>
    void SetMediaPipelineArn(MediaPipelineArnT&& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = std::forward<MediaPipelineArnT>(value); }
    template<typename MediaPipelineArnT = Aws::String>
    MediaConcatenationPipeline& WithMediaPipelineArn(MediaPipelineArnT&& value) { SetMediaPipelineArn(std::forward<MediaPipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data sources being concatenated.</p>
     */
    inline const Aws::Vector<ConcatenationSource>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<ConcatenationSource>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<ConcatenationSource>>
    MediaConcatenationPipeline& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = ConcatenationSource>
    MediaConcatenationPipeline& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data sinks of the concatenation pipeline.</p>
     */
    inline const Aws::Vector<ConcatenationSink>& GetSinks() const { return m_sinks; }
    inline bool SinksHasBeenSet() const { return m_sinksHasBeenSet; }
    template<typename SinksT = Aws::Vector<ConcatenationSink>>
    void SetSinks(SinksT&& value) { m_sinksHasBeenSet = true; m_sinks = std::forward<SinksT>(value); }
    template<typename SinksT = Aws::Vector<ConcatenationSink>>
    MediaConcatenationPipeline& WithSinks(SinksT&& value) { SetSinks(std::forward<SinksT>(value)); return *this;}
    template<typename SinksT = ConcatenationSink>
    MediaConcatenationPipeline& AddSinks(SinksT&& value) { m_sinksHasBeenSet = true; m_sinks.emplace_back(std::forward<SinksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the concatenation pipeline.</p>
     */
    inline MediaPipelineStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MediaPipelineStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline MediaConcatenationPipeline& WithStatus(MediaPipelineStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the concatenation pipeline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    MediaConcatenationPipeline& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the concatenation pipeline was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    MediaConcatenationPipeline& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mediaPipelineId;
    bool m_mediaPipelineIdHasBeenSet = false;

    Aws::String m_mediaPipelineArn;
    bool m_mediaPipelineArnHasBeenSet = false;

    Aws::Vector<ConcatenationSource> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::Vector<ConcatenationSink> m_sinks;
    bool m_sinksHasBeenSet = false;

    MediaPipelineStatus m_status{MediaPipelineStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
