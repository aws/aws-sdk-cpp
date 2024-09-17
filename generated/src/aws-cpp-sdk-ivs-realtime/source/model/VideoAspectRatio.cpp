/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/VideoAspectRatio.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivsrealtime
  {
    namespace Model
    {
      namespace VideoAspectRatioMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int VIDEO_HASH = HashingUtils::HashString("VIDEO");
        static const int SQUARE_HASH = HashingUtils::HashString("SQUARE");
        static const int PORTRAIT_HASH = HashingUtils::HashString("PORTRAIT");


        VideoAspectRatio GetVideoAspectRatioForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return VideoAspectRatio::AUTO;
          }
          else if (hashCode == VIDEO_HASH)
          {
            return VideoAspectRatio::VIDEO;
          }
          else if (hashCode == SQUARE_HASH)
          {
            return VideoAspectRatio::SQUARE;
          }
          else if (hashCode == PORTRAIT_HASH)
          {
            return VideoAspectRatio::PORTRAIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoAspectRatio>(hashCode);
          }

          return VideoAspectRatio::NOT_SET;
        }

        Aws::String GetNameForVideoAspectRatio(VideoAspectRatio enumValue)
        {
          switch(enumValue)
          {
          case VideoAspectRatio::NOT_SET:
            return {};
          case VideoAspectRatio::AUTO:
            return "AUTO";
          case VideoAspectRatio::VIDEO:
            return "VIDEO";
          case VideoAspectRatio::SQUARE:
            return "SQUARE";
          case VideoAspectRatio::PORTRAIT:
            return "PORTRAIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoAspectRatioMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
