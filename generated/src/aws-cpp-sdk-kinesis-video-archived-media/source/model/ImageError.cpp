/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/ImageError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideoArchivedMedia
  {
    namespace Model
    {
      namespace ImageErrorMapper
      {

        static constexpr uint32_t NO_MEDIA_HASH = ConstExprHashingUtils::HashString("NO_MEDIA");
        static constexpr uint32_t MEDIA_ERROR_HASH = ConstExprHashingUtils::HashString("MEDIA_ERROR");


        ImageError GetImageErrorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_MEDIA_HASH)
          {
            return ImageError::NO_MEDIA;
          }
          else if (hashCode == MEDIA_ERROR_HASH)
          {
            return ImageError::MEDIA_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageError>(hashCode);
          }

          return ImageError::NOT_SET;
        }

        Aws::String GetNameForImageError(ImageError enumValue)
        {
          switch(enumValue)
          {
          case ImageError::NOT_SET:
            return {};
          case ImageError::NO_MEDIA:
            return "NO_MEDIA";
          case ImageError::MEDIA_ERROR:
            return "MEDIA_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageErrorMapper
    } // namespace Model
  } // namespace KinesisVideoArchivedMedia
} // namespace Aws
