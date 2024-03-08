/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/VideoMuxType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace VideoMuxTypeMapper
      {

        static const int VideoOnly_HASH = HashingUtils::HashString("VideoOnly");


        VideoMuxType GetVideoMuxTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VideoOnly_HASH)
          {
            return VideoMuxType::VideoOnly;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoMuxType>(hashCode);
          }

          return VideoMuxType::NOT_SET;
        }

        Aws::String GetNameForVideoMuxType(VideoMuxType enumValue)
        {
          switch(enumValue)
          {
          case VideoMuxType::NOT_SET:
            return {};
          case VideoMuxType::VideoOnly:
            return "VideoOnly";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoMuxTypeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
