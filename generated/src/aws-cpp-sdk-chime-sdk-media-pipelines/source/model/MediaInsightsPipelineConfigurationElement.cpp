/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipelineConfigurationElement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

MediaInsightsPipelineConfigurationElement::MediaInsightsPipelineConfigurationElement() : 
    m_type(MediaInsightsPipelineConfigurationElementType::NOT_SET),
    m_typeHasBeenSet(false),
    m_amazonTranscribeCallAnalyticsProcessorConfigurationHasBeenSet(false),
    m_amazonTranscribeProcessorConfigurationHasBeenSet(false),
    m_kinesisDataStreamSinkConfigurationHasBeenSet(false),
    m_s3RecordingSinkConfigurationHasBeenSet(false),
    m_voiceAnalyticsProcessorConfigurationHasBeenSet(false),
    m_lambdaFunctionSinkConfigurationHasBeenSet(false),
    m_sqsQueueSinkConfigurationHasBeenSet(false),
    m_snsTopicSinkConfigurationHasBeenSet(false),
    m_voiceEnhancementSinkConfigurationHasBeenSet(false)
{
}

MediaInsightsPipelineConfigurationElement::MediaInsightsPipelineConfigurationElement(JsonView jsonValue) : 
    m_type(MediaInsightsPipelineConfigurationElementType::NOT_SET),
    m_typeHasBeenSet(false),
    m_amazonTranscribeCallAnalyticsProcessorConfigurationHasBeenSet(false),
    m_amazonTranscribeProcessorConfigurationHasBeenSet(false),
    m_kinesisDataStreamSinkConfigurationHasBeenSet(false),
    m_s3RecordingSinkConfigurationHasBeenSet(false),
    m_voiceAnalyticsProcessorConfigurationHasBeenSet(false),
    m_lambdaFunctionSinkConfigurationHasBeenSet(false),
    m_sqsQueueSinkConfigurationHasBeenSet(false),
    m_snsTopicSinkConfigurationHasBeenSet(false),
    m_voiceEnhancementSinkConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

MediaInsightsPipelineConfigurationElement& MediaInsightsPipelineConfigurationElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = MediaInsightsPipelineConfigurationElementTypeMapper::GetMediaInsightsPipelineConfigurationElementTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmazonTranscribeCallAnalyticsProcessorConfiguration"))
  {
    m_amazonTranscribeCallAnalyticsProcessorConfiguration = jsonValue.GetObject("AmazonTranscribeCallAnalyticsProcessorConfiguration");

    m_amazonTranscribeCallAnalyticsProcessorConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmazonTranscribeProcessorConfiguration"))
  {
    m_amazonTranscribeProcessorConfiguration = jsonValue.GetObject("AmazonTranscribeProcessorConfiguration");

    m_amazonTranscribeProcessorConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisDataStreamSinkConfiguration"))
  {
    m_kinesisDataStreamSinkConfiguration = jsonValue.GetObject("KinesisDataStreamSinkConfiguration");

    m_kinesisDataStreamSinkConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3RecordingSinkConfiguration"))
  {
    m_s3RecordingSinkConfiguration = jsonValue.GetObject("S3RecordingSinkConfiguration");

    m_s3RecordingSinkConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceAnalyticsProcessorConfiguration"))
  {
    m_voiceAnalyticsProcessorConfiguration = jsonValue.GetObject("VoiceAnalyticsProcessorConfiguration");

    m_voiceAnalyticsProcessorConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LambdaFunctionSinkConfiguration"))
  {
    m_lambdaFunctionSinkConfiguration = jsonValue.GetObject("LambdaFunctionSinkConfiguration");

    m_lambdaFunctionSinkConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqsQueueSinkConfiguration"))
  {
    m_sqsQueueSinkConfiguration = jsonValue.GetObject("SqsQueueSinkConfiguration");

    m_sqsQueueSinkConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsTopicSinkConfiguration"))
  {
    m_snsTopicSinkConfiguration = jsonValue.GetObject("SnsTopicSinkConfiguration");

    m_snsTopicSinkConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceEnhancementSinkConfiguration"))
  {
    m_voiceEnhancementSinkConfiguration = jsonValue.GetObject("VoiceEnhancementSinkConfiguration");

    m_voiceEnhancementSinkConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaInsightsPipelineConfigurationElement::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", MediaInsightsPipelineConfigurationElementTypeMapper::GetNameForMediaInsightsPipelineConfigurationElementType(m_type));
  }

  if(m_amazonTranscribeCallAnalyticsProcessorConfigurationHasBeenSet)
  {
   payload.WithObject("AmazonTranscribeCallAnalyticsProcessorConfiguration", m_amazonTranscribeCallAnalyticsProcessorConfiguration.Jsonize());

  }

  if(m_amazonTranscribeProcessorConfigurationHasBeenSet)
  {
   payload.WithObject("AmazonTranscribeProcessorConfiguration", m_amazonTranscribeProcessorConfiguration.Jsonize());

  }

  if(m_kinesisDataStreamSinkConfigurationHasBeenSet)
  {
   payload.WithObject("KinesisDataStreamSinkConfiguration", m_kinesisDataStreamSinkConfiguration.Jsonize());

  }

  if(m_s3RecordingSinkConfigurationHasBeenSet)
  {
   payload.WithObject("S3RecordingSinkConfiguration", m_s3RecordingSinkConfiguration.Jsonize());

  }

  if(m_voiceAnalyticsProcessorConfigurationHasBeenSet)
  {
   payload.WithObject("VoiceAnalyticsProcessorConfiguration", m_voiceAnalyticsProcessorConfiguration.Jsonize());

  }

  if(m_lambdaFunctionSinkConfigurationHasBeenSet)
  {
   payload.WithObject("LambdaFunctionSinkConfiguration", m_lambdaFunctionSinkConfiguration.Jsonize());

  }

  if(m_sqsQueueSinkConfigurationHasBeenSet)
  {
   payload.WithObject("SqsQueueSinkConfiguration", m_sqsQueueSinkConfiguration.Jsonize());

  }

  if(m_snsTopicSinkConfigurationHasBeenSet)
  {
   payload.WithObject("SnsTopicSinkConfiguration", m_snsTopicSinkConfiguration.Jsonize());

  }

  if(m_voiceEnhancementSinkConfigurationHasBeenSet)
  {
   payload.WithObject("VoiceEnhancementSinkConfiguration", m_voiceEnhancementSinkConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
