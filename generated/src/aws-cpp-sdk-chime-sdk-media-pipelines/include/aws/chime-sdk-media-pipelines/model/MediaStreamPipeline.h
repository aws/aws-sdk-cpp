/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime-sdk-media-pipelines/model/MediaPipelineStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-media-pipelines/model/MediaStreamSource.h>
#include <aws/chime-sdk-media-pipelines/model/MediaStreamSink.h>
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
   * <p>Structure that contains the settings for a media stream
   * pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/MediaStreamPipeline">AWS
   * API Reference</a></p>
   */
  class MediaStreamPipeline
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API MediaStreamPipeline();
    AWS_CHIMESDKMEDIAPIPELINES_API MediaStreamPipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaStreamPipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the media stream pipeline</p>
     */
    inline const Aws::String& GetMediaPipelineId() const{ return m_mediaPipelineId; }
    inline bool MediaPipelineIdHasBeenSet() const { return m_mediaPipelineIdHasBeenSet; }
    inline void SetMediaPipelineId(const Aws::String& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = value; }
    inline void SetMediaPipelineId(Aws::String&& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = std::move(value); }
    inline void SetMediaPipelineId(const char* value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId.assign(value); }
    inline MediaStreamPipeline& WithMediaPipelineId(const Aws::String& value) { SetMediaPipelineId(value); return *this;}
    inline MediaStreamPipeline& WithMediaPipelineId(Aws::String&& value) { SetMediaPipelineId(std::move(value)); return *this;}
    inline MediaStreamPipeline& WithMediaPipelineId(const char* value) { SetMediaPipelineId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the media stream pipeline.</p>
     */
    inline const Aws::String& GetMediaPipelineArn() const{ return m_mediaPipelineArn; }
    inline bool MediaPipelineArnHasBeenSet() const { return m_mediaPipelineArnHasBeenSet; }
    inline void SetMediaPipelineArn(const Aws::String& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = value; }
    inline void SetMediaPipelineArn(Aws::String&& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = std::move(value); }
    inline void SetMediaPipelineArn(const char* value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn.assign(value); }
    inline MediaStreamPipeline& WithMediaPipelineArn(const Aws::String& value) { SetMediaPipelineArn(value); return *this;}
    inline MediaStreamPipeline& WithMediaPipelineArn(Aws::String&& value) { SetMediaPipelineArn(std::move(value)); return *this;}
    inline MediaStreamPipeline& WithMediaPipelineArn(const char* value) { SetMediaPipelineArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the media stream pipeline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline MediaStreamPipeline& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline MediaStreamPipeline& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the media stream pipeline was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }
    inline MediaStreamPipeline& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}
    inline MediaStreamPipeline& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the media stream pipeline.</p>
     */
    inline const MediaPipelineStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const MediaPipelineStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(MediaPipelineStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline MediaStreamPipeline& WithStatus(const MediaPipelineStatus& value) { SetStatus(value); return *this;}
    inline MediaStreamPipeline& WithStatus(MediaPipelineStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media stream pipeline's data sources.</p>
     */
    inline const Aws::Vector<MediaStreamSource>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<MediaStreamSource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<MediaStreamSource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline MediaStreamPipeline& WithSources(const Aws::Vector<MediaStreamSource>& value) { SetSources(value); return *this;}
    inline MediaStreamPipeline& WithSources(Aws::Vector<MediaStreamSource>&& value) { SetSources(std::move(value)); return *this;}
    inline MediaStreamPipeline& AddSources(const MediaStreamSource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline MediaStreamPipeline& AddSources(MediaStreamSource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The media stream pipeline's data sinks.</p>
     */
    inline const Aws::Vector<MediaStreamSink>& GetSinks() const{ return m_sinks; }
    inline bool SinksHasBeenSet() const { return m_sinksHasBeenSet; }
    inline void SetSinks(const Aws::Vector<MediaStreamSink>& value) { m_sinksHasBeenSet = true; m_sinks = value; }
    inline void SetSinks(Aws::Vector<MediaStreamSink>&& value) { m_sinksHasBeenSet = true; m_sinks = std::move(value); }
    inline MediaStreamPipeline& WithSinks(const Aws::Vector<MediaStreamSink>& value) { SetSinks(value); return *this;}
    inline MediaStreamPipeline& WithSinks(Aws::Vector<MediaStreamSink>&& value) { SetSinks(std::move(value)); return *this;}
    inline MediaStreamPipeline& AddSinks(const MediaStreamSink& value) { m_sinksHasBeenSet = true; m_sinks.push_back(value); return *this; }
    inline MediaStreamPipeline& AddSinks(MediaStreamSink&& value) { m_sinksHasBeenSet = true; m_sinks.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_mediaPipelineId;
    bool m_mediaPipelineIdHasBeenSet = false;

    Aws::String m_mediaPipelineArn;
    bool m_mediaPipelineArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;

    MediaPipelineStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<MediaStreamSource> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::Vector<MediaStreamSink> m_sinks;
    bool m_sinksHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
