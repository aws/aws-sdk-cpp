/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipelineConfigurationElementType.h>
#include <aws/chime-sdk-media-pipelines/model/AmazonTranscribeCallAnalyticsProcessorConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/AmazonTranscribeProcessorConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/KinesisDataStreamSinkConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/S3RecordingSinkConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/VoiceAnalyticsProcessorConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/LambdaFunctionSinkConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/SqsQueueSinkConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/SnsTopicSinkConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/VoiceEnhancementSinkConfiguration.h>
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
   * <p>An element in a media insights pipeline configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/MediaInsightsPipelineConfigurationElement">AWS
   * API Reference</a></p>
   */
  class MediaInsightsPipelineConfigurationElement
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfigurationElement() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfigurationElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfigurationElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The element type.</p>
     */
    inline MediaInsightsPipelineConfigurationElementType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MediaInsightsPipelineConfigurationElementType value) { m_typeHasBeenSet = true; m_type = value; }
    inline MediaInsightsPipelineConfigurationElement& WithType(MediaInsightsPipelineConfigurationElementType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analytics configuration settings for transcribing audio in a media
     * insights pipeline configuration element.</p>
     */
    inline const AmazonTranscribeCallAnalyticsProcessorConfiguration& GetAmazonTranscribeCallAnalyticsProcessorConfiguration() const { return m_amazonTranscribeCallAnalyticsProcessorConfiguration; }
    inline bool AmazonTranscribeCallAnalyticsProcessorConfigurationHasBeenSet() const { return m_amazonTranscribeCallAnalyticsProcessorConfigurationHasBeenSet; }
    template<typename AmazonTranscribeCallAnalyticsProcessorConfigurationT = AmazonTranscribeCallAnalyticsProcessorConfiguration>
    void SetAmazonTranscribeCallAnalyticsProcessorConfiguration(AmazonTranscribeCallAnalyticsProcessorConfigurationT&& value) { m_amazonTranscribeCallAnalyticsProcessorConfigurationHasBeenSet = true; m_amazonTranscribeCallAnalyticsProcessorConfiguration = std::forward<AmazonTranscribeCallAnalyticsProcessorConfigurationT>(value); }
    template<typename AmazonTranscribeCallAnalyticsProcessorConfigurationT = AmazonTranscribeCallAnalyticsProcessorConfiguration>
    MediaInsightsPipelineConfigurationElement& WithAmazonTranscribeCallAnalyticsProcessorConfiguration(AmazonTranscribeCallAnalyticsProcessorConfigurationT&& value) { SetAmazonTranscribeCallAnalyticsProcessorConfiguration(std::forward<AmazonTranscribeCallAnalyticsProcessorConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transcription processor configuration settings in a media insights
     * pipeline configuration element.</p>
     */
    inline const AmazonTranscribeProcessorConfiguration& GetAmazonTranscribeProcessorConfiguration() const { return m_amazonTranscribeProcessorConfiguration; }
    inline bool AmazonTranscribeProcessorConfigurationHasBeenSet() const { return m_amazonTranscribeProcessorConfigurationHasBeenSet; }
    template<typename AmazonTranscribeProcessorConfigurationT = AmazonTranscribeProcessorConfiguration>
    void SetAmazonTranscribeProcessorConfiguration(AmazonTranscribeProcessorConfigurationT&& value) { m_amazonTranscribeProcessorConfigurationHasBeenSet = true; m_amazonTranscribeProcessorConfiguration = std::forward<AmazonTranscribeProcessorConfigurationT>(value); }
    template<typename AmazonTranscribeProcessorConfigurationT = AmazonTranscribeProcessorConfiguration>
    MediaInsightsPipelineConfigurationElement& WithAmazonTranscribeProcessorConfiguration(AmazonTranscribeProcessorConfigurationT&& value) { SetAmazonTranscribeProcessorConfiguration(std::forward<AmazonTranscribeProcessorConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the Kinesis Data Stream Sink in a media
     * insights pipeline configuration element.</p>
     */
    inline const KinesisDataStreamSinkConfiguration& GetKinesisDataStreamSinkConfiguration() const { return m_kinesisDataStreamSinkConfiguration; }
    inline bool KinesisDataStreamSinkConfigurationHasBeenSet() const { return m_kinesisDataStreamSinkConfigurationHasBeenSet; }
    template<typename KinesisDataStreamSinkConfigurationT = KinesisDataStreamSinkConfiguration>
    void SetKinesisDataStreamSinkConfiguration(KinesisDataStreamSinkConfigurationT&& value) { m_kinesisDataStreamSinkConfigurationHasBeenSet = true; m_kinesisDataStreamSinkConfiguration = std::forward<KinesisDataStreamSinkConfigurationT>(value); }
    template<typename KinesisDataStreamSinkConfigurationT = KinesisDataStreamSinkConfiguration>
    MediaInsightsPipelineConfigurationElement& WithKinesisDataStreamSinkConfiguration(KinesisDataStreamSinkConfigurationT&& value) { SetKinesisDataStreamSinkConfiguration(std::forward<KinesisDataStreamSinkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the Amazon S3 recording bucket in a media
     * insights pipeline configuration element.</p>
     */
    inline const S3RecordingSinkConfiguration& GetS3RecordingSinkConfiguration() const { return m_s3RecordingSinkConfiguration; }
    inline bool S3RecordingSinkConfigurationHasBeenSet() const { return m_s3RecordingSinkConfigurationHasBeenSet; }
    template<typename S3RecordingSinkConfigurationT = S3RecordingSinkConfiguration>
    void SetS3RecordingSinkConfiguration(S3RecordingSinkConfigurationT&& value) { m_s3RecordingSinkConfigurationHasBeenSet = true; m_s3RecordingSinkConfiguration = std::forward<S3RecordingSinkConfigurationT>(value); }
    template<typename S3RecordingSinkConfigurationT = S3RecordingSinkConfiguration>
    MediaInsightsPipelineConfigurationElement& WithS3RecordingSinkConfiguration(S3RecordingSinkConfigurationT&& value) { SetS3RecordingSinkConfiguration(std::forward<S3RecordingSinkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The voice analytics configuration settings in a media insights pipeline
     * configuration element.</p>
     */
    inline const VoiceAnalyticsProcessorConfiguration& GetVoiceAnalyticsProcessorConfiguration() const { return m_voiceAnalyticsProcessorConfiguration; }
    inline bool VoiceAnalyticsProcessorConfigurationHasBeenSet() const { return m_voiceAnalyticsProcessorConfigurationHasBeenSet; }
    template<typename VoiceAnalyticsProcessorConfigurationT = VoiceAnalyticsProcessorConfiguration>
    void SetVoiceAnalyticsProcessorConfiguration(VoiceAnalyticsProcessorConfigurationT&& value) { m_voiceAnalyticsProcessorConfigurationHasBeenSet = true; m_voiceAnalyticsProcessorConfiguration = std::forward<VoiceAnalyticsProcessorConfigurationT>(value); }
    template<typename VoiceAnalyticsProcessorConfigurationT = VoiceAnalyticsProcessorConfiguration>
    MediaInsightsPipelineConfigurationElement& WithVoiceAnalyticsProcessorConfiguration(VoiceAnalyticsProcessorConfigurationT&& value) { SetVoiceAnalyticsProcessorConfiguration(std::forward<VoiceAnalyticsProcessorConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the Amazon Web Services Lambda sink in a media
     * insights pipeline configuration element.</p>
     */
    inline const LambdaFunctionSinkConfiguration& GetLambdaFunctionSinkConfiguration() const { return m_lambdaFunctionSinkConfiguration; }
    inline bool LambdaFunctionSinkConfigurationHasBeenSet() const { return m_lambdaFunctionSinkConfigurationHasBeenSet; }
    template<typename LambdaFunctionSinkConfigurationT = LambdaFunctionSinkConfiguration>
    void SetLambdaFunctionSinkConfiguration(LambdaFunctionSinkConfigurationT&& value) { m_lambdaFunctionSinkConfigurationHasBeenSet = true; m_lambdaFunctionSinkConfiguration = std::forward<LambdaFunctionSinkConfigurationT>(value); }
    template<typename LambdaFunctionSinkConfigurationT = LambdaFunctionSinkConfiguration>
    MediaInsightsPipelineConfigurationElement& WithLambdaFunctionSinkConfiguration(LambdaFunctionSinkConfigurationT&& value) { SetLambdaFunctionSinkConfiguration(std::forward<LambdaFunctionSinkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for an SQS queue sink in a media insights pipeline
     * configuration element.</p>
     */
    inline const SqsQueueSinkConfiguration& GetSqsQueueSinkConfiguration() const { return m_sqsQueueSinkConfiguration; }
    inline bool SqsQueueSinkConfigurationHasBeenSet() const { return m_sqsQueueSinkConfigurationHasBeenSet; }
    template<typename SqsQueueSinkConfigurationT = SqsQueueSinkConfiguration>
    void SetSqsQueueSinkConfiguration(SqsQueueSinkConfigurationT&& value) { m_sqsQueueSinkConfigurationHasBeenSet = true; m_sqsQueueSinkConfiguration = std::forward<SqsQueueSinkConfigurationT>(value); }
    template<typename SqsQueueSinkConfigurationT = SqsQueueSinkConfiguration>
    MediaInsightsPipelineConfigurationElement& WithSqsQueueSinkConfiguration(SqsQueueSinkConfigurationT&& value) { SetSqsQueueSinkConfiguration(std::forward<SqsQueueSinkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for an SNS topic sink in a media insights pipeline
     * configuration element.</p>
     */
    inline const SnsTopicSinkConfiguration& GetSnsTopicSinkConfiguration() const { return m_snsTopicSinkConfiguration; }
    inline bool SnsTopicSinkConfigurationHasBeenSet() const { return m_snsTopicSinkConfigurationHasBeenSet; }
    template<typename SnsTopicSinkConfigurationT = SnsTopicSinkConfiguration>
    void SetSnsTopicSinkConfiguration(SnsTopicSinkConfigurationT&& value) { m_snsTopicSinkConfigurationHasBeenSet = true; m_snsTopicSinkConfiguration = std::forward<SnsTopicSinkConfigurationT>(value); }
    template<typename SnsTopicSinkConfigurationT = SnsTopicSinkConfiguration>
    MediaInsightsPipelineConfigurationElement& WithSnsTopicSinkConfiguration(SnsTopicSinkConfigurationT&& value) { SetSnsTopicSinkConfiguration(std::forward<SnsTopicSinkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for voice enhancement sink in a media insights
     * pipeline configuration element.</p>
     */
    inline const VoiceEnhancementSinkConfiguration& GetVoiceEnhancementSinkConfiguration() const { return m_voiceEnhancementSinkConfiguration; }
    inline bool VoiceEnhancementSinkConfigurationHasBeenSet() const { return m_voiceEnhancementSinkConfigurationHasBeenSet; }
    template<typename VoiceEnhancementSinkConfigurationT = VoiceEnhancementSinkConfiguration>
    void SetVoiceEnhancementSinkConfiguration(VoiceEnhancementSinkConfigurationT&& value) { m_voiceEnhancementSinkConfigurationHasBeenSet = true; m_voiceEnhancementSinkConfiguration = std::forward<VoiceEnhancementSinkConfigurationT>(value); }
    template<typename VoiceEnhancementSinkConfigurationT = VoiceEnhancementSinkConfiguration>
    MediaInsightsPipelineConfigurationElement& WithVoiceEnhancementSinkConfiguration(VoiceEnhancementSinkConfigurationT&& value) { SetVoiceEnhancementSinkConfiguration(std::forward<VoiceEnhancementSinkConfigurationT>(value)); return *this;}
    ///@}
  private:

    MediaInsightsPipelineConfigurationElementType m_type{MediaInsightsPipelineConfigurationElementType::NOT_SET};
    bool m_typeHasBeenSet = false;

    AmazonTranscribeCallAnalyticsProcessorConfiguration m_amazonTranscribeCallAnalyticsProcessorConfiguration;
    bool m_amazonTranscribeCallAnalyticsProcessorConfigurationHasBeenSet = false;

    AmazonTranscribeProcessorConfiguration m_amazonTranscribeProcessorConfiguration;
    bool m_amazonTranscribeProcessorConfigurationHasBeenSet = false;

    KinesisDataStreamSinkConfiguration m_kinesisDataStreamSinkConfiguration;
    bool m_kinesisDataStreamSinkConfigurationHasBeenSet = false;

    S3RecordingSinkConfiguration m_s3RecordingSinkConfiguration;
    bool m_s3RecordingSinkConfigurationHasBeenSet = false;

    VoiceAnalyticsProcessorConfiguration m_voiceAnalyticsProcessorConfiguration;
    bool m_voiceAnalyticsProcessorConfigurationHasBeenSet = false;

    LambdaFunctionSinkConfiguration m_lambdaFunctionSinkConfiguration;
    bool m_lambdaFunctionSinkConfigurationHasBeenSet = false;

    SqsQueueSinkConfiguration m_sqsQueueSinkConfiguration;
    bool m_sqsQueueSinkConfigurationHasBeenSet = false;

    SnsTopicSinkConfiguration m_snsTopicSinkConfiguration;
    bool m_snsTopicSinkConfigurationHasBeenSet = false;

    VoiceEnhancementSinkConfiguration m_voiceEnhancementSinkConfiguration;
    bool m_voiceEnhancementSinkConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
