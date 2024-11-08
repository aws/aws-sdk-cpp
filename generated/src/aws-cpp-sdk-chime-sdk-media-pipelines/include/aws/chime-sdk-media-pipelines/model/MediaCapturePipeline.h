/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/MediaPipelineSourceType.h>
#include <aws/chime-sdk-media-pipelines/model/MediaPipelineStatus.h>
#include <aws/chime-sdk-media-pipelines/model/MediaPipelineSinkType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime-sdk-media-pipelines/model/ChimeSdkMeetingConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/SseAwsKeyManagementParams.h>
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
   * <p>A media pipeline object consisting of an ID, source type, source ARN, a sink
   * type, a sink ARN, and a configuration object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/MediaCapturePipeline">AWS
   * API Reference</a></p>
   */
  class MediaCapturePipeline
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API MediaCapturePipeline();
    AWS_CHIMESDKMEDIAPIPELINES_API MediaCapturePipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaCapturePipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a media pipeline.</p>
     */
    inline const Aws::String& GetMediaPipelineId() const{ return m_mediaPipelineId; }
    inline bool MediaPipelineIdHasBeenSet() const { return m_mediaPipelineIdHasBeenSet; }
    inline void SetMediaPipelineId(const Aws::String& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = value; }
    inline void SetMediaPipelineId(Aws::String&& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = std::move(value); }
    inline void SetMediaPipelineId(const char* value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId.assign(value); }
    inline MediaCapturePipeline& WithMediaPipelineId(const Aws::String& value) { SetMediaPipelineId(value); return *this;}
    inline MediaCapturePipeline& WithMediaPipelineId(Aws::String&& value) { SetMediaPipelineId(std::move(value)); return *this;}
    inline MediaCapturePipeline& WithMediaPipelineId(const char* value) { SetMediaPipelineId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the media capture pipeline</p>
     */
    inline const Aws::String& GetMediaPipelineArn() const{ return m_mediaPipelineArn; }
    inline bool MediaPipelineArnHasBeenSet() const { return m_mediaPipelineArnHasBeenSet; }
    inline void SetMediaPipelineArn(const Aws::String& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = value; }
    inline void SetMediaPipelineArn(Aws::String&& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = std::move(value); }
    inline void SetMediaPipelineArn(const char* value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn.assign(value); }
    inline MediaCapturePipeline& WithMediaPipelineArn(const Aws::String& value) { SetMediaPipelineArn(value); return *this;}
    inline MediaCapturePipeline& WithMediaPipelineArn(Aws::String&& value) { SetMediaPipelineArn(std::move(value)); return *this;}
    inline MediaCapturePipeline& WithMediaPipelineArn(const char* value) { SetMediaPipelineArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source type from which media artifacts are saved. You must use
     * <code>ChimeMeeting</code>.</p>
     */
    inline const MediaPipelineSourceType& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const MediaPipelineSourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(MediaPipelineSourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline MediaCapturePipeline& WithSourceType(const MediaPipelineSourceType& value) { SetSourceType(value); return *this;}
    inline MediaCapturePipeline& WithSourceType(MediaPipelineSourceType&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the source from which the media artifacts are saved.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }
    inline MediaCapturePipeline& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline MediaCapturePipeline& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline MediaCapturePipeline& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the media pipeline.</p>
     */
    inline const MediaPipelineStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const MediaPipelineStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(MediaPipelineStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline MediaCapturePipeline& WithStatus(const MediaPipelineStatus& value) { SetStatus(value); return *this;}
    inline MediaCapturePipeline& WithStatus(MediaPipelineStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Destination type to which the media artifacts are saved. You must use an S3
     * Bucket.</p>
     */
    inline const MediaPipelineSinkType& GetSinkType() const{ return m_sinkType; }
    inline bool SinkTypeHasBeenSet() const { return m_sinkTypeHasBeenSet; }
    inline void SetSinkType(const MediaPipelineSinkType& value) { m_sinkTypeHasBeenSet = true; m_sinkType = value; }
    inline void SetSinkType(MediaPipelineSinkType&& value) { m_sinkTypeHasBeenSet = true; m_sinkType = std::move(value); }
    inline MediaCapturePipeline& WithSinkType(const MediaPipelineSinkType& value) { SetSinkType(value); return *this;}
    inline MediaCapturePipeline& WithSinkType(MediaPipelineSinkType&& value) { SetSinkType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the destination to which the media artifacts are saved.</p>
     */
    inline const Aws::String& GetSinkArn() const{ return m_sinkArn; }
    inline bool SinkArnHasBeenSet() const { return m_sinkArnHasBeenSet; }
    inline void SetSinkArn(const Aws::String& value) { m_sinkArnHasBeenSet = true; m_sinkArn = value; }
    inline void SetSinkArn(Aws::String&& value) { m_sinkArnHasBeenSet = true; m_sinkArn = std::move(value); }
    inline void SetSinkArn(const char* value) { m_sinkArnHasBeenSet = true; m_sinkArn.assign(value); }
    inline MediaCapturePipeline& WithSinkArn(const Aws::String& value) { SetSinkArn(value); return *this;}
    inline MediaCapturePipeline& WithSinkArn(Aws::String&& value) { SetSinkArn(std::move(value)); return *this;}
    inline MediaCapturePipeline& WithSinkArn(const char* value) { SetSinkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the pipeline was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline MediaCapturePipeline& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline MediaCapturePipeline& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the pipeline was updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }
    inline MediaCapturePipeline& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}
    inline MediaCapturePipeline& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a specified media pipeline. <code>SourceType</code>
     * must be <code>ChimeSdkMeeting</code>.</p>
     */
    inline const ChimeSdkMeetingConfiguration& GetChimeSdkMeetingConfiguration() const{ return m_chimeSdkMeetingConfiguration; }
    inline bool ChimeSdkMeetingConfigurationHasBeenSet() const { return m_chimeSdkMeetingConfigurationHasBeenSet; }
    inline void SetChimeSdkMeetingConfiguration(const ChimeSdkMeetingConfiguration& value) { m_chimeSdkMeetingConfigurationHasBeenSet = true; m_chimeSdkMeetingConfiguration = value; }
    inline void SetChimeSdkMeetingConfiguration(ChimeSdkMeetingConfiguration&& value) { m_chimeSdkMeetingConfigurationHasBeenSet = true; m_chimeSdkMeetingConfiguration = std::move(value); }
    inline MediaCapturePipeline& WithChimeSdkMeetingConfiguration(const ChimeSdkMeetingConfiguration& value) { SetChimeSdkMeetingConfiguration(value); return *this;}
    inline MediaCapturePipeline& WithChimeSdkMeetingConfiguration(ChimeSdkMeetingConfiguration&& value) { SetChimeSdkMeetingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains server side encryption parameters to be used by media
     * capture pipeline. The parameters can also be used by media concatenation
     * pipeline taking media capture pipeline as a media source.</p>
     */
    inline const SseAwsKeyManagementParams& GetSseAwsKeyManagementParams() const{ return m_sseAwsKeyManagementParams; }
    inline bool SseAwsKeyManagementParamsHasBeenSet() const { return m_sseAwsKeyManagementParamsHasBeenSet; }
    inline void SetSseAwsKeyManagementParams(const SseAwsKeyManagementParams& value) { m_sseAwsKeyManagementParamsHasBeenSet = true; m_sseAwsKeyManagementParams = value; }
    inline void SetSseAwsKeyManagementParams(SseAwsKeyManagementParams&& value) { m_sseAwsKeyManagementParamsHasBeenSet = true; m_sseAwsKeyManagementParams = std::move(value); }
    inline MediaCapturePipeline& WithSseAwsKeyManagementParams(const SseAwsKeyManagementParams& value) { SetSseAwsKeyManagementParams(value); return *this;}
    inline MediaCapturePipeline& WithSseAwsKeyManagementParams(SseAwsKeyManagementParams&& value) { SetSseAwsKeyManagementParams(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the sink role to be used with
     * <code>AwsKmsKeyId</code> in <code>SseAwsKeyManagementParams</code>.</p>
     */
    inline const Aws::String& GetSinkIamRoleArn() const{ return m_sinkIamRoleArn; }
    inline bool SinkIamRoleArnHasBeenSet() const { return m_sinkIamRoleArnHasBeenSet; }
    inline void SetSinkIamRoleArn(const Aws::String& value) { m_sinkIamRoleArnHasBeenSet = true; m_sinkIamRoleArn = value; }
    inline void SetSinkIamRoleArn(Aws::String&& value) { m_sinkIamRoleArnHasBeenSet = true; m_sinkIamRoleArn = std::move(value); }
    inline void SetSinkIamRoleArn(const char* value) { m_sinkIamRoleArnHasBeenSet = true; m_sinkIamRoleArn.assign(value); }
    inline MediaCapturePipeline& WithSinkIamRoleArn(const Aws::String& value) { SetSinkIamRoleArn(value); return *this;}
    inline MediaCapturePipeline& WithSinkIamRoleArn(Aws::String&& value) { SetSinkIamRoleArn(std::move(value)); return *this;}
    inline MediaCapturePipeline& WithSinkIamRoleArn(const char* value) { SetSinkIamRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_mediaPipelineId;
    bool m_mediaPipelineIdHasBeenSet = false;

    Aws::String m_mediaPipelineArn;
    bool m_mediaPipelineArnHasBeenSet = false;

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

    SseAwsKeyManagementParams m_sseAwsKeyManagementParams;
    bool m_sseAwsKeyManagementParamsHasBeenSet = false;

    Aws::String m_sinkIamRoleArn;
    bool m_sinkIamRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
