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
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaInsightsPipelineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMediaInsightsPipeline"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the pipeline's configuration.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationArn() const { return m_mediaInsightsPipelineConfigurationArn; }
    inline bool MediaInsightsPipelineConfigurationArnHasBeenSet() const { return m_mediaInsightsPipelineConfigurationArnHasBeenSet; }
    template<typename MediaInsightsPipelineConfigurationArnT = Aws::String>
    void SetMediaInsightsPipelineConfigurationArn(MediaInsightsPipelineConfigurationArnT&& value) { m_mediaInsightsPipelineConfigurationArnHasBeenSet = true; m_mediaInsightsPipelineConfigurationArn = std::forward<MediaInsightsPipelineConfigurationArnT>(value); }
    template<typename MediaInsightsPipelineConfigurationArnT = Aws::String>
    CreateMediaInsightsPipelineRequest& WithMediaInsightsPipelineConfigurationArn(MediaInsightsPipelineConfigurationArnT&& value) { SetMediaInsightsPipelineConfigurationArn(std::forward<MediaInsightsPipelineConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime configuration for the Kinesis video stream source of the media
     * insights pipeline.</p>
     */
    inline const KinesisVideoStreamSourceRuntimeConfiguration& GetKinesisVideoStreamSourceRuntimeConfiguration() const { return m_kinesisVideoStreamSourceRuntimeConfiguration; }
    inline bool KinesisVideoStreamSourceRuntimeConfigurationHasBeenSet() const { return m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet; }
    template<typename KinesisVideoStreamSourceRuntimeConfigurationT = KinesisVideoStreamSourceRuntimeConfiguration>
    void SetKinesisVideoStreamSourceRuntimeConfiguration(KinesisVideoStreamSourceRuntimeConfigurationT&& value) { m_kinesisVideoStreamSourceRuntimeConfigurationHasBeenSet = true; m_kinesisVideoStreamSourceRuntimeConfiguration = std::forward<KinesisVideoStreamSourceRuntimeConfigurationT>(value); }
    template<typename KinesisVideoStreamSourceRuntimeConfigurationT = KinesisVideoStreamSourceRuntimeConfiguration>
    CreateMediaInsightsPipelineRequest& WithKinesisVideoStreamSourceRuntimeConfiguration(KinesisVideoStreamSourceRuntimeConfigurationT&& value) { SetKinesisVideoStreamSourceRuntimeConfiguration(std::forward<KinesisVideoStreamSourceRuntimeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime metadata for the media insights pipeline. Consists of a key-value
     * map of strings.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMediaInsightsRuntimeMetadata() const { return m_mediaInsightsRuntimeMetadata; }
    inline bool MediaInsightsRuntimeMetadataHasBeenSet() const { return m_mediaInsightsRuntimeMetadataHasBeenSet; }
    template<typename MediaInsightsRuntimeMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetMediaInsightsRuntimeMetadata(MediaInsightsRuntimeMetadataT&& value) { m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata = std::forward<MediaInsightsRuntimeMetadataT>(value); }
    template<typename MediaInsightsRuntimeMetadataT = Aws::Map<Aws::String, Aws::String>>
    CreateMediaInsightsPipelineRequest& WithMediaInsightsRuntimeMetadata(MediaInsightsRuntimeMetadataT&& value) { SetMediaInsightsRuntimeMetadata(std::forward<MediaInsightsRuntimeMetadataT>(value)); return *this;}
    template<typename MediaInsightsRuntimeMetadataKeyT = Aws::String, typename MediaInsightsRuntimeMetadataValueT = Aws::String>
    CreateMediaInsightsPipelineRequest& AddMediaInsightsRuntimeMetadata(MediaInsightsRuntimeMetadataKeyT&& key, MediaInsightsRuntimeMetadataValueT&& value) {
      m_mediaInsightsRuntimeMetadataHasBeenSet = true; m_mediaInsightsRuntimeMetadata.emplace(std::forward<MediaInsightsRuntimeMetadataKeyT>(key), std::forward<MediaInsightsRuntimeMetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The runtime configuration for the Kinesis video recording stream source.</p>
     */
    inline const KinesisVideoStreamRecordingSourceRuntimeConfiguration& GetKinesisVideoStreamRecordingSourceRuntimeConfiguration() const { return m_kinesisVideoStreamRecordingSourceRuntimeConfiguration; }
    inline bool KinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet() const { return m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet; }
    template<typename KinesisVideoStreamRecordingSourceRuntimeConfigurationT = KinesisVideoStreamRecordingSourceRuntimeConfiguration>
    void SetKinesisVideoStreamRecordingSourceRuntimeConfiguration(KinesisVideoStreamRecordingSourceRuntimeConfigurationT&& value) { m_kinesisVideoStreamRecordingSourceRuntimeConfigurationHasBeenSet = true; m_kinesisVideoStreamRecordingSourceRuntimeConfiguration = std::forward<KinesisVideoStreamRecordingSourceRuntimeConfigurationT>(value); }
    template<typename KinesisVideoStreamRecordingSourceRuntimeConfigurationT = KinesisVideoStreamRecordingSourceRuntimeConfiguration>
    CreateMediaInsightsPipelineRequest& WithKinesisVideoStreamRecordingSourceRuntimeConfiguration(KinesisVideoStreamRecordingSourceRuntimeConfigurationT&& value) { SetKinesisVideoStreamRecordingSourceRuntimeConfiguration(std::forward<KinesisVideoStreamRecordingSourceRuntimeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime configuration for the S3 recording sink. If specified, the
     * settings in this structure override any settings in
     * <code>S3RecordingSinkConfiguration</code>.</p>
     */
    inline const S3RecordingSinkRuntimeConfiguration& GetS3RecordingSinkRuntimeConfiguration() const { return m_s3RecordingSinkRuntimeConfiguration; }
    inline bool S3RecordingSinkRuntimeConfigurationHasBeenSet() const { return m_s3RecordingSinkRuntimeConfigurationHasBeenSet; }
    template<typename S3RecordingSinkRuntimeConfigurationT = S3RecordingSinkRuntimeConfiguration>
    void SetS3RecordingSinkRuntimeConfiguration(S3RecordingSinkRuntimeConfigurationT&& value) { m_s3RecordingSinkRuntimeConfigurationHasBeenSet = true; m_s3RecordingSinkRuntimeConfiguration = std::forward<S3RecordingSinkRuntimeConfigurationT>(value); }
    template<typename S3RecordingSinkRuntimeConfigurationT = S3RecordingSinkRuntimeConfiguration>
    CreateMediaInsightsPipelineRequest& WithS3RecordingSinkRuntimeConfiguration(S3RecordingSinkRuntimeConfigurationT&& value) { SetS3RecordingSinkRuntimeConfiguration(std::forward<S3RecordingSinkRuntimeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the media insights pipeline.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateMediaInsightsPipelineRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateMediaInsightsPipelineRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the media insights pipeline request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateMediaInsightsPipelineRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
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

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
