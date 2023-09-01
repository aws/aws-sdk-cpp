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
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfigurationElement();
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfigurationElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfigurationElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The element type.</p>
     */
    inline const MediaInsightsPipelineConfigurationElementType& GetType() const{ return m_type; }

    /**
     * <p>The element type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The element type.</p>
     */
    inline void SetType(const MediaInsightsPipelineConfigurationElementType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The element type.</p>
     */
    inline void SetType(MediaInsightsPipelineConfigurationElementType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The element type.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithType(const MediaInsightsPipelineConfigurationElementType& value) { SetType(value); return *this;}

    /**
     * <p>The element type.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithType(MediaInsightsPipelineConfigurationElementType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The analytics configuration settings for transcribing audio in a media
     * insights pipeline configuration element.</p>
     */
    inline const AmazonTranscribeCallAnalyticsProcessorConfiguration& GetAmazonTranscribeCallAnalyticsProcessorConfiguration() const{ return m_amazonTranscribeCallAnalyticsProcessorConfiguration; }

    /**
     * <p>The analytics configuration settings for transcribing audio in a media
     * insights pipeline configuration element.</p>
     */
    inline bool AmazonTranscribeCallAnalyticsProcessorConfigurationHasBeenSet() const { return m_amazonTranscribeCallAnalyticsProcessorConfigurationHasBeenSet; }

    /**
     * <p>The analytics configuration settings for transcribing audio in a media
     * insights pipeline configuration element.</p>
     */
    inline void SetAmazonTranscribeCallAnalyticsProcessorConfiguration(const AmazonTranscribeCallAnalyticsProcessorConfiguration& value) { m_amazonTranscribeCallAnalyticsProcessorConfigurationHasBeenSet = true; m_amazonTranscribeCallAnalyticsProcessorConfiguration = value; }

    /**
     * <p>The analytics configuration settings for transcribing audio in a media
     * insights pipeline configuration element.</p>
     */
    inline void SetAmazonTranscribeCallAnalyticsProcessorConfiguration(AmazonTranscribeCallAnalyticsProcessorConfiguration&& value) { m_amazonTranscribeCallAnalyticsProcessorConfigurationHasBeenSet = true; m_amazonTranscribeCallAnalyticsProcessorConfiguration = std::move(value); }

    /**
     * <p>The analytics configuration settings for transcribing audio in a media
     * insights pipeline configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithAmazonTranscribeCallAnalyticsProcessorConfiguration(const AmazonTranscribeCallAnalyticsProcessorConfiguration& value) { SetAmazonTranscribeCallAnalyticsProcessorConfiguration(value); return *this;}

    /**
     * <p>The analytics configuration settings for transcribing audio in a media
     * insights pipeline configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithAmazonTranscribeCallAnalyticsProcessorConfiguration(AmazonTranscribeCallAnalyticsProcessorConfiguration&& value) { SetAmazonTranscribeCallAnalyticsProcessorConfiguration(std::move(value)); return *this;}


    /**
     * <p>The transcription processor configuration settings in a media insights
     * pipeline configuration element.</p>
     */
    inline const AmazonTranscribeProcessorConfiguration& GetAmazonTranscribeProcessorConfiguration() const{ return m_amazonTranscribeProcessorConfiguration; }

    /**
     * <p>The transcription processor configuration settings in a media insights
     * pipeline configuration element.</p>
     */
    inline bool AmazonTranscribeProcessorConfigurationHasBeenSet() const { return m_amazonTranscribeProcessorConfigurationHasBeenSet; }

    /**
     * <p>The transcription processor configuration settings in a media insights
     * pipeline configuration element.</p>
     */
    inline void SetAmazonTranscribeProcessorConfiguration(const AmazonTranscribeProcessorConfiguration& value) { m_amazonTranscribeProcessorConfigurationHasBeenSet = true; m_amazonTranscribeProcessorConfiguration = value; }

    /**
     * <p>The transcription processor configuration settings in a media insights
     * pipeline configuration element.</p>
     */
    inline void SetAmazonTranscribeProcessorConfiguration(AmazonTranscribeProcessorConfiguration&& value) { m_amazonTranscribeProcessorConfigurationHasBeenSet = true; m_amazonTranscribeProcessorConfiguration = std::move(value); }

    /**
     * <p>The transcription processor configuration settings in a media insights
     * pipeline configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithAmazonTranscribeProcessorConfiguration(const AmazonTranscribeProcessorConfiguration& value) { SetAmazonTranscribeProcessorConfiguration(value); return *this;}

    /**
     * <p>The transcription processor configuration settings in a media insights
     * pipeline configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithAmazonTranscribeProcessorConfiguration(AmazonTranscribeProcessorConfiguration&& value) { SetAmazonTranscribeProcessorConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration settings for the Kinesis Data Stream Sink in a media
     * insights pipeline configuration element.</p>
     */
    inline const KinesisDataStreamSinkConfiguration& GetKinesisDataStreamSinkConfiguration() const{ return m_kinesisDataStreamSinkConfiguration; }

    /**
     * <p>The configuration settings for the Kinesis Data Stream Sink in a media
     * insights pipeline configuration element.</p>
     */
    inline bool KinesisDataStreamSinkConfigurationHasBeenSet() const { return m_kinesisDataStreamSinkConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings for the Kinesis Data Stream Sink in a media
     * insights pipeline configuration element.</p>
     */
    inline void SetKinesisDataStreamSinkConfiguration(const KinesisDataStreamSinkConfiguration& value) { m_kinesisDataStreamSinkConfigurationHasBeenSet = true; m_kinesisDataStreamSinkConfiguration = value; }

    /**
     * <p>The configuration settings for the Kinesis Data Stream Sink in a media
     * insights pipeline configuration element.</p>
     */
    inline void SetKinesisDataStreamSinkConfiguration(KinesisDataStreamSinkConfiguration&& value) { m_kinesisDataStreamSinkConfigurationHasBeenSet = true; m_kinesisDataStreamSinkConfiguration = std::move(value); }

    /**
     * <p>The configuration settings for the Kinesis Data Stream Sink in a media
     * insights pipeline configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithKinesisDataStreamSinkConfiguration(const KinesisDataStreamSinkConfiguration& value) { SetKinesisDataStreamSinkConfiguration(value); return *this;}

    /**
     * <p>The configuration settings for the Kinesis Data Stream Sink in a media
     * insights pipeline configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithKinesisDataStreamSinkConfiguration(KinesisDataStreamSinkConfiguration&& value) { SetKinesisDataStreamSinkConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration settings for the Amazon S3 recording bucket in a media
     * insights pipeline configuration element.</p>
     */
    inline const S3RecordingSinkConfiguration& GetS3RecordingSinkConfiguration() const{ return m_s3RecordingSinkConfiguration; }

    /**
     * <p>The configuration settings for the Amazon S3 recording bucket in a media
     * insights pipeline configuration element.</p>
     */
    inline bool S3RecordingSinkConfigurationHasBeenSet() const { return m_s3RecordingSinkConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings for the Amazon S3 recording bucket in a media
     * insights pipeline configuration element.</p>
     */
    inline void SetS3RecordingSinkConfiguration(const S3RecordingSinkConfiguration& value) { m_s3RecordingSinkConfigurationHasBeenSet = true; m_s3RecordingSinkConfiguration = value; }

    /**
     * <p>The configuration settings for the Amazon S3 recording bucket in a media
     * insights pipeline configuration element.</p>
     */
    inline void SetS3RecordingSinkConfiguration(S3RecordingSinkConfiguration&& value) { m_s3RecordingSinkConfigurationHasBeenSet = true; m_s3RecordingSinkConfiguration = std::move(value); }

    /**
     * <p>The configuration settings for the Amazon S3 recording bucket in a media
     * insights pipeline configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithS3RecordingSinkConfiguration(const S3RecordingSinkConfiguration& value) { SetS3RecordingSinkConfiguration(value); return *this;}

    /**
     * <p>The configuration settings for the Amazon S3 recording bucket in a media
     * insights pipeline configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithS3RecordingSinkConfiguration(S3RecordingSinkConfiguration&& value) { SetS3RecordingSinkConfiguration(std::move(value)); return *this;}


    /**
     * <p>The voice analytics configuration settings in a media insights pipeline
     * configuration element.</p>
     */
    inline const VoiceAnalyticsProcessorConfiguration& GetVoiceAnalyticsProcessorConfiguration() const{ return m_voiceAnalyticsProcessorConfiguration; }

    /**
     * <p>The voice analytics configuration settings in a media insights pipeline
     * configuration element.</p>
     */
    inline bool VoiceAnalyticsProcessorConfigurationHasBeenSet() const { return m_voiceAnalyticsProcessorConfigurationHasBeenSet; }

    /**
     * <p>The voice analytics configuration settings in a media insights pipeline
     * configuration element.</p>
     */
    inline void SetVoiceAnalyticsProcessorConfiguration(const VoiceAnalyticsProcessorConfiguration& value) { m_voiceAnalyticsProcessorConfigurationHasBeenSet = true; m_voiceAnalyticsProcessorConfiguration = value; }

    /**
     * <p>The voice analytics configuration settings in a media insights pipeline
     * configuration element.</p>
     */
    inline void SetVoiceAnalyticsProcessorConfiguration(VoiceAnalyticsProcessorConfiguration&& value) { m_voiceAnalyticsProcessorConfigurationHasBeenSet = true; m_voiceAnalyticsProcessorConfiguration = std::move(value); }

    /**
     * <p>The voice analytics configuration settings in a media insights pipeline
     * configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithVoiceAnalyticsProcessorConfiguration(const VoiceAnalyticsProcessorConfiguration& value) { SetVoiceAnalyticsProcessorConfiguration(value); return *this;}

    /**
     * <p>The voice analytics configuration settings in a media insights pipeline
     * configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithVoiceAnalyticsProcessorConfiguration(VoiceAnalyticsProcessorConfiguration&& value) { SetVoiceAnalyticsProcessorConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration settings for the Amazon Web Services Lambda sink in a media
     * insights pipeline configuration element.</p>
     */
    inline const LambdaFunctionSinkConfiguration& GetLambdaFunctionSinkConfiguration() const{ return m_lambdaFunctionSinkConfiguration; }

    /**
     * <p>The configuration settings for the Amazon Web Services Lambda sink in a media
     * insights pipeline configuration element.</p>
     */
    inline bool LambdaFunctionSinkConfigurationHasBeenSet() const { return m_lambdaFunctionSinkConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings for the Amazon Web Services Lambda sink in a media
     * insights pipeline configuration element.</p>
     */
    inline void SetLambdaFunctionSinkConfiguration(const LambdaFunctionSinkConfiguration& value) { m_lambdaFunctionSinkConfigurationHasBeenSet = true; m_lambdaFunctionSinkConfiguration = value; }

    /**
     * <p>The configuration settings for the Amazon Web Services Lambda sink in a media
     * insights pipeline configuration element.</p>
     */
    inline void SetLambdaFunctionSinkConfiguration(LambdaFunctionSinkConfiguration&& value) { m_lambdaFunctionSinkConfigurationHasBeenSet = true; m_lambdaFunctionSinkConfiguration = std::move(value); }

    /**
     * <p>The configuration settings for the Amazon Web Services Lambda sink in a media
     * insights pipeline configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithLambdaFunctionSinkConfiguration(const LambdaFunctionSinkConfiguration& value) { SetLambdaFunctionSinkConfiguration(value); return *this;}

    /**
     * <p>The configuration settings for the Amazon Web Services Lambda sink in a media
     * insights pipeline configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithLambdaFunctionSinkConfiguration(LambdaFunctionSinkConfiguration&& value) { SetLambdaFunctionSinkConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration settings for an SQS queue sink in a media insights pipeline
     * configuration element.</p>
     */
    inline const SqsQueueSinkConfiguration& GetSqsQueueSinkConfiguration() const{ return m_sqsQueueSinkConfiguration; }

    /**
     * <p>The configuration settings for an SQS queue sink in a media insights pipeline
     * configuration element.</p>
     */
    inline bool SqsQueueSinkConfigurationHasBeenSet() const { return m_sqsQueueSinkConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings for an SQS queue sink in a media insights pipeline
     * configuration element.</p>
     */
    inline void SetSqsQueueSinkConfiguration(const SqsQueueSinkConfiguration& value) { m_sqsQueueSinkConfigurationHasBeenSet = true; m_sqsQueueSinkConfiguration = value; }

    /**
     * <p>The configuration settings for an SQS queue sink in a media insights pipeline
     * configuration element.</p>
     */
    inline void SetSqsQueueSinkConfiguration(SqsQueueSinkConfiguration&& value) { m_sqsQueueSinkConfigurationHasBeenSet = true; m_sqsQueueSinkConfiguration = std::move(value); }

    /**
     * <p>The configuration settings for an SQS queue sink in a media insights pipeline
     * configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithSqsQueueSinkConfiguration(const SqsQueueSinkConfiguration& value) { SetSqsQueueSinkConfiguration(value); return *this;}

    /**
     * <p>The configuration settings for an SQS queue sink in a media insights pipeline
     * configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithSqsQueueSinkConfiguration(SqsQueueSinkConfiguration&& value) { SetSqsQueueSinkConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration settings for an SNS topic sink in a media insights pipeline
     * configuration element.</p>
     */
    inline const SnsTopicSinkConfiguration& GetSnsTopicSinkConfiguration() const{ return m_snsTopicSinkConfiguration; }

    /**
     * <p>The configuration settings for an SNS topic sink in a media insights pipeline
     * configuration element.</p>
     */
    inline bool SnsTopicSinkConfigurationHasBeenSet() const { return m_snsTopicSinkConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings for an SNS topic sink in a media insights pipeline
     * configuration element.</p>
     */
    inline void SetSnsTopicSinkConfiguration(const SnsTopicSinkConfiguration& value) { m_snsTopicSinkConfigurationHasBeenSet = true; m_snsTopicSinkConfiguration = value; }

    /**
     * <p>The configuration settings for an SNS topic sink in a media insights pipeline
     * configuration element.</p>
     */
    inline void SetSnsTopicSinkConfiguration(SnsTopicSinkConfiguration&& value) { m_snsTopicSinkConfigurationHasBeenSet = true; m_snsTopicSinkConfiguration = std::move(value); }

    /**
     * <p>The configuration settings for an SNS topic sink in a media insights pipeline
     * configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithSnsTopicSinkConfiguration(const SnsTopicSinkConfiguration& value) { SetSnsTopicSinkConfiguration(value); return *this;}

    /**
     * <p>The configuration settings for an SNS topic sink in a media insights pipeline
     * configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithSnsTopicSinkConfiguration(SnsTopicSinkConfiguration&& value) { SetSnsTopicSinkConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration settings for voice enhancement sink in a media insights
     * pipeline configuration element.</p>
     */
    inline const VoiceEnhancementSinkConfiguration& GetVoiceEnhancementSinkConfiguration() const{ return m_voiceEnhancementSinkConfiguration; }

    /**
     * <p>The configuration settings for voice enhancement sink in a media insights
     * pipeline configuration element.</p>
     */
    inline bool VoiceEnhancementSinkConfigurationHasBeenSet() const { return m_voiceEnhancementSinkConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings for voice enhancement sink in a media insights
     * pipeline configuration element.</p>
     */
    inline void SetVoiceEnhancementSinkConfiguration(const VoiceEnhancementSinkConfiguration& value) { m_voiceEnhancementSinkConfigurationHasBeenSet = true; m_voiceEnhancementSinkConfiguration = value; }

    /**
     * <p>The configuration settings for voice enhancement sink in a media insights
     * pipeline configuration element.</p>
     */
    inline void SetVoiceEnhancementSinkConfiguration(VoiceEnhancementSinkConfiguration&& value) { m_voiceEnhancementSinkConfigurationHasBeenSet = true; m_voiceEnhancementSinkConfiguration = std::move(value); }

    /**
     * <p>The configuration settings for voice enhancement sink in a media insights
     * pipeline configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithVoiceEnhancementSinkConfiguration(const VoiceEnhancementSinkConfiguration& value) { SetVoiceEnhancementSinkConfiguration(value); return *this;}

    /**
     * <p>The configuration settings for voice enhancement sink in a media insights
     * pipeline configuration element.</p>
     */
    inline MediaInsightsPipelineConfigurationElement& WithVoiceEnhancementSinkConfiguration(VoiceEnhancementSinkConfiguration&& value) { SetVoiceEnhancementSinkConfiguration(std::move(value)); return *this;}

  private:

    MediaInsightsPipelineConfigurationElementType m_type;
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
