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
    AWS_CHIMESDKMEDIAPIPELINES_API MediaCapturePipeline() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API MediaCapturePipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaCapturePipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a media pipeline.</p>
     */
    inline const Aws::String& GetMediaPipelineId() const { return m_mediaPipelineId; }
    inline bool MediaPipelineIdHasBeenSet() const { return m_mediaPipelineIdHasBeenSet; }
    template<typename MediaPipelineIdT = Aws::String>
    void SetMediaPipelineId(MediaPipelineIdT&& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = std::forward<MediaPipelineIdT>(value); }
    template<typename MediaPipelineIdT = Aws::String>
    MediaCapturePipeline& WithMediaPipelineId(MediaPipelineIdT&& value) { SetMediaPipelineId(std::forward<MediaPipelineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the media capture pipeline</p>
     */
    inline const Aws::String& GetMediaPipelineArn() const { return m_mediaPipelineArn; }
    inline bool MediaPipelineArnHasBeenSet() const { return m_mediaPipelineArnHasBeenSet; }
    template<typename MediaPipelineArnT = Aws::String>
    void SetMediaPipelineArn(MediaPipelineArnT&& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = std::forward<MediaPipelineArnT>(value); }
    template<typename MediaPipelineArnT = Aws::String>
    MediaCapturePipeline& WithMediaPipelineArn(MediaPipelineArnT&& value) { SetMediaPipelineArn(std::forward<MediaPipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source type from which media artifacts are saved. You must use
     * <code>ChimeMeeting</code>.</p>
     */
    inline MediaPipelineSourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(MediaPipelineSourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline MediaCapturePipeline& WithSourceType(MediaPipelineSourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the source from which the media artifacts are saved.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    MediaCapturePipeline& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the media pipeline.</p>
     */
    inline MediaPipelineStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MediaPipelineStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline MediaCapturePipeline& WithStatus(MediaPipelineStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Destination type to which the media artifacts are saved. You must use an S3
     * Bucket.</p>
     */
    inline MediaPipelineSinkType GetSinkType() const { return m_sinkType; }
    inline bool SinkTypeHasBeenSet() const { return m_sinkTypeHasBeenSet; }
    inline void SetSinkType(MediaPipelineSinkType value) { m_sinkTypeHasBeenSet = true; m_sinkType = value; }
    inline MediaCapturePipeline& WithSinkType(MediaPipelineSinkType value) { SetSinkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the destination to which the media artifacts are saved.</p>
     */
    inline const Aws::String& GetSinkArn() const { return m_sinkArn; }
    inline bool SinkArnHasBeenSet() const { return m_sinkArnHasBeenSet; }
    template<typename SinkArnT = Aws::String>
    void SetSinkArn(SinkArnT&& value) { m_sinkArnHasBeenSet = true; m_sinkArn = std::forward<SinkArnT>(value); }
    template<typename SinkArnT = Aws::String>
    MediaCapturePipeline& WithSinkArn(SinkArnT&& value) { SetSinkArn(std::forward<SinkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the pipeline was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    MediaCapturePipeline& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the pipeline was updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    MediaCapturePipeline& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a specified media pipeline. <code>SourceType</code>
     * must be <code>ChimeSdkMeeting</code>.</p>
     */
    inline const ChimeSdkMeetingConfiguration& GetChimeSdkMeetingConfiguration() const { return m_chimeSdkMeetingConfiguration; }
    inline bool ChimeSdkMeetingConfigurationHasBeenSet() const { return m_chimeSdkMeetingConfigurationHasBeenSet; }
    template<typename ChimeSdkMeetingConfigurationT = ChimeSdkMeetingConfiguration>
    void SetChimeSdkMeetingConfiguration(ChimeSdkMeetingConfigurationT&& value) { m_chimeSdkMeetingConfigurationHasBeenSet = true; m_chimeSdkMeetingConfiguration = std::forward<ChimeSdkMeetingConfigurationT>(value); }
    template<typename ChimeSdkMeetingConfigurationT = ChimeSdkMeetingConfiguration>
    MediaCapturePipeline& WithChimeSdkMeetingConfiguration(ChimeSdkMeetingConfigurationT&& value) { SetChimeSdkMeetingConfiguration(std::forward<ChimeSdkMeetingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains server side encryption parameters to be used by media
     * capture pipeline. The parameters can also be used by media concatenation
     * pipeline taking media capture pipeline as a media source.</p>
     */
    inline const SseAwsKeyManagementParams& GetSseAwsKeyManagementParams() const { return m_sseAwsKeyManagementParams; }
    inline bool SseAwsKeyManagementParamsHasBeenSet() const { return m_sseAwsKeyManagementParamsHasBeenSet; }
    template<typename SseAwsKeyManagementParamsT = SseAwsKeyManagementParams>
    void SetSseAwsKeyManagementParams(SseAwsKeyManagementParamsT&& value) { m_sseAwsKeyManagementParamsHasBeenSet = true; m_sseAwsKeyManagementParams = std::forward<SseAwsKeyManagementParamsT>(value); }
    template<typename SseAwsKeyManagementParamsT = SseAwsKeyManagementParams>
    MediaCapturePipeline& WithSseAwsKeyManagementParams(SseAwsKeyManagementParamsT&& value) { SetSseAwsKeyManagementParams(std::forward<SseAwsKeyManagementParamsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the sink role to be used with
     * <code>AwsKmsKeyId</code> in <code>SseAwsKeyManagementParams</code>.</p>
     */
    inline const Aws::String& GetSinkIamRoleArn() const { return m_sinkIamRoleArn; }
    inline bool SinkIamRoleArnHasBeenSet() const { return m_sinkIamRoleArnHasBeenSet; }
    template<typename SinkIamRoleArnT = Aws::String>
    void SetSinkIamRoleArn(SinkIamRoleArnT&& value) { m_sinkIamRoleArnHasBeenSet = true; m_sinkIamRoleArn = std::forward<SinkIamRoleArnT>(value); }
    template<typename SinkIamRoleArnT = Aws::String>
    MediaCapturePipeline& WithSinkIamRoleArn(SinkIamRoleArnT&& value) { SetSinkIamRoleArn(std::forward<SinkIamRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mediaPipelineId;
    bool m_mediaPipelineIdHasBeenSet = false;

    Aws::String m_mediaPipelineArn;
    bool m_mediaPipelineArnHasBeenSet = false;

    MediaPipelineSourceType m_sourceType{MediaPipelineSourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    MediaPipelineStatus m_status{MediaPipelineStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    MediaPipelineSinkType m_sinkType{MediaPipelineSinkType::NOT_SET};
    bool m_sinkTypeHasBeenSet = false;

    Aws::String m_sinkArn;
    bool m_sinkArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
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
