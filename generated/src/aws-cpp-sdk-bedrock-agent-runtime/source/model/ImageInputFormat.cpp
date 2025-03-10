/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ImageInputFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentRuntime
  {
    namespace Model
    {
      namespace ImageInputFormatMapper
      {

        static const int png_HASH = HashingUtils::HashString("png");
        static const int jpeg_HASH = HashingUtils::HashString("jpeg");
        static const int gif_HASH = HashingUtils::HashString("gif");
        static const int webp_HASH = HashingUtils::HashString("webp");


        ImageInputFormat GetImageInputFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == png_HASH)
          {
            return ImageInputFormat::png;
          }
          else if (hashCode == jpeg_HASH)
          {
            return ImageInputFormat::jpeg;
          }
          else if (hashCode == gif_HASH)
          {
            return ImageInputFormat::gif;
          }
          else if (hashCode == webp_HASH)
          {
            return ImageInputFormat::webp;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageInputFormat>(hashCode);
          }

          return ImageInputFormat::NOT_SET;
        }

        Aws::String GetNameForImageInputFormat(ImageInputFormat enumValue)
        {
          switch(enumValue)
          {
          case ImageInputFormat::NOT_SET:
            return {};
          case ImageInputFormat::png:
            return "png";
          case ImageInputFormat::jpeg:
            return "jpeg";
          case ImageInputFormat::gif:
            return "gif";
          case ImageInputFormat::webp:
            return "webp";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageInputFormatMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
