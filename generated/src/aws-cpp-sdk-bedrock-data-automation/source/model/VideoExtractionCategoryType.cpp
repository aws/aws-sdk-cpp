/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/VideoExtractionCategoryType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockDataAutomation
  {
    namespace Model
    {
      namespace VideoExtractionCategoryTypeMapper
      {

        static const int CONTENT_MODERATION_HASH = HashingUtils::HashString("CONTENT_MODERATION");
        static const int TEXT_DETECTION_HASH = HashingUtils::HashString("TEXT_DETECTION");
        static const int TRANSCRIPT_HASH = HashingUtils::HashString("TRANSCRIPT");
        static const int LOGOS_HASH = HashingUtils::HashString("LOGOS");


        VideoExtractionCategoryType GetVideoExtractionCategoryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTENT_MODERATION_HASH)
          {
            return VideoExtractionCategoryType::CONTENT_MODERATION;
          }
          else if (hashCode == TEXT_DETECTION_HASH)
          {
            return VideoExtractionCategoryType::TEXT_DETECTION;
          }
          else if (hashCode == TRANSCRIPT_HASH)
          {
            return VideoExtractionCategoryType::TRANSCRIPT;
          }
          else if (hashCode == LOGOS_HASH)
          {
            return VideoExtractionCategoryType::LOGOS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoExtractionCategoryType>(hashCode);
          }

          return VideoExtractionCategoryType::NOT_SET;
        }

        Aws::String GetNameForVideoExtractionCategoryType(VideoExtractionCategoryType enumValue)
        {
          switch(enumValue)
          {
          case VideoExtractionCategoryType::NOT_SET:
            return {};
          case VideoExtractionCategoryType::CONTENT_MODERATION:
            return "CONTENT_MODERATION";
          case VideoExtractionCategoryType::TEXT_DETECTION:
            return "TEXT_DETECTION";
          case VideoExtractionCategoryType::TRANSCRIPT:
            return "TRANSCRIPT";
          case VideoExtractionCategoryType::LOGOS:
            return "LOGOS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoExtractionCategoryTypeMapper
    } // namespace Model
  } // namespace BedrockDataAutomation
} // namespace Aws
