/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/MediaUriType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideo
  {
    namespace Model
    {
      namespace MediaUriTypeMapper
      {

        static const int RTSP_URI_HASH = HashingUtils::HashString("RTSP_URI");
        static const int FILE_URI_HASH = HashingUtils::HashString("FILE_URI");


        MediaUriType GetMediaUriTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RTSP_URI_HASH)
          {
            return MediaUriType::RTSP_URI;
          }
          else if (hashCode == FILE_URI_HASH)
          {
            return MediaUriType::FILE_URI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaUriType>(hashCode);
          }

          return MediaUriType::NOT_SET;
        }

        Aws::String GetNameForMediaUriType(MediaUriType enumValue)
        {
          switch(enumValue)
          {
          case MediaUriType::RTSP_URI:
            return "RTSP_URI";
          case MediaUriType::FILE_URI:
            return "FILE_URI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaUriTypeMapper
    } // namespace Model
  } // namespace KinesisVideo
} // namespace Aws
