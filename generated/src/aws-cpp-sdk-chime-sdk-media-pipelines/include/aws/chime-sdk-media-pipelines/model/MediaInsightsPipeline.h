/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/MediaPipelineStatus.h>
#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamSourceRuntimeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamRecordingSourceRuntimeConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/S3RecordingSinkRuntimeConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipelineElementStatus.h>
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
   * <p>A media pipeline that streams call analytics data.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/MediaInsightsPipeline">AWS
   * API Reference</a></p>
   */
  class MediaInsightsPipeline
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipeline() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a media insights pipeline.</p>
     */
    inline const Aws::String& GetMediaPipelineId() const { return m_mediaPipelineId; }
    inline bool MediaPipelineIdHasBeenSet() const { return m_mediaPipelineIdHasBeenSet; }
    template<typename MediaPipelineIdT = Aws::String>
    void SetMediaPipelineId(MediaPipelineIdT&& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = std::forward<MediaPipelineIdT>(value); }
    template<typename MediaPipelineIdT = Aws::String>
    MediaInsightsPipeline& WithMediaPipelineId(MediaPipelineIdT&& value) { SetMediaPipelineId(std::forward<MediaPipelineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a media insights pipeline.</p>
     */
    inline const Aws::String& GetMediaPipelineArn() const { return m_mediaPipelineArn; }
    inline bool MediaPipelineArnHasBeenSet() const { return m_mediaPipelineArnHasBeenSet; }
    template<typename MediaPipelineArnT = Aws::String>
    void SetMediaPipelineArn(MediaPipelineArnT&& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = std::forward<MediaPipelineArnT>(value); }
    template<typename MediaPipelineArnT = Aws::String>
    MediaInsightsPipeline& WithMediaPipelineArn(MediaPipelineArnT&& value) { SetMediaPipelineArn(std::forward<MediaPipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a media insight pipeline's configuration settings.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationArn() const { return m_mediaInsightsPipelineConfigurationArn; }
    inline bool MediaInsightsPipelineConfigurationArnHasBeenSet() const { return m_mediaInsightsPipelineConfigurationArnHasBeenSet; }
    template<typename MediaInsightsPipelineConfigurationArnT = Aws::String>
    void SetMediaInsightsPipelineConfigurationArn(MediaInsightsPipelineConfigurationArnT&& value) { m_mediaInsightsPipelineConfigurationArnHasBeenSet = true; m_mediaInsightsPipelineConfigurationArn = std::forward<MediaInsightsPipelineConfigurationArnT>(value); }
    template<typename MediaInsightsPipelineConfigurationArnT = Aws::String>
    MediaInsightsPipeline& WithMediaInsightsPipelineConfigurationArn(MediaInsightsPipelineConfigurationArnT&& value) { SetMediaInsightsPipelineConfigurationArn(std::forward<MediaInsightsPipelineConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a media insights pipeline.</p>
     */
    inline MediaPipelineStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MediaPipelineStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline MediaInsightsPipeline& WithStatus(MediaPipelineStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for a Kinesis runtime video stream in a media
     * insights pipeline.</p>
     */
    inline const KinesisVideoStreamSourceRuntimeConfiguration& GetKinesisVideoStreamSourceRuntimeConfiguration() const { return m_kinesisVideoStreamSourceRuntimeConfiguration; }
    inline bool KinesisVideoStreamSourceRuntimeConfigurationHasBeenSet() const { return m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet; }
    template<typename KinesisVideoStreamSourceRuntimeConfigurationT = KinesisVideoStreamSourceRuntimeConfiguration>
    void SetKinesisVideoStreamSourceRuntimeConfiguration(KinesisVideoStreamSourceRuntimeConfigurationT&& value) { m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet = true; m_kinesisVideoStreamSourceRuntimeConfiguration = std::forward<KinesisVideoStreamSourceRuntimeConfigurationT>(value); }
    template<typename KinesisVideoStreamSourceRuntimeConfigurationT = KinesisVideoStreamSourceRuntimeConfiguration>
    MediaInsightsPipeline& WithKinesisVideoStreamSourceRuntimeConfiguration(KinesisVideoStreamSourceRuntimeConfigurationT&& value) { SetKinesisVideoStreamSourceRuntimeConfiguration(std::forward<KinesisVideoStreamSourceRuntimeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime metadata of a media insights pipeline.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMediaInsightsRuntimeMetadata() const { return m_mediaInsightsRuntimeMetadata; }
    inline bool MediaInsightsRuntimeMetadataHasBeenSet() const { return m_mediaInsightsRuntimeMetadataHasBeenSet; }
    template<typename MediaInsightsRuntimeMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetMediaInsightsRuntimeMetadata(MediaInsightsRuntimeMetadataT&& value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata = std::forward<MediaInsightsRuntimeMetadataT>(value); }
    template<typename MediaInsightsRuntimeMetadataT = Aws::Map<Aws::String, Aws::String>>
    MediaInsightsPipeline& WithMediaInsightsRuntimeMetadata(MediaInsightsRuntimeMetadataT&& value) { SetMediaInsightsRuntimeMetadata(std::forward<MediaInsightsRuntimeMetadataT>(value)); return *this;}
    template<typename MediaInsightsRuntimeMetadataKeyT = Aws::String, typename MediaInsightsRuntimeMetadataValueT = Aws::String>
    MediaInsightsPipeline& AddMediaInsightsRuntimeMetadata(MediaInsightsRuntimeMetadataKeyT&& key, MediaInsightsRuntimeMetadataValueT&& value) {
      m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata.emplace(std::forward<MediaInsightsRuntimeMetadataKeyT>(key), std::forward<MediaInsightsRuntimeMetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The runtime configuration settings for a Kinesis recording video stream in a
     * media insights pipeline.</p>
     */
    inline const KinesisVideoStreamRecordingSourceRuntimeConfiguration& GetKinesisVideoStreamRecordingSourceRuntimeConfiguration() const { return m_kinesisVideoStreamRecordingSourceRuntimeConfiguration; }
    inline bool KinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet() const { return m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet; }
    template<typename KinesisVideoStreamRecordingSourceRuntimeConfigurationT = KinesisVideoStreamRecordingSourceRuntimeConfiguration>
    void SetKinesisVideoStreamRecordingSourceRuntimeConfiguration(KinesisVideoStreamRecordingSourceRuntimeConfigurationT&& value) { m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet = true; m_kinesisVideoStreamRecordingSourceRuntimeConfiguration = std::forward<KinesisVideoStreamRecordingSourceRuntimeConfigurationT>(value); }
    template<typename KinesisVideoStreamRecordingSourceRuntimeConfigurationT = KinesisVideoStreamRecordingSourceRuntimeConfiguration>
    MediaInsightsPipeline& WithKinesisVideoStreamRecordingSourceRuntimeConfiguration(KinesisVideoStreamRecordingSourceRuntimeConfigurationT&& value) { SetKinesisVideoStreamRecordingSourceRuntimeConfiguration(std::forward<KinesisVideoStreamRecordingSourceRuntimeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime configuration of the Amazon S3 bucket that stores recordings in a
     * media insights pipeline.</p>
     */
    inline const S3RecordingSinkRuntimeConfiguration& GetS3RecordingSinkRuntimeConfiguration() const { return m_s3RecordingSinkRuntimeConfiguration; }
    inline bool S3RecordingSinkRuntimeConfigurationHasBeenSet() const { return m_s3RecordingSinkRuntimeConfigurationHasBeenSet; }
    template<typename S3RecordingSinkRuntimeConfigurationT = S3RecordingSinkRuntimeConfiguration>
    void SetS3RecordingSinkRuntimeConfiguration(S3RecordingSinkRuntimeConfigurationT&& value) { m_s3RecordingSinkRuntimeConfigurationHasBeenSet = true; m_s3RecordingSinkRuntimeConfiguration = std::forward<S3RecordingSinkRuntimeConfigurationT>(value); }
    template<typename S3RecordingSinkRuntimeConfigurationT = S3RecordingSinkRuntimeConfiguration>
    MediaInsightsPipeline& WithS3RecordingSinkRuntimeConfiguration(S3RecordingSinkRuntimeConfigurationT&& value) { SetS3RecordingSinkRuntimeConfiguration(std::forward<S3RecordingSinkRuntimeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the media insights pipeline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    MediaInsightsPipeline& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statuses that the elements in a media insights pipeline can have during
     * data processing.</p>
     */
    inline const Aws::Vector<MediaInsightsPipelineElementStatus>& GetElementStatuses() const { return m_elementStatuses; }
    inline bool ElementStatusesHasBeenSet() const { return m_elementStatusesHasBeenSet; }
    template<typename ElementStatusesT = Aws::Vector<MediaInsightsPipelineElementStatus>>
    void SetElementStatuses(ElementStatusesT&& value) { m_elementStatusesHasBeenSet = true; m_elementStatuses = std::forward<ElementStatusesT>(value); }
    template<typename ElementStatusesT = Aws::Vector<MediaInsightsPipelineElementStatus>>
    MediaInsightsPipeline& WithElementStatuses(ElementStatusesT&& value) { SetElementStatuses(std::forward<ElementStatusesT>(value)); return *this;}
    template<typename ElementStatusesT = MediaInsightsPipelineElementStatus>
    MediaInsightsPipeline& AddElementStatuses(ElementStatusesT&& value) { m_elementStatusesHasBeenSet = true; m_elementStatuses.emplace_back(std::forward<ElementStatusesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_mediaPipelineId;
    bool m_mediaPipelineIdHasBeenSet = false;

    Aws::String m_mediaPipelineArn;
    bool m_mediaPipelineArnHasBeenSet = false;

    Aws::String m_mediaInsightsPipelineConfigurationArn;
    bool m_mediaInsightsPipelineConfigurationArnHasBeenSet = false;

    MediaPipelineStatus m_status{MediaPipelineStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    KinesisVideoStreamSourceRuntimeConfiguration m_kinesisVideoStreamSourceRuntimeConfiguration;
    bool m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_mediaInsightsRuntimeMetadata;
    bool m_mediaInsightsRuntimeMetadataHasBeenSet = false;

    KinesisVideoStreamRecordingSourceRuntimeConfiguration m_kinesisVideoStreamRecordingSourceRuntimeConfiguration;
    bool m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet = false;

    S3RecordingSinkRuntimeConfiguration m_s3RecordingSinkRuntimeConfiguration;
    bool m_s3RecordingSinkRuntimeConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Vector<MediaInsightsPipelineElementStatus> m_elementStatuses;
    bool m_elementStatusesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
