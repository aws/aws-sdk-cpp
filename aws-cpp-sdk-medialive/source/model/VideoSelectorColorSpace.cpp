/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/medialive/model/VideoSelectorColorSpace.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace VideoSelectorColorSpaceMapper
      {

        static const int FOLLOW_HASH = HashingUtils::HashString("FOLLOW");
        static const int REC_601_HASH = HashingUtils::HashString("REC_601");
        static const int REC_709_HASH = HashingUtils::HashString("REC_709");


        VideoSelectorColorSpace GetVideoSelectorColorSpaceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOLLOW_HASH)
          {
            return VideoSelectorColorSpace::FOLLOW;
          }
          else if (hashCode == REC_601_HASH)
          {
            return VideoSelectorColorSpace::REC_601;
          }
          else if (hashCode == REC_709_HASH)
          {
            return VideoSelectorColorSpace::REC_709;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoSelectorColorSpace>(hashCode);
          }

          return VideoSelectorColorSpace::NOT_SET;
        }

        Aws::String GetNameForVideoSelectorColorSpace(VideoSelectorColorSpace enumValue)
        {
          switch(enumValue)
          {
          case VideoSelectorColorSpace::FOLLOW:
            return "FOLLOW";
          case VideoSelectorColorSpace::REC_601:
            return "REC_601";
          case VideoSelectorColorSpace::REC_709:
            return "REC_709";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoSelectorColorSpaceMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
