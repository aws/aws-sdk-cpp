/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/MediaPipelineSourceType.h>
#include <aws/chime/model/MediaPipelineStatus.h>
#include <aws/chime/model/MediaPipelineSinkType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime/model/ChimeSdkMeetingConfiguration.h>
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
   * <p>A media capture pipeline object consisting of an ID, source type, source ARN,
   * a sink type, a sink ARN, and a configuration object.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/MediaCapturePipeline">AWS
   * API Reference</a></p>
   */
  class MediaCapturePipeline
  {
  public:
    AWS_CHIME_API MediaCapturePipeline();
    AWS_CHIME_API MediaCapturePipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API MediaCapturePipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a media capture pipeline.</p>
     */
    inline const Aws::String& GetMediaPipelineId() const{ return m_mediaPipelineId; }

    /**
     * <p>The ID of a media capture pipeline.</p>
     */
    inline bool MediaPipelineIdHasBeenSet() const { return m_mediaPipelineIdHasBeenSet; }

    /**
     * <p>The ID of a media capture pipeline.</p>
     */
    inline void SetMediaPipelineId(const Aws::String& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = value; }

    /**
     * <p>The ID of a media capture pipeline.</p>
     */
    inline void SetMediaPipelineId(Aws::String&& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = std::move(value); }

    /**
     * <p>The ID of a media capture pipeline.</p>
     */
    inline void SetMediaPipelineId(const char* value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId.assign(value); }

    /**
     * <p>The ID of a media capture pipeline.</p>
     */
    inline MediaCapturePipeline& WithMediaPipelineId(const Aws::String& value) { SetMediaPipelineId(value); return *this;}

    /**
     * <p>The ID of a media capture pipeline.</p>
     */
    inline MediaCapturePipeline& WithMediaPipelineId(Aws::String&& value) { SetMediaPipelineId(std::move(value)); return *this;}

    /**
     * <p>The ID of a media capture pipeline.</p>
     */
    inline MediaCapturePipeline& WithMediaPipelineId(const char* value) { SetMediaPipelineId(value); return *this;}


    /**
     * <p>Source type from which media artifacts are saved. You must use
     * <code>ChimeMeeting</code>.</p>
     */
    inline const MediaPipelineSourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>Source type from which media artifacts are saved. You must use
     * <code>ChimeMeeting</code>.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>Source type from which media artifacts are saved. You must use
     * <code>ChimeMeeting</code>.</p>
     */
    inline void SetSourceType(const MediaPipelineSourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>Source type from which media artifacts are saved. You must use
     * <code>ChimeMeeting</code>.</p>
     */
    inline void SetSourceType(MediaPipelineSourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>Source type from which media artifacts are saved. You must use
     * <code>ChimeMeeting</code>.</p>
     */
    inline MediaCapturePipeline& WithSourceType(const MediaPipelineSourceType& value) { SetSourceType(value); return *this;}

    /**
     * <p>Source type from which media artifacts are saved. You must use
     * <code>ChimeMeeting</code>.</p>
     */
    inline MediaCapturePipeline& WithSourceType(MediaPipelineSourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * <p>ARN of the source from which the media artifacts will be saved.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>ARN of the source from which the media artifacts will be saved.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>ARN of the source from which the media artifacts will be saved.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>ARN of the source from which the media artifacts will be saved.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>ARN of the source from which the media artifacts will be saved.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>ARN of the source from which the media artifacts will be saved.</p>
     */
    inline MediaCapturePipeline& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>ARN of the source from which the media artifacts will be saved.</p>
     */
    inline MediaCapturePipeline& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the source from which the media artifacts will be saved.</p>
     */
    inline MediaCapturePipeline& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The status of the media capture pipeline.</p>
     */
    inline const MediaPipelineStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the media capture pipeline.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the media capture pipeline.</p>
     */
    inline void SetStatus(const MediaPipelineStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the media capture pipeline.</p>
     */
    inline void SetStatus(MediaPipelineStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the media capture pipeline.</p>
     */
    inline MediaCapturePipeline& WithStatus(const MediaPipelineStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the media capture pipeline.</p>
     */
    inline MediaCapturePipeline& WithStatus(MediaPipelineStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Destination type to which the media artifacts are saved. You must use an S3
     * Bucket.</p>
     */
    inline const MediaPipelineSinkType& GetSinkType() const{ return m_sinkType; }

    /**
     * <p>Destination type to which the media artifacts are saved. You must use an S3
     * Bucket.</p>
     */
    inline bool SinkTypeHasBeenSet() const { return m_sinkTypeHasBeenSet; }

    /**
     * <p>Destination type to which the media artifacts are saved. You must use an S3
     * Bucket.</p>
     */
    inline void SetSinkType(const MediaPipelineSinkType& value) { m_sinkTypeHasBeenSet = true; m_sinkType = value; }

    /**
     * <p>Destination type to which the media artifacts are saved. You must use an S3
     * Bucket.</p>
     */
    inline void SetSinkType(MediaPipelineSinkType&& value) { m_sinkTypeHasBeenSet = true; m_sinkType = std::move(value); }

    /**
     * <p>Destination type to which the media artifacts are saved. You must use an S3
     * Bucket.</p>
     */
    inline MediaCapturePipeline& WithSinkType(const MediaPipelineSinkType& value) { SetSinkType(value); return *this;}

    /**
     * <p>Destination type to which the media artifacts are saved. You must use an S3
     * Bucket.</p>
     */
    inline MediaCapturePipeline& WithSinkType(MediaPipelineSinkType&& value) { SetSinkType(std::move(value)); return *this;}


    /**
     * <p>ARN of the destination to which the media artifacts are saved.</p>
     */
    inline const Aws::String& GetSinkArn() const{ return m_sinkArn; }

    /**
     * <p>ARN of the destination to which the media artifacts are saved.</p>
     */
    inline bool SinkArnHasBeenSet() const { return m_sinkArnHasBeenSet; }

    /**
     * <p>ARN of the destination to which the media artifacts are saved.</p>
     */
    inline void SetSinkArn(const Aws::String& value) { m_sinkArnHasBeenSet = true; m_sinkArn = value; }

    /**
     * <p>ARN of the destination to which the media artifacts are saved.</p>
     */
    inline void SetSinkArn(Aws::String&& value) { m_sinkArnHasBeenSet = true; m_sinkArn = std::move(value); }

    /**
     * <p>ARN of the destination to which the media artifacts are saved.</p>
     */
    inline void SetSinkArn(const char* value) { m_sinkArnHasBeenSet = true; m_sinkArn.assign(value); }

    /**
     * <p>ARN of the destination to which the media artifacts are saved.</p>
     */
    inline MediaCapturePipeline& WithSinkArn(const Aws::String& value) { SetSinkArn(value); return *this;}

    /**
     * <p>ARN of the destination to which the media artifacts are saved.</p>
     */
    inline MediaCapturePipeline& WithSinkArn(Aws::String&& value) { SetSinkArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the destination to which the media artifacts are saved.</p>
     */
    inline MediaCapturePipeline& WithSinkArn(const char* value) { SetSinkArn(value); return *this;}


    /**
     * <p>The time at which the capture pipeline was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time at which the capture pipeline was created, in ISO 8601 format.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time at which the capture pipeline was created, in ISO 8601 format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time at which the capture pipeline was created, in ISO 8601 format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time at which the capture pipeline was created, in ISO 8601 format.</p>
     */
    inline MediaCapturePipeline& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the capture pipeline was created, in ISO 8601 format.</p>
     */
    inline MediaCapturePipeline& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which the capture pipeline was updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The time at which the capture pipeline was updated, in ISO 8601 format.</p>
     */
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    /**
     * <p>The time at which the capture pipeline was updated, in ISO 8601 format.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    /**
     * <p>The time at which the capture pipeline was updated, in ISO 8601 format.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    /**
     * <p>The time at which the capture pipeline was updated, in ISO 8601 format.</p>
     */
    inline MediaCapturePipeline& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the capture pipeline was updated, in ISO 8601 format.</p>
     */
    inline MediaCapturePipeline& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The configuration for a specified media capture pipeline.
     * <code>SourceType</code> must be <code>ChimeSdkMeeting</code>.</p>
     */
    inline const ChimeSdkMeetingConfiguration& GetChimeSdkMeetingConfiguration() const{ return m_chimeSdkMeetingConfiguration; }

    /**
     * <p>The configuration for a specified media capture pipeline.
     * <code>SourceType</code> must be <code>ChimeSdkMeeting</code>.</p>
     */
    inline bool ChimeSdkMeetingConfigurationHasBeenSet() const { return m_chimeSdkMeetingConfigurationHasBeenSet; }

    /**
     * <p>The configuration for a specified media capture pipeline.
     * <code>SourceType</code> must be <code>ChimeSdkMeeting</code>.</p>
     */
    inline void SetChimeSdkMeetingConfiguration(const ChimeSdkMeetingConfiguration& value) { m_chimeSdkMeetingConfigurationHasBeenSet = true; m_chimeSdkMeetingConfiguration = value; }

    /**
     * <p>The configuration for a specified media capture pipeline.
     * <code>SourceType</code> must be <code>ChimeSdkMeeting</code>.</p>
     */
    inline void SetChimeSdkMeetingConfiguration(ChimeSdkMeetingConfiguration&& value) { m_chimeSdkMeetingConfigurationHasBeenSet = true; m_chimeSdkMeetingConfiguration = std::move(value); }

    /**
     * <p>The configuration for a specified media capture pipeline.
     * <code>SourceType</code> must be <code>ChimeSdkMeeting</code>.</p>
     */
    inline MediaCapturePipeline& WithChimeSdkMeetingConfiguration(const ChimeSdkMeetingConfiguration& value) { SetChimeSdkMeetingConfiguration(value); return *this;}

    /**
     * <p>The configuration for a specified media capture pipeline.
     * <code>SourceType</code> must be <code>ChimeSdkMeeting</code>.</p>
     */
    inline MediaCapturePipeline& WithChimeSdkMeetingConfiguration(ChimeSdkMeetingConfiguration&& value) { SetChimeSdkMeetingConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_mediaPipelineId;
    bool m_mediaPipelineIdHasBeenSet = false;

    MediaPipelineSourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    MediaPipelineStatus m_status;
    bool m_statusHasBeenSet = false;

    MediaPipelineSinkType m_sinkType;
    bool m_sinkTypeHasBeenSet = false;

    Aws::String m_sinkArn;
    bool m_sinkArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;

    ChimeSdkMeetingConfiguration m_chimeSdkMeetingConfiguration;
    bool m_chimeSdkMeetingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
