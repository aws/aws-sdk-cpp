/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/VideoResolution.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMeetings
  {
    namespace Model
    {
      namespace VideoResolutionMapper
      {

        static const int None_HASH = HashingUtils::HashString("None");
        static const int HD_HASH = HashingUtils::HashString("HD");
        static const int FHD_HASH = HashingUtils::HashString("FHD");


        VideoResolution GetVideoResolutionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_HASH)
          {
            return VideoResolution::None;
          }
          else if (hashCode == HD_HASH)
          {
            return VideoResolution::HD;
          }
          else if (hashCode == FHD_HASH)
          {
            return VideoResolution::FHD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoResolution>(hashCode);
          }

          return VideoResolution::NOT_SET;
        }

        Aws::String GetNameForVideoResolution(VideoResolution enumValue)
        {
          switch(enumValue)
          {
          case VideoResolution::NOT_SET:
            return {};
          case VideoResolution::None:
            return "None";
          case VideoResolution::HD:
            return "HD";
          case VideoResolution::FHD:
            return "FHD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoResolutionMapper
    } // namespace Model
  } // namespace ChimeSDKMeetings
} // namespace Aws
