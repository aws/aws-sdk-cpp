/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{
  enum class MediaInsightsPipelineConfigurationElementType
  {
    NOT_SET,
    AmazonTranscribeCallAnalyticsProcessor,
    VoiceAnalyticsProcessor,
    AmazonTranscribeProcessor,
    KinesisDataStreamSink,
    LambdaFunctionSink,
    SqsQueueSink,
    SnsTopicSink,
    S3RecordingSink,
    VoiceEnhancementSink
  };

namespace MediaInsightsPipelineConfigurationElementTypeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfigurationElementType GetMediaInsightsPipelineConfigurationElementTypeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForMediaInsightsPipelineConfigurationElementType(MediaInsightsPipelineConfigurationElementType value);
} // namespace MediaInsightsPipelineConfigurationElementTypeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
