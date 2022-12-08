/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/MediaPipelineStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime-sdk-media-pipelines/model/LiveConnectorSourceConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/LiveConnectorSinkConfiguration.h>
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
   * <p>The connector pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/MediaLiveConnectorPipeline">AWS
   * API Reference</a></p>
   */
  class MediaLiveConnectorPipeline
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API MediaLiveConnectorPipeline();
    AWS_CHIMESDKMEDIAPIPELINES_API MediaLiveConnectorPipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaLiveConnectorPipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The connector pipeline's data sources.</p>
     */
    inline const Aws::Vector<LiveConnectorSourceConfiguration>& GetSources() const{ return m_sources; }

    /**
     * <p>The connector pipeline's data sources.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The connector pipeline's data sources.</p>
     */
    inline void SetSources(const Aws::Vector<LiveConnectorSourceConfiguration>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The connector pipeline's data sources.</p>
     */
    inline void SetSources(Aws::Vector<LiveConnectorSourceConfiguration>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The connector pipeline's data sources.</p>
     */
    inline MediaLiveConnectorPipeline& WithSources(const Aws::Vector<LiveConnectorSourceConfiguration>& value) { SetSources(value); return *this;}

    /**
     * <p>The connector pipeline's data sources.</p>
     */
    inline MediaLiveConnectorPipeline& WithSources(Aws::Vector<LiveConnectorSourceConfiguration>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The connector pipeline's data sources.</p>
     */
    inline MediaLiveConnectorPipeline& AddSources(const LiveConnectorSourceConfiguration& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The connector pipeline's data sources.</p>
     */
    inline MediaLiveConnectorPipeline& AddSources(LiveConnectorSourceConfiguration&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }


    /**
     * <p>The connector pipeline's data sinks.</p>
     */
    inline const Aws::Vector<LiveConnectorSinkConfiguration>& GetSinks() const{ return m_sinks; }

    /**
     * <p>The connector pipeline's data sinks.</p>
     */
    inline bool SinksHasBeenSet() const { return m_sinksHasBeenSet; }

    /**
     * <p>The connector pipeline's data sinks.</p>
     */
    inline void SetSinks(const Aws::Vector<LiveConnectorSinkConfiguration>& value) { m_sinksHasBeenSet = true; m_sinks = value; }

    /**
     * <p>The connector pipeline's data sinks.</p>
     */
    inline void SetSinks(Aws::Vector<LiveConnectorSinkConfiguration>&& value) { m_sinksHasBeenSet = true; m_sinks = std::move(value); }

    /**
     * <p>The connector pipeline's data sinks.</p>
     */
    inline MediaLiveConnectorPipeline& WithSinks(const Aws::Vector<LiveConnectorSinkConfiguration>& value) { SetSinks(value); return *this;}

    /**
     * <p>The connector pipeline's data sinks.</p>
     */
    inline MediaLiveConnectorPipeline& WithSinks(Aws::Vector<LiveConnectorSinkConfiguration>&& value) { SetSinks(std::move(value)); return *this;}

    /**
     * <p>The connector pipeline's data sinks.</p>
     */
    inline MediaLiveConnectorPipeline& AddSinks(const LiveConnectorSinkConfiguration& value) { m_sinksHasBeenSet = true; m_sinks.push_back(value); return *this; }

    /**
     * <p>The connector pipeline's data sinks.</p>
     */
    inline MediaLiveConnectorPipeline& AddSinks(LiveConnectorSinkConfiguration&& value) { m_sinksHasBeenSet = true; m_sinks.push_back(std::move(value)); return *this; }


    /**
     * <p>The connector pipeline's ID.</p>
     */
    inline const Aws::String& GetMediaPipelineId() const{ return m_mediaPipelineId; }

    /**
     * <p>The connector pipeline's ID.</p>
     */
    inline bool MediaPipelineIdHasBeenSet() const { return m_mediaPipelineIdHasBeenSet; }

    /**
     * <p>The connector pipeline's ID.</p>
     */
    inline void SetMediaPipelineId(const Aws::String& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = value; }

    /**
     * <p>The connector pipeline's ID.</p>
     */
    inline void SetMediaPipelineId(Aws::String&& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = std::move(value); }

    /**
     * <p>The connector pipeline's ID.</p>
     */
    inline void SetMediaPipelineId(const char* value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId.assign(value); }

    /**
     * <p>The connector pipeline's ID.</p>
     */
    inline MediaLiveConnectorPipeline& WithMediaPipelineId(const Aws::String& value) { SetMediaPipelineId(value); return *this;}

    /**
     * <p>The connector pipeline's ID.</p>
     */
    inline MediaLiveConnectorPipeline& WithMediaPipelineId(Aws::String&& value) { SetMediaPipelineId(std::move(value)); return *this;}

    /**
     * <p>The connector pipeline's ID.</p>
     */
    inline MediaLiveConnectorPipeline& WithMediaPipelineId(const char* value) { SetMediaPipelineId(value); return *this;}


    /**
     * <p>The connector pipeline's ARN.</p>
     */
    inline const Aws::String& GetMediaPipelineArn() const{ return m_mediaPipelineArn; }

    /**
     * <p>The connector pipeline's ARN.</p>
     */
    inline bool MediaPipelineArnHasBeenSet() const { return m_mediaPipelineArnHasBeenSet; }

    /**
     * <p>The connector pipeline's ARN.</p>
     */
    inline void SetMediaPipelineArn(const Aws::String& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = value; }

    /**
     * <p>The connector pipeline's ARN.</p>
     */
    inline void SetMediaPipelineArn(Aws::String&& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = std::move(value); }

    /**
     * <p>The connector pipeline's ARN.</p>
     */
    inline void SetMediaPipelineArn(const char* value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn.assign(value); }

    /**
     * <p>The connector pipeline's ARN.</p>
     */
    inline MediaLiveConnectorPipeline& WithMediaPipelineArn(const Aws::String& value) { SetMediaPipelineArn(value); return *this;}

    /**
     * <p>The connector pipeline's ARN.</p>
     */
    inline MediaLiveConnectorPipeline& WithMediaPipelineArn(Aws::String&& value) { SetMediaPipelineArn(std::move(value)); return *this;}

    /**
     * <p>The connector pipeline's ARN.</p>
     */
    inline MediaLiveConnectorPipeline& WithMediaPipelineArn(const char* value) { SetMediaPipelineArn(value); return *this;}


    /**
     * <p>The connector pipeline's status.</p>
     */
    inline const MediaPipelineStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The connector pipeline's status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The connector pipeline's status.</p>
     */
    inline void SetStatus(const MediaPipelineStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The connector pipeline's status.</p>
     */
    inline void SetStatus(MediaPipelineStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The connector pipeline's status.</p>
     */
    inline MediaLiveConnectorPipeline& WithStatus(const MediaPipelineStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The connector pipeline's status.</p>
     */
    inline MediaLiveConnectorPipeline& WithStatus(MediaPipelineStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Thetime at which the connector pipeline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>Thetime at which the connector pipeline was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>Thetime at which the connector pipeline was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>Thetime at which the connector pipeline was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>Thetime at which the connector pipeline was created.</p>
     */
    inline MediaLiveConnectorPipeline& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>Thetime at which the connector pipeline was created.</p>
     */
    inline MediaLiveConnectorPipeline& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which the connector pipeline was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The time at which the connector pipeline was last updated.</p>
     */
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    /**
     * <p>The time at which the connector pipeline was last updated.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    /**
     * <p>The time at which the connector pipeline was last updated.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    /**
     * <p>The time at which the connector pipeline was last updated.</p>
     */
    inline MediaLiveConnectorPipeline& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the connector pipeline was last updated.</p>
     */
    inline MediaLiveConnectorPipeline& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::Vector<LiveConnectorSourceConfiguration> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::Vector<LiveConnectorSinkConfiguration> m_sinks;
    bool m_sinksHasBeenSet = false;

    Aws::String m_mediaPipelineId;
    bool m_mediaPipelineIdHasBeenSet = false;

    Aws::String m_mediaPipelineArn;
    bool m_mediaPipelineArnHasBeenSet = false;

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
