/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ImageFormat.h>
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
      namespace ImageFormatMapper
      {

        static const int png_HASH = HashingUtils::HashString("png");
        static const int jpeg_HASH = HashingUtils::HashString("jpeg");
        static const int gif_HASH = HashingUtils::HashString("gif");
        static const int webp_HASH = HashingUtils::HashString("webp");


        ImageFormat GetImageFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == png_HASH)
          {
            return ImageFormat::png;
          }
          else if (hashCode == jpeg_HASH)
          {
            return ImageFormat::jpeg;
          }
          else if (hashCode == gif_HASH)
          {
            return ImageFormat::gif;
          }
          else if (hashCode == webp_HASH)
          {
            return ImageFormat::webp;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageFormat>(hashCode);
          }

          return ImageFormat::NOT_SET;
        }

        Aws::String GetNameForImageFormat(ImageFormat enumValue)
        {
          switch(enumValue)
          {
          case ImageFormat::NOT_SET:
            return {};
          case ImageFormat::png:
            return "png";
          case ImageFormat::jpeg:
            return "jpeg";
          case ImageFormat::gif:
            return "gif";
          case ImageFormat::webp:
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

      } // namespace ImageFormatMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
