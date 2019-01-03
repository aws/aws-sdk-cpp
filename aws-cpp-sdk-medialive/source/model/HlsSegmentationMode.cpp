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

#include <aws/medialive/model/HlsSegmentationMode.h>
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
      namespace HlsSegmentationModeMapper
      {

        static const int USE_INPUT_SEGMENTATION_HASH = HashingUtils::HashString("USE_INPUT_SEGMENTATION");
        static const int USE_SEGMENT_DURATION_HASH = HashingUtils::HashString("USE_SEGMENT_DURATION");


        HlsSegmentationMode GetHlsSegmentationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USE_INPUT_SEGMENTATION_HASH)
          {
            return HlsSegmentationMode::USE_INPUT_SEGMENTATION;
          }
          else if (hashCode == USE_SEGMENT_DURATION_HASH)
          {
            return HlsSegmentationMode::USE_SEGMENT_DURATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsSegmentationMode>(hashCode);
          }

          return HlsSegmentationMode::NOT_SET;
        }

        Aws::String GetNameForHlsSegmentationMode(HlsSegmentationMode enumValue)
        {
          switch(enumValue)
          {
          case HlsSegmentationMode::USE_INPUT_SEGMENTATION:
            return "USE_INPUT_SEGMENTATION";
          case HlsSegmentationMode::USE_SEGMENT_DURATION:
            return "USE_SEGMENT_DURATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsSegmentationModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
