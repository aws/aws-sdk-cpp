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

        static constexpr uint32_t AmazonTranscribeCallAnalyticsProcessor_HASH = ConstExprHashingUtils::HashString("AmazonTranscribeCallAnalyticsProcessor");
        static constexpr uint32_t VoiceAnalyticsProcessor_HASH = ConstExprHashingUtils::HashString("VoiceAnalyticsProcessor");
        static constexpr uint32_t AmazonTranscribeProcessor_HASH = ConstExprHashingUtils::HashString("AmazonTranscribeProcessor");
        static constexpr uint32_t KinesisDataStreamSink_HASH = ConstExprHashingUtils::HashString("KinesisDataStreamSink");
        static constexpr uint32_t LambdaFunctionSink_HASH = ConstExprHashingUtils::HashString("LambdaFunctionSink");
        static constexpr uint32_t SqsQueueSink_HASH = ConstExprHashingUtils::HashString("SqsQueueSink");
        static constexpr uint32_t SnsTopicSink_HASH = ConstExprHashingUtils::HashString("SnsTopicSink");
        static constexpr uint32_t S3RecordingSink_HASH = ConstExprHashingUtils::HashString("S3RecordingSink");
        static constexpr uint32_t VoiceEnhancementSink_HASH = ConstExprHashingUtils::HashString("VoiceEnhancementSink");


        MediaInsightsPipelineConfigurationElementType GetMediaInsightsPipelineConfigurationElementTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
