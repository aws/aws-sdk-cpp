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
    AWS_CHIMESDKMEDIAPIPELINES_API MediaConcatenationPipeline();
    AWS_CHIMESDKMEDIAPIPELINES_API MediaConcatenationPipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaConcatenationPipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the media pipeline being concatenated.</p>
     */
    inline const Aws::String& GetMediaPipelineId() const{ return m_mediaPipelineId; }

    /**
     * <p>The ID of the media pipeline being concatenated.</p>
     */
    inline bool MediaPipelineIdHasBeenSet() const { return m_mediaPipelineIdHasBeenSet; }

    /**
     * <p>The ID of the media pipeline being concatenated.</p>
     */
    inline void SetMediaPipelineId(const Aws::String& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = value; }

    /**
     * <p>The ID of the media pipeline being concatenated.</p>
     */
    inline void SetMediaPipelineId(Aws::String&& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = std::move(value); }

    /**
     * <p>The ID of the media pipeline being concatenated.</p>
     */
    inline void SetMediaPipelineId(const char* value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId.assign(value); }

    /**
     * <p>The ID of the media pipeline being concatenated.</p>
     */
    inline MediaConcatenationPipeline& WithMediaPipelineId(const Aws::String& value) { SetMediaPipelineId(value); return *this;}

    /**
     * <p>The ID of the media pipeline being concatenated.</p>
     */
    inline MediaConcatenationPipeline& WithMediaPipelineId(Aws::String&& value) { SetMediaPipelineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the media pipeline being concatenated.</p>
     */
    inline MediaConcatenationPipeline& WithMediaPipelineId(const char* value) { SetMediaPipelineId(value); return *this;}


    /**
     * <p>The ARN of the media pipeline that you specify in the
     * <code>SourceConfiguration</code> object.</p>
     */
    inline const Aws::String& GetMediaPipelineArn() const{ return m_mediaPipelineArn; }

    /**
     * <p>The ARN of the media pipeline that you specify in the
     * <code>SourceConfiguration</code> object.</p>
     */
    inline bool MediaPipelineArnHasBeenSet() const { return m_mediaPipelineArnHasBeenSet; }

    /**
     * <p>The ARN of the media pipeline that you specify in the
     * <code>SourceConfiguration</code> object.</p>
     */
    inline void SetMediaPipelineArn(const Aws::String& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = value; }

    /**
     * <p>The ARN of the media pipeline that you specify in the
     * <code>SourceConfiguration</code> object.</p>
     */
    inline void SetMediaPipelineArn(Aws::String&& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = std::move(value); }

    /**
     * <p>The ARN of the media pipeline that you specify in the
     * <code>SourceConfiguration</code> object.</p>
     */
    inline void SetMediaPipelineArn(const char* value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn.assign(value); }

    /**
     * <p>The ARN of the media pipeline that you specify in the
     * <code>SourceConfiguration</code> object.</p>
     */
    inline MediaConcatenationPipeline& WithMediaPipelineArn(const Aws::String& value) { SetMediaPipelineArn(value); return *this;}

    /**
     * <p>The ARN of the media pipeline that you specify in the
     * <code>SourceConfiguration</code> object.</p>
     */
    inline MediaConcatenationPipeline& WithMediaPipelineArn(Aws::String&& value) { SetMediaPipelineArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the media pipeline that you specify in the
     * <code>SourceConfiguration</code> object.</p>
     */
    inline MediaConcatenationPipeline& WithMediaPipelineArn(const char* value) { SetMediaPipelineArn(value); return *this;}


    /**
     * <p>The data sources being concatnated.</p>
     */
    inline const Aws::Vector<ConcatenationSource>& GetSources() const{ return m_sources; }

    /**
     * <p>The data sources being concatnated.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The data sources being concatnated.</p>
     */
    inline void SetSources(const Aws::Vector<ConcatenationSource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The data sources being concatnated.</p>
     */
    inline void SetSources(Aws::Vector<ConcatenationSource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The data sources being concatnated.</p>
     */
    inline MediaConcatenationPipeline& WithSources(const Aws::Vector<ConcatenationSource>& value) { SetSources(value); return *this;}

    /**
     * <p>The data sources being concatnated.</p>
     */
    inline MediaConcatenationPipeline& WithSources(Aws::Vector<ConcatenationSource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The data sources being concatnated.</p>
     */
    inline MediaConcatenationPipeline& AddSources(const ConcatenationSource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The data sources being concatnated.</p>
     */
    inline MediaConcatenationPipeline& AddSources(ConcatenationSource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }


    /**
     * <p>The data sinks of the concatenation pipeline.</p>
     */
    inline const Aws::Vector<ConcatenationSink>& GetSinks() const{ return m_sinks; }

    /**
     * <p>The data sinks of the concatenation pipeline.</p>
     */
    inline bool SinksHasBeenSet() const { return m_sinksHasBeenSet; }

    /**
     * <p>The data sinks of the concatenation pipeline.</p>
     */
    inline void SetSinks(const Aws::Vector<ConcatenationSink>& value) { m_sinksHasBeenSet = true; m_sinks = value; }

    /**
     * <p>The data sinks of the concatenation pipeline.</p>
     */
    inline void SetSinks(Aws::Vector<ConcatenationSink>&& value) { m_sinksHasBeenSet = true; m_sinks = std::move(value); }

    /**
     * <p>The data sinks of the concatenation pipeline.</p>
     */
    inline MediaConcatenationPipeline& WithSinks(const Aws::Vector<ConcatenationSink>& value) { SetSinks(value); return *this;}

    /**
     * <p>The data sinks of the concatenation pipeline.</p>
     */
    inline MediaConcatenationPipeline& WithSinks(Aws::Vector<ConcatenationSink>&& value) { SetSinks(std::move(value)); return *this;}

    /**
     * <p>The data sinks of the concatenation pipeline.</p>
     */
    inline MediaConcatenationPipeline& AddSinks(const ConcatenationSink& value) { m_sinksHasBeenSet = true; m_sinks.push_back(value); return *this; }

    /**
     * <p>The data sinks of the concatenation pipeline.</p>
     */
    inline MediaConcatenationPipeline& AddSinks(ConcatenationSink&& value) { m_sinksHasBeenSet = true; m_sinks.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the concatenation pipeline.</p>
     */
    inline const MediaPipelineStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the concatenation pipeline.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the concatenation pipeline.</p>
     */
    inline void SetStatus(const MediaPipelineStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the concatenation pipeline.</p>
     */
    inline void SetStatus(MediaPipelineStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the concatenation pipeline.</p>
     */
    inline MediaConcatenationPipeline& WithStatus(const MediaPipelineStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the concatenation pipeline.</p>
     */
    inline MediaConcatenationPipeline& WithStatus(MediaPipelineStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the concatenation pipeline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time at which the concatenation pipeline was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time at which the concatenation pipeline was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time at which the concatenation pipeline was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time at which the concatenation pipeline was created.</p>
     */
    inline MediaConcatenationPipeline& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the concatenation pipeline was created.</p>
     */
    inline MediaConcatenationPipeline& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which the concatenation pipeline was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The time at which the concatenation pipeline was last updated.</p>
     */
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    /**
     * <p>The time at which the concatenation pipeline was last updated.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    /**
     * <p>The time at which the concatenation pipeline was last updated.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    /**
     * <p>The time at which the concatenation pipeline was last updated.</p>
     */
    inline MediaConcatenationPipeline& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the concatenation pipeline was last updated.</p>
     */
    inline MediaConcatenationPipeline& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_mediaPipelineId;
    bool m_mediaPipelineIdHasBeenSet = false;

    Aws::String m_mediaPipelineArn;
    bool m_mediaPipelineArnHasBeenSet = false;

    Aws::Vector<ConcatenationSource> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::Vector<ConcatenationSink> m_sinks;
    bool m_sinksHasBeenSet = false;

    MediaPipelineStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
