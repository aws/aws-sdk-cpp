/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/VideoFillMode.h>
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
      namespace VideoFillModeMapper
      {

        static const int FILL_HASH = HashingUtils::HashString("FILL");
        static const int COVER_HASH = HashingUtils::HashString("COVER");
        static const int CONTAIN_HASH = HashingUtils::HashString("CONTAIN");


        VideoFillMode GetVideoFillModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILL_HASH)
          {
            return VideoFillMode::FILL;
          }
          else if (hashCode == COVER_HASH)
          {
            return VideoFillMode::COVER;
          }
          else if (hashCode == CONTAIN_HASH)
          {
            return VideoFillMode::CONTAIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoFillMode>(hashCode);
          }

          return VideoFillMode::NOT_SET;
        }

        Aws::String GetNameForVideoFillMode(VideoFillMode enumValue)
        {
          switch(enumValue)
          {
          case VideoFillMode::NOT_SET:
            return {};
          case VideoFillMode::FILL:
            return "FILL";
          case VideoFillMode::COVER:
            return "COVER";
          case VideoFillMode::CONTAIN:
            return "CONTAIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoFillModeMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
