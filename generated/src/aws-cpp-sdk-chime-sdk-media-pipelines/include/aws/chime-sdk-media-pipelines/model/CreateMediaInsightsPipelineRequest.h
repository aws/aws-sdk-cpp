/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamSourceRuntimeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamRecordingSourceRuntimeConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/S3RecordingSinkRuntimeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-media-pipelines/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   */
  class CreateMediaInsightsPipelineRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaInsightsPipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMediaInsightsPipeline"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the pipeline's configuration.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationArn() const{ return m_mediaInsightsPipelineConfigurationArn; }

    /**
     * <p>The ARN of the pipeline's configuration.</p>
     */
    inline bool MediaInsightsPipelineConfigurationArnHasBeenSet() const { return m_mediaInsightsPipelineConfigurationArnHasBeenSet; }

    /**
     * <p>The ARN of the pipeline's configuration.</p>
     */
    inline void SetMediaInsightsPipelineConfigurationArn(const Aws::String& value) { m_mediaInsightsPipelineConfigurationArnHasBeenSet = true; m_mediaInsightsPipelineConfigurationArn = value; }

    /**
     * <p>The ARN of the pipeline's configuration.</p>
     */
    inline void SetMediaInsightsPipelineConfigurationArn(Aws::String&& value) { m_mediaInsightsPipelineConfigurationArnHasBeenSet = true; m_mediaInsightsPipelineConfigurationArn = std::move(value); }

    /**
     * <p>The ARN of the pipeline's configuration.</p>
     */
    inline void SetMediaInsightsPipelineConfigurationArn(const char* value) { m_mediaInsightsPipelineConfigurationArnHasBeenSet = true; m_mediaInsightsPipelineConfigurationArn.assign(value); }

    /**
     * <p>The ARN of the pipeline's configuration.</p>
     */
    inline CreateMediaInsightsPipelineRequest& WithMediaInsightsPipelineConfigurationArn(const Aws::String& value) { SetMediaInsightsPipelineConfigurationArn(value); return *this;}

    /**
     * <p>The ARN of the pipeline's configuration.</p>
     */
    inline CreateMediaInsightsPipelineRequest& WithMediaInsightsPipelineConfigurationArn(Aws::String&& value) { SetMediaInsightsPipelineConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the pipeline's configuration.</p>
     */
    inline CreateMediaInsightsPipelineRequest& WithMediaInsightsPipelineConfigurationArn(const char* value) { SetMediaInsightsPipelineConfigurationArn(value); return *this;}


    /**
     * <p>The runtime configuration for the Kinesis video stream source of the media
     * insights pipeline.</p>
     */
    inline const KinesisVideoStreamSourceRuntimeConfiguration& GetKinesisVideoStreamSourceRuntimeConfiguration() const{ return m_kinesisVideoStreamSourceRuntimeConfiguration; }

    /**
     * <p>The runtime configuration for the Kinesis video stream source of the media
     * insights pipeline.</p>
     */
    inline bool KinesisVideoStreamSourceRuntimeConfigurationHasBeenSet() const { return m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet; }

    /**
     * <p>The runtime configuration for the Kinesis video stream source of the media
     * insights pipeline.</p>
     */
    inline void SetKinesisVideoStreamSourceRuntimeConfiguration(const KinesisVideoStreamSourceRuntimeConfiguration& value) { m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet = true; m_kinesisVideoStreamSourceRuntimeConfiguration = value; }

    /**
     * <p>The runtime configuration for the Kinesis video stream source of the media
     * insights pipeline.</p>
     */
    inline void SetKinesisVideoStreamSourceRuntimeConfiguration(KinesisVideoStreamSourceRuntimeConfiguration&& value) { m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet = true; m_kinesisVideoStreamSourceRuntimeConfiguration = std::move(value); }

    /**
     * <p>The runtime configuration for the Kinesis video stream source of the media
     * insights pipeline.</p>
     */
    inline CreateMediaInsightsPipelineRequest& WithKinesisVideoStreamSourceRuntimeConfiguration(const KinesisVideoStreamSourceRuntimeConfiguration& value) { SetKinesisVideoStreamSourceRuntimeConfiguration(value); return *this;}

    /**
     * <p>The runtime configuration for the Kinesis video stream source of the media
     * insights pipeline.</p>
     */
    inline CreateMediaInsightsPipelineRequest& WithKinesisVideoStreamSourceRuntimeConfiguration(KinesisVideoStreamSourceRuntimeConfiguration&& value) { SetKinesisVideoStreamSourceRuntimeConfiguration(std::move(value)); return *this;}


    /**
     * <p>The runtime metadata for the media insights pipeline. Consists of a key-value
     * map of strings.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMediaInsightsRuntimeMetadata() const{ return m_mediaInsightsRuntimeMetadata; }

    /**
     * <p>The runtime metadata for the media insights pipeline. Consists of a key-value
     * map of strings.</p>
     */
    inline bool MediaInsightsRuntimeMetadataHasBeenSet() const { return m_mediaInsightsRuntimeMetadataHasBeenSet; }

    /**
     * <p>The runtime metadata for the media insights pipeline. Consists of a key-value
     * map of strings.</p>
     */
    inline void SetMediaInsightsRuntimeMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata = value; }

    /**
     * <p>The runtime metadata for the media insights pipeline. Consists of a key-value
     * map of strings.</p>
     */
    inline void SetMediaInsightsRuntimeMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata = std::move(value); }

    /**
     * <p>The runtime metadata for the media insights pipeline. Consists of a key-value
     * map of strings.</p>
     */
    inline CreateMediaInsightsPipelineRequest& WithMediaInsightsRuntimeMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMediaInsightsRuntimeMetadata(value); return *this;}

    /**
     * <p>The runtime metadata for the media insights pipeline. Consists of a key-value
     * map of strings.</p>
     */
    inline CreateMediaInsightsPipelineRequest& WithMediaInsightsRuntimeMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMediaInsightsRuntimeMetadata(std::move(value)); return *this;}

    /**
     * <p>The runtime metadata for the media insights pipeline. Consists of a key-value
     * map of strings.</p>
     */
    inline CreateMediaInsightsPipelineRequest& AddMediaInsightsRuntimeMetadata(const Aws::String& key, const Aws::String& value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata.emplace(key, value); return *this; }

    /**
     * <p>The runtime metadata for the media insights pipeline. Consists of a key-value
     * map of strings.</p>
     */
    inline CreateMediaInsightsPipelineRequest& AddMediaInsightsRuntimeMetadata(Aws::String&& key, const Aws::String& value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The runtime metadata for the media insights pipeline. Consists of a key-value
     * map of strings.</p>
     */
    inline CreateMediaInsightsPipelineRequest& AddMediaInsightsRuntimeMetadata(const Aws::String& key, Aws::String&& value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The runtime metadata for the media insights pipeline. Consists of a key-value
     * map of strings.</p>
     */
    inline CreateMediaInsightsPipelineRequest& AddMediaInsightsRuntimeMetadata(Aws::String&& key, Aws::String&& value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The runtime metadata for the media insights pipeline. Consists of a key-value
     * map of strings.</p>
     */
    inline CreateMediaInsightsPipelineRequest& AddMediaInsightsRuntimeMetadata(const char* key, Aws::String&& value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The runtime metadata for the media insights pipeline. Consists of a key-value
     * map of strings.</p>
     */
    inline CreateMediaInsightsPipelineRequest& AddMediaInsightsRuntimeMetadata(Aws::String&& key, const char* value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The runtime metadata for the media insights pipeline. Consists of a key-value
     * map of strings.</p>
     */
    inline CreateMediaInsightsPipelineRequest& AddMediaInsightsRuntimeMetadata(const char* key, const char* value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata.emplace(key, value); return *this; }


    /**
     * <p>The runtime configuration for the Kinesis video recording stream source.</p>
     */
    inline const KinesisVideoStreamRecordingSourceRuntimeConfiguration& GetKinesisVideoStreamRecordingSourceRuntimeConfiguration() const{ return m_kinesisVideoStreamRecordingSourceRuntimeConfiguration; }

    /**
     * <p>The runtime configuration for the Kinesis video recording stream source.</p>
     */
    inline bool KinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet() const { return m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet; }

    /**
     * <p>The runtime configuration for the Kinesis video recording stream source.</p>
     */
    inline void SetKinesisVideoStreamRecordingSourceRuntimeConfiguration(const KinesisVideoStreamRecordingSourceRuntimeConfiguration& value) { m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet = true; m_kinesisVideoStreamRecordingSourceRuntimeConfiguration = value; }

    /**
     * <p>The runtime configuration for the Kinesis video recording stream source.</p>
     */
    inline void SetKinesisVideoStreamRecordingSourceRuntimeConfiguration(KinesisVideoStreamRecordingSourceRuntimeConfiguration&& value) { m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet = true; m_kinesisVideoStreamRecordingSourceRuntimeConfiguration = std::move(value); }

    /**
     * <p>The runtime configuration for the Kinesis video recording stream source.</p>
     */
    inline CreateMediaInsightsPipelineRequest& WithKinesisVideoStreamRecordingSourceRuntimeConfiguration(const KinesisVideoStreamRecordingSourceRuntimeConfiguration& value) { SetKinesisVideoStreamRecordingSourceRuntimeConfiguration(value); return *this;}

    /**
     * <p>The runtime configuration for the Kinesis video recording stream source.</p>
     */
    inline CreateMediaInsightsPipelineRequest& WithKinesisVideoStreamRecordingSourceRuntimeConfiguration(KinesisVideoStreamRecordingSourceRuntimeConfiguration&& value) { SetKinesisVideoStreamRecordingSourceRuntimeConfiguration(std::move(value)); return *this;}


    /**
     * <p>The runtime configuration for the S3 recording sink. If specified, the
     * settings in this structure override any settings in
     * <code>S3RecordingSinkConfiguration</code>.</p>
     */
    inline const S3RecordingSinkRuntimeConfiguration& GetS3RecordingSinkRuntimeConfiguration() const{ return m_s3RecordingSinkRuntimeConfiguration; }

    /**
     * <p>The runtime configuration for the S3 recording sink. If specified, the
     * settings in this structure override any settings in
     * <code>S3RecordingSinkConfiguration</code>.</p>
     */
    inline bool S3RecordingSinkRuntimeConfigurationHasBeenSet() const { return m_s3RecordingSinkRuntimeConfigurationHasBeenSet; }

    /**
     * <p>The runtime configuration for the S3 recording sink. If specified, the
     * settings in this structure override any settings in
     * <code>S3RecordingSinkConfiguration</code>.</p>
     */
    inline void SetS3RecordingSinkRuntimeConfiguration(const S3RecordingSinkRuntimeConfiguration& value) { m_s3RecordingSinkRuntimeConfigurationHasBeenSet = true; m_s3RecordingSinkRuntimeConfiguration = value; }

    /**
     * <p>The runtime configuration for the S3 recording sink. If specified, the
     * settings in this structure override any settings in
     * <code>S3RecordingSinkConfiguration</code>.</p>
     */
    inline void SetS3RecordingSinkRuntimeConfiguration(S3RecordingSinkRuntimeConfiguration&& value) { m_s3RecordingSinkRuntimeConfigurationHasBeenSet = true; m_s3RecordingSinkRuntimeConfiguration = std::move(value); }

    /**
     * <p>The runtime configuration for the S3 recording sink. If specified, the
     * settings in this structure override any settings in
     * <code>S3RecordingSinkConfiguration</code>.</p>
     */
    inline CreateMediaInsightsPipelineRequest& WithS3RecordingSinkRuntimeConfiguration(const S3RecordingSinkRuntimeConfiguration& value) { SetS3RecordingSinkRuntimeConfiguration(value); return *this;}

    /**
     * <p>The runtime configuration for the S3 recording sink. If specified, the
     * settings in this structure override any settings in
     * <code>S3RecordingSinkConfiguration</code>.</p>
     */
    inline CreateMediaInsightsPipelineRequest& WithS3RecordingSinkRuntimeConfiguration(S3RecordingSinkRuntimeConfiguration&& value) { SetS3RecordingSinkRuntimeConfiguration(std::move(value)); return *this;}


    /**
     * <p>The tags assigned to the media insights pipeline.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the media insights pipeline.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the media insights pipeline.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the media insights pipeline.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the media insights pipeline.</p>
     */
    inline CreateMediaInsightsPipelineRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the media insights pipeline.</p>
     */
    inline CreateMediaInsightsPipelineRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the media insights pipeline.</p>
     */
    inline CreateMediaInsightsPipelineRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags assigned to the media insights pipeline.</p>
     */
    inline CreateMediaInsightsPipelineRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The unique identifier for the media insights pipeline request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The unique identifier for the media insights pipeline request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The unique identifier for the media insights pipeline request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The unique identifier for the media insights pipeline request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The unique identifier for the media insights pipeline request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The unique identifier for the media insights pipeline request.</p>
     */
    inline CreateMediaInsightsPipelineRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The unique identifier for the media insights pipeline request.</p>
     */
    inline CreateMediaInsightsPipelineRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the media insights pipeline request.</p>
     */
    inline CreateMediaInsightsPipelineRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_mediaInsightsPipelineConfigurationArn;
    bool m_mediaInsightsPipelineConfigurationArnHasBeenSet = false;

    KinesisVideoStreamSourceRuntimeConfiguration m_kinesisVideoStreamSourceRuntimeConfiguration;
    bool m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_mediaInsightsRuntimeMetadata;
    bool m_mediaInsightsRuntimeMetadataHasBeenSet = false;

    KinesisVideoStreamRecordingSourceRuntimeConfiguration m_kinesisVideoStreamRecordingSourceRuntimeConfiguration;
    bool m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet = false;

    S3RecordingSinkRuntimeConfiguration m_s3RecordingSinkRuntimeConfiguration;
    bool m_s3RecordingSinkRuntimeConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
