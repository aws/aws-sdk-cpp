/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/ImageExtractionCategoryType.h>
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
      namespace ImageExtractionCategoryTypeMapper
      {

        static const int CONTENT_MODERATION_HASH = HashingUtils::HashString("CONTENT_MODERATION");
        static const int TEXT_DETECTION_HASH = HashingUtils::HashString("TEXT_DETECTION");
        static const int LOGOS_HASH = HashingUtils::HashString("LOGOS");


        ImageExtractionCategoryType GetImageExtractionCategoryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTENT_MODERATION_HASH)
          {
            return ImageExtractionCategoryType::CONTENT_MODERATION;
          }
          else if (hashCode == TEXT_DETECTION_HASH)
          {
            return ImageExtractionCategoryType::TEXT_DETECTION;
          }
          else if (hashCode == LOGOS_HASH)
          {
            return ImageExtractionCategoryType::LOGOS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageExtractionCategoryType>(hashCode);
          }

          return ImageExtractionCategoryType::NOT_SET;
        }

        Aws::String GetNameForImageExtractionCategoryType(ImageExtractionCategoryType enumValue)
        {
          switch(enumValue)
          {
          case ImageExtractionCategoryType::NOT_SET:
            return {};
          case ImageExtractionCategoryType::CONTENT_MODERATION:
            return "CONTENT_MODERATION";
          case ImageExtractionCategoryType::TEXT_DETECTION:
            return "TEXT_DETECTION";
          case ImageExtractionCategoryType::LOGOS:
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

      } // namespace ImageExtractionCategoryTypeMapper
    } // namespace Model
  } // namespace BedrockDataAutomation
} // namespace Aws
