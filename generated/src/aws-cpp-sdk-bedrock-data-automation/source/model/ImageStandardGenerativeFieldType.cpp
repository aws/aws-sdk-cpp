/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/ImageStandardGenerativeFieldType.h>
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
      namespace ImageStandardGenerativeFieldTypeMapper
      {

        static const int IMAGE_SUMMARY_HASH = HashingUtils::HashString("IMAGE_SUMMARY");
        static const int IAB_HASH = HashingUtils::HashString("IAB");


        ImageStandardGenerativeFieldType GetImageStandardGenerativeFieldTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMAGE_SUMMARY_HASH)
          {
            return ImageStandardGenerativeFieldType::IMAGE_SUMMARY;
          }
          else if (hashCode == IAB_HASH)
          {
            return ImageStandardGenerativeFieldType::IAB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageStandardGenerativeFieldType>(hashCode);
          }

          return ImageStandardGenerativeFieldType::NOT_SET;
        }

        Aws::String GetNameForImageStandardGenerativeFieldType(ImageStandardGenerativeFieldType enumValue)
        {
          switch(enumValue)
          {
          case ImageStandardGenerativeFieldType::NOT_SET:
            return {};
          case ImageStandardGenerativeFieldType::IMAGE_SUMMARY:
            return "IMAGE_SUMMARY";
          case ImageStandardGenerativeFieldType::IAB:
            return "IAB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageStandardGenerativeFieldTypeMapper
    } // namespace Model
  } // namespace BedrockDataAutomation
} // namespace Aws
