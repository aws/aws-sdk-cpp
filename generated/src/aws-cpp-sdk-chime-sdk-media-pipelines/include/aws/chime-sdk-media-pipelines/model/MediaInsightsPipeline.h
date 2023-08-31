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
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipeline();
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a media insights pipeline.</p>
     */
    inline const Aws::String& GetMediaPipelineId() const{ return m_mediaPipelineId; }

    /**
     * <p>The ID of a media insights pipeline.</p>
     */
    inline bool MediaPipelineIdHasBeenSet() const { return m_mediaPipelineIdHasBeenSet; }

    /**
     * <p>The ID of a media insights pipeline.</p>
     */
    inline void SetMediaPipelineId(const Aws::String& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = value; }

    /**
     * <p>The ID of a media insights pipeline.</p>
     */
    inline void SetMediaPipelineId(Aws::String&& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = std::move(value); }

    /**
     * <p>The ID of a media insights pipeline.</p>
     */
    inline void SetMediaPipelineId(const char* value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId.assign(value); }

    /**
     * <p>The ID of a media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& WithMediaPipelineId(const Aws::String& value) { SetMediaPipelineId(value); return *this;}

    /**
     * <p>The ID of a media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& WithMediaPipelineId(Aws::String&& value) { SetMediaPipelineId(std::move(value)); return *this;}

    /**
     * <p>The ID of a media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& WithMediaPipelineId(const char* value) { SetMediaPipelineId(value); return *this;}


    /**
     * <p>The ARN of a media insights pipeline.</p>
     */
    inline const Aws::String& GetMediaPipelineArn() const{ return m_mediaPipelineArn; }

    /**
     * <p>The ARN of a media insights pipeline.</p>
     */
    inline bool MediaPipelineArnHasBeenSet() const { return m_mediaPipelineArnHasBeenSet; }

    /**
     * <p>The ARN of a media insights pipeline.</p>
     */
    inline void SetMediaPipelineArn(const Aws::String& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = value; }

    /**
     * <p>The ARN of a media insights pipeline.</p>
     */
    inline void SetMediaPipelineArn(Aws::String&& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = std::move(value); }

    /**
     * <p>The ARN of a media insights pipeline.</p>
     */
    inline void SetMediaPipelineArn(const char* value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn.assign(value); }

    /**
     * <p>The ARN of a media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& WithMediaPipelineArn(const Aws::String& value) { SetMediaPipelineArn(value); return *this;}

    /**
     * <p>The ARN of a media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& WithMediaPipelineArn(Aws::String&& value) { SetMediaPipelineArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& WithMediaPipelineArn(const char* value) { SetMediaPipelineArn(value); return *this;}


    /**
     * <p>The ARN of a media insight pipeline's configuration settings.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationArn() const{ return m_mediaInsightsPipelineConfigurationArn; }

    /**
     * <p>The ARN of a media insight pipeline's configuration settings.</p>
     */
    inline bool MediaInsightsPipelineConfigurationArnHasBeenSet() const { return m_mediaInsightsPipelineConfigurationArnHasBeenSet; }

    /**
     * <p>The ARN of a media insight pipeline's configuration settings.</p>
     */
    inline void SetMediaInsightsPipelineConfigurationArn(const Aws::String& value) { m_mediaInsightsPipelineConfigurationArnHasBeenSet = true; m_mediaInsightsPipelineConfigurationArn = value; }

    /**
     * <p>The ARN of a media insight pipeline's configuration settings.</p>
     */
    inline void SetMediaInsightsPipelineConfigurationArn(Aws::String&& value) { m_mediaInsightsPipelineConfigurationArnHasBeenSet = true; m_mediaInsightsPipelineConfigurationArn = std::move(value); }

    /**
     * <p>The ARN of a media insight pipeline's configuration settings.</p>
     */
    inline void SetMediaInsightsPipelineConfigurationArn(const char* value) { m_mediaInsightsPipelineConfigurationArnHasBeenSet = true; m_mediaInsightsPipelineConfigurationArn.assign(value); }

    /**
     * <p>The ARN of a media insight pipeline's configuration settings.</p>
     */
    inline MediaInsightsPipeline& WithMediaInsightsPipelineConfigurationArn(const Aws::String& value) { SetMediaInsightsPipelineConfigurationArn(value); return *this;}

    /**
     * <p>The ARN of a media insight pipeline's configuration settings.</p>
     */
    inline MediaInsightsPipeline& WithMediaInsightsPipelineConfigurationArn(Aws::String&& value) { SetMediaInsightsPipelineConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a media insight pipeline's configuration settings.</p>
     */
    inline MediaInsightsPipeline& WithMediaInsightsPipelineConfigurationArn(const char* value) { SetMediaInsightsPipelineConfigurationArn(value); return *this;}


    /**
     * <p>The status of a media insights pipeline.</p>
     */
    inline const MediaPipelineStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a media insights pipeline.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a media insights pipeline.</p>
     */
    inline void SetStatus(const MediaPipelineStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a media insights pipeline.</p>
     */
    inline void SetStatus(MediaPipelineStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& WithStatus(const MediaPipelineStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& WithStatus(MediaPipelineStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The configuration settings for a Kinesis runtime video stream in a media
     * insights pipeline.</p>
     */
    inline const KinesisVideoStreamSourceRuntimeConfiguration& GetKinesisVideoStreamSourceRuntimeConfiguration() const{ return m_kinesisVideoStreamSourceRuntimeConfiguration; }

    /**
     * <p>The configuration settings for a Kinesis runtime video stream in a media
     * insights pipeline.</p>
     */
    inline bool KinesisVideoStreamSourceRuntimeConfigurationHasBeenSet() const { return m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings for a Kinesis runtime video stream in a media
     * insights pipeline.</p>
     */
    inline void SetKinesisVideoStreamSourceRuntimeConfiguration(const KinesisVideoStreamSourceRuntimeConfiguration& value) { m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet = true; m_kinesisVideoStreamSourceRuntimeConfiguration = value; }

    /**
     * <p>The configuration settings for a Kinesis runtime video stream in a media
     * insights pipeline.</p>
     */
    inline void SetKinesisVideoStreamSourceRuntimeConfiguration(KinesisVideoStreamSourceRuntimeConfiguration&& value) { m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet = true; m_kinesisVideoStreamSourceRuntimeConfiguration = std::move(value); }

    /**
     * <p>The configuration settings for a Kinesis runtime video stream in a media
     * insights pipeline.</p>
     */
    inline MediaInsightsPipeline& WithKinesisVideoStreamSourceRuntimeConfiguration(const KinesisVideoStreamSourceRuntimeConfiguration& value) { SetKinesisVideoStreamSourceRuntimeConfiguration(value); return *this;}

    /**
     * <p>The configuration settings for a Kinesis runtime video stream in a media
     * insights pipeline.</p>
     */
    inline MediaInsightsPipeline& WithKinesisVideoStreamSourceRuntimeConfiguration(KinesisVideoStreamSourceRuntimeConfiguration&& value) { SetKinesisVideoStreamSourceRuntimeConfiguration(std::move(value)); return *this;}


    /**
     * <p>The runtime metadata of a media insights pipeline.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMediaInsightsRuntimeMetadata() const{ return m_mediaInsightsRuntimeMetadata; }

    /**
     * <p>The runtime metadata of a media insights pipeline.</p>
     */
    inline bool MediaInsightsRuntimeMetadataHasBeenSet() const { return m_mediaInsightsRuntimeMetadataHasBeenSet; }

    /**
     * <p>The runtime metadata of a media insights pipeline.</p>
     */
    inline void SetMediaInsightsRuntimeMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata = value; }

    /**
     * <p>The runtime metadata of a media insights pipeline.</p>
     */
    inline void SetMediaInsightsRuntimeMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata = std::move(value); }

    /**
     * <p>The runtime metadata of a media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& WithMediaInsightsRuntimeMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMediaInsightsRuntimeMetadata(value); return *this;}

    /**
     * <p>The runtime metadata of a media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& WithMediaInsightsRuntimeMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMediaInsightsRuntimeMetadata(std::move(value)); return *this;}

    /**
     * <p>The runtime metadata of a media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& AddMediaInsightsRuntimeMetadata(const Aws::String& key, const Aws::String& value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata.emplace(key, value); return *this; }

    /**
     * <p>The runtime metadata of a media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& AddMediaInsightsRuntimeMetadata(Aws::String&& key, const Aws::String& value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The runtime metadata of a media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& AddMediaInsightsRuntimeMetadata(const Aws::String& key, Aws::String&& value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The runtime metadata of a media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& AddMediaInsightsRuntimeMetadata(Aws::String&& key, Aws::String&& value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The runtime metadata of a media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& AddMediaInsightsRuntimeMetadata(const char* key, Aws::String&& value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The runtime metadata of a media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& AddMediaInsightsRuntimeMetadata(Aws::String&& key, const char* value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The runtime metadata of a media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& AddMediaInsightsRuntimeMetadata(const char* key, const char* value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata.emplace(key, value); return *this; }


    /**
     * <p>The runtime configuration settings for a Kinesis recording video stream in a
     * media insights pipeline.</p>
     */
    inline const KinesisVideoStreamRecordingSourceRuntimeConfiguration& GetKinesisVideoStreamRecordingSourceRuntimeConfiguration() const{ return m_kinesisVideoStreamRecordingSourceRuntimeConfiguration; }

    /**
     * <p>The runtime configuration settings for a Kinesis recording video stream in a
     * media insights pipeline.</p>
     */
    inline bool KinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet() const { return m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet; }

    /**
     * <p>The runtime configuration settings for a Kinesis recording video stream in a
     * media insights pipeline.</p>
     */
    inline void SetKinesisVideoStreamRecordingSourceRuntimeConfiguration(const KinesisVideoStreamRecordingSourceRuntimeConfiguration& value) { m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet = true; m_kinesisVideoStreamRecordingSourceRuntimeConfiguration = value; }

    /**
     * <p>The runtime configuration settings for a Kinesis recording video stream in a
     * media insights pipeline.</p>
     */
    inline void SetKinesisVideoStreamRecordingSourceRuntimeConfiguration(KinesisVideoStreamRecordingSourceRuntimeConfiguration&& value) { m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet = true; m_kinesisVideoStreamRecordingSourceRuntimeConfiguration = std::move(value); }

    /**
     * <p>The runtime configuration settings for a Kinesis recording video stream in a
     * media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& WithKinesisVideoStreamRecordingSourceRuntimeConfiguration(const KinesisVideoStreamRecordingSourceRuntimeConfiguration& value) { SetKinesisVideoStreamRecordingSourceRuntimeConfiguration(value); return *this;}

    /**
     * <p>The runtime configuration settings for a Kinesis recording video stream in a
     * media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& WithKinesisVideoStreamRecordingSourceRuntimeConfiguration(KinesisVideoStreamRecordingSourceRuntimeConfiguration&& value) { SetKinesisVideoStreamRecordingSourceRuntimeConfiguration(std::move(value)); return *this;}


    /**
     * <p>The runtime configuration of the Amazon S3 bucket that stores recordings in a
     * media insights pipeline.</p>
     */
    inline const S3RecordingSinkRuntimeConfiguration& GetS3RecordingSinkRuntimeConfiguration() const{ return m_s3RecordingSinkRuntimeConfiguration; }

    /**
     * <p>The runtime configuration of the Amazon S3 bucket that stores recordings in a
     * media insights pipeline.</p>
     */
    inline bool S3RecordingSinkRuntimeConfigurationHasBeenSet() const { return m_s3RecordingSinkRuntimeConfigurationHasBeenSet; }

    /**
     * <p>The runtime configuration of the Amazon S3 bucket that stores recordings in a
     * media insights pipeline.</p>
     */
    inline void SetS3RecordingSinkRuntimeConfiguration(const S3RecordingSinkRuntimeConfiguration& value) { m_s3RecordingSinkRuntimeConfigurationHasBeenSet = true; m_s3RecordingSinkRuntimeConfiguration = value; }

    /**
     * <p>The runtime configuration of the Amazon S3 bucket that stores recordings in a
     * media insights pipeline.</p>
     */
    inline void SetS3RecordingSinkRuntimeConfiguration(S3RecordingSinkRuntimeConfiguration&& value) { m_s3RecordingSinkRuntimeConfigurationHasBeenSet = true; m_s3RecordingSinkRuntimeConfiguration = std::move(value); }

    /**
     * <p>The runtime configuration of the Amazon S3 bucket that stores recordings in a
     * media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& WithS3RecordingSinkRuntimeConfiguration(const S3RecordingSinkRuntimeConfiguration& value) { SetS3RecordingSinkRuntimeConfiguration(value); return *this;}

    /**
     * <p>The runtime configuration of the Amazon S3 bucket that stores recordings in a
     * media insights pipeline.</p>
     */
    inline MediaInsightsPipeline& WithS3RecordingSinkRuntimeConfiguration(S3RecordingSinkRuntimeConfiguration&& value) { SetS3RecordingSinkRuntimeConfiguration(std::move(value)); return *this;}


    /**
     * <p>The time at which the media insights pipeline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time at which the media insights pipeline was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time at which the media insights pipeline was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time at which the media insights pipeline was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time at which the media insights pipeline was created.</p>
     */
    inline MediaInsightsPipeline& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the media insights pipeline was created.</p>
     */
    inline MediaInsightsPipeline& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The statuses that the elements in a media insights pipeline can have during
     * data processing.</p>
     */
    inline const Aws::Vector<MediaInsightsPipelineElementStatus>& GetElementStatuses() const{ return m_elementStatuses; }

    /**
     * <p>The statuses that the elements in a media insights pipeline can have during
     * data processing.</p>
     */
    inline bool ElementStatusesHasBeenSet() const { return m_elementStatusesHasBeenSet; }

    /**
     * <p>The statuses that the elements in a media insights pipeline can have during
     * data processing.</p>
     */
    inline void SetElementStatuses(const Aws::Vector<MediaInsightsPipelineElementStatus>& value) { m_elementStatusesHasBeenSet = true; m_elementStatuses = value; }

    /**
     * <p>The statuses that the elements in a media insights pipeline can have during
     * data processing.</p>
     */
    inline void SetElementStatuses(Aws::Vector<MediaInsightsPipelineElementStatus>&& value) { m_elementStatusesHasBeenSet = true; m_elementStatuses = std::move(value); }

    /**
     * <p>The statuses that the elements in a media insights pipeline can have during
     * data processing.</p>
     */
    inline MediaInsightsPipeline& WithElementStatuses(const Aws::Vector<MediaInsightsPipelineElementStatus>& value) { SetElementStatuses(value); return *this;}

    /**
     * <p>The statuses that the elements in a media insights pipeline can have during
     * data processing.</p>
     */
    inline MediaInsightsPipeline& WithElementStatuses(Aws::Vector<MediaInsightsPipelineElementStatus>&& value) { SetElementStatuses(std::move(value)); return *this;}

    /**
     * <p>The statuses that the elements in a media insights pipeline can have during
     * data processing.</p>
     */
    inline MediaInsightsPipeline& AddElementStatuses(const MediaInsightsPipelineElementStatus& value) { m_elementStatusesHasBeenSet = true; m_elementStatuses.push_back(value); return *this; }

    /**
     * <p>The statuses that the elements in a media insights pipeline can have during
     * data processing.</p>
     */
    inline MediaInsightsPipeline& AddElementStatuses(MediaInsightsPipelineElementStatus&& value) { m_elementStatusesHasBeenSet = true; m_elementStatuses.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_mediaPipelineId;
    bool m_mediaPipelineIdHasBeenSet = false;

    Aws::String m_mediaPipelineArn;
    bool m_mediaPipelineArnHasBeenSet = false;

    Aws::String m_mediaInsightsPipelineConfigurationArn;
    bool m_mediaInsightsPipelineConfigurationArnHasBeenSet = false;

    MediaPipelineStatus m_status;
    bool m_statusHasBeenSet = false;

    KinesisVideoStreamSourceRuntimeConfiguration m_kinesisVideoStreamSourceRuntimeConfiguration;
    bool m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_mediaInsightsRuntimeMetadata;
    bool m_mediaInsightsRuntimeMetadataHasBeenSet = false;

    KinesisVideoStreamRecordingSourceRuntimeConfiguration m_kinesisVideoStreamRecordingSourceRuntimeConfiguration;
    bool m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet = false;

    S3RecordingSinkRuntimeConfiguration m_s3RecordingSinkRuntimeConfiguration;
    bool m_s3RecordingSinkRuntimeConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Vector<MediaInsightsPipelineElementStatus> m_elementStatuses;
    bool m_elementStatusesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
