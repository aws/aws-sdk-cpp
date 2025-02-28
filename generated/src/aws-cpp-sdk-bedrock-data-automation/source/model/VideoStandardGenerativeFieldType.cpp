/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/VideoStandardGenerativeFieldType.h>
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
      namespace VideoStandardGenerativeFieldTypeMapper
      {

        static const int VIDEO_SUMMARY_HASH = HashingUtils::HashString("VIDEO_SUMMARY");
        static const int IAB_HASH = HashingUtils::HashString("IAB");
        static const int CHAPTER_SUMMARY_HASH = HashingUtils::HashString("CHAPTER_SUMMARY");


        VideoStandardGenerativeFieldType GetVideoStandardGenerativeFieldTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VIDEO_SUMMARY_HASH)
          {
            return VideoStandardGenerativeFieldType::VIDEO_SUMMARY;
          }
          else if (hashCode == IAB_HASH)
          {
            return VideoStandardGenerativeFieldType::IAB;
          }
          else if (hashCode == CHAPTER_SUMMARY_HASH)
          {
            return VideoStandardGenerativeFieldType::CHAPTER_SUMMARY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoStandardGenerativeFieldType>(hashCode);
          }

          return VideoStandardGenerativeFieldType::NOT_SET;
        }

        Aws::String GetNameForVideoStandardGenerativeFieldType(VideoStandardGenerativeFieldType enumValue)
        {
          switch(enumValue)
          {
          case VideoStandardGenerativeFieldType::NOT_SET:
            return {};
          case VideoStandardGenerativeFieldType::VIDEO_SUMMARY:
            return "VIDEO_SUMMARY";
          case VideoStandardGenerativeFieldType::IAB:
            return "IAB";
          case VideoStandardGenerativeFieldType::CHAPTER_SUMMARY:
            return "CHAPTER_SUMMARY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoStandardGenerativeFieldTypeMapper
    } // namespace Model
  } // namespace BedrockDataAutomation
} // namespace Aws
