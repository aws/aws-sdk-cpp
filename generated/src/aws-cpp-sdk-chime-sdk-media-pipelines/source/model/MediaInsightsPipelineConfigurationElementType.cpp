/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipelineConfigurationElementType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMediaPipelines
  {
    namespace Model
    {
      namespace MediaInsightsPipelineConfigurationElementTypeMapper
      {

        static const int AmazonTranscribeCallAnalyticsProcessor_HASH = HashingUtils::HashString("AmazonTranscribeCallAnalyticsProcessor");
        static const int VoiceAnalyticsProcessor_HASH = HashingUtils::HashString("VoiceAnalyticsProcessor");
        static const int AmazonTranscribeProcessor_HASH = HashingUtils::HashString("AmazonTranscribeProcessor");
        static const int KinesisDataStreamSink_HASH = HashingUtils::HashString("KinesisDataStreamSink");
        static const int LambdaFunctionSink_HASH = HashingUtils::HashString("LambdaFunctionSink");
        static const int SqsQueueSink_HASH = HashingUtils::HashString("SqsQueueSink");
        static const int SnsTopicSink_HASH = HashingUtils::HashString("SnsTopicSink");
        static const int S3RecordingSink_HASH = HashingUtils::HashString("S3RecordingSink");
        static const int VoiceEnhancementSink_HASH = HashingUtils::HashString("VoiceEnhancementSink");


        MediaInsightsPipelineConfigurationElementType GetMediaInsightsPipelineConfigurationElementTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AmazonTranscribeCallAnalyticsProcessor_HASH)
          {
            return MediaInsightsPipelineConfigurationElementType::AmazonTranscribeCallAnalyticsProcessor;
          }
          else if (hashCode == VoiceAnalyticsProcessor_HASH)
          {
            return MediaInsightsPipelineConfigurationElementType::VoiceAnalyticsProcessor;
          }
          else if (hashCode == AmazonTranscribeProcessor_HASH)
          {
            return MediaInsightsPipelineConfigurationElementType::AmazonTranscribeProcessor;
          }
          else if (hashCode == KinesisDataStreamSink_HASH)
          {
            return MediaInsightsPipelineConfigurationElementType::KinesisDataStreamSink;
          }
          else if (hashCode == LambdaFunctionSink_HASH)
          {
            return MediaInsightsPipelineConfigurationElementType::LambdaFunctionSink;
          }
          else if (hashCode == SqsQueueSink_HASH)
          {
            return MediaInsightsPipelineConfigurationElementType::SqsQueueSink;
          }
          else if (hashCode == SnsTopicSink_HASH)
          {
            return MediaInsightsPipelineConfigurationElementType::SnsTopicSink;
          }
          else if (hashCode == S3RecordingSink_HASH)
          {
            return MediaInsightsPipelineConfigurationElementType::S3RecordingSink;
          }
          else if (hashCode == VoiceEnhancementSink_HASH)
          {
            return MediaInsightsPipelineConfigurationElementType::VoiceEnhancementSink;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaInsightsPipelineConfigurationElementType>(hashCode);
          }

          return MediaInsightsPipelineConfigurationElementType::NOT_SET;
        }

        Aws::String GetNameForMediaInsightsPipelineConfigurationElementType(MediaInsightsPipelineConfigurationElementType enumValue)
        {
          switch(enumValue)
          {
          case MediaInsightsPipelineConfigurationElementType::NOT_SET:
            return {};
          case MediaInsightsPipelineConfigurationElementType::AmazonTranscribeCallAnalyticsProcessor:
            return "AmazonTranscribeCallAnalyticsProcessor";
          case MediaInsightsPipelineConfigurationElementType::VoiceAnalyticsProcessor:
            return "VoiceAnalyticsProcessor";
          case MediaInsightsPipelineConfigurationElementType::AmazonTranscribeProcessor:
            return "AmazonTranscribeProcessor";
          case MediaInsightsPipelineConfigurationElementType::KinesisDataStreamSink:
            return "KinesisDataStreamSink";
          case MediaInsightsPipelineConfigurationElementType::LambdaFunctionSink:
            return "LambdaFunctionSink";
          case MediaInsightsPipelineConfigurationElementType::SqsQueueSink:
            return "SqsQueueSink";
          case MediaInsightsPipelineConfigurationElementType::SnsTopicSink:
            return "SnsTopicSink";
          case MediaInsightsPipelineConfigurationElementType::S3RecordingSink:
            return "S3RecordingSink";
          case MediaInsightsPipelineConfigurationElementType::VoiceEnhancementSink:
            return "VoiceEnhancementSink";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaInsightsPipelineConfigurationElementTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
