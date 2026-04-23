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

#include <aws/medialive/model/VideoSelectorColorSpaceUsage.h>
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
      namespace VideoSelectorColorSpaceUsageMapper
      {

        static const int FALLBACK_HASH = HashingUtils::HashString("FALLBACK");
        static const int FORCE_HASH = HashingUtils::HashString("FORCE");


        VideoSelectorColorSpaceUsage GetVideoSelectorColorSpaceUsageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FALLBACK_HASH)
          {
            return VideoSelectorColorSpaceUsage::FALLBACK;
          }
          else if (hashCode == FORCE_HASH)
          {
            return VideoSelectorColorSpaceUsage::FORCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoSelectorColorSpaceUsage>(hashCode);
          }

          return VideoSelectorColorSpaceUsage::NOT_SET;
        }

        Aws::String GetNameForVideoSelectorColorSpaceUsage(VideoSelectorColorSpaceUsage enumValue)
        {
          switch(enumValue)
          {
          case VideoSelectorColorSpaceUsage::FALLBACK:
            return "FALLBACK";
          case VideoSelectorColorSpaceUsage::FORCE:
            return "FORCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoSelectorColorSpaceUsageMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
