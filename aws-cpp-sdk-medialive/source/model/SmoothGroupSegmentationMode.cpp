/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SmoothGroupSegmentationMode.h>
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
      namespace SmoothGroupSegmentationModeMapper
      {

        static const int USE_INPUT_SEGMENTATION_HASH = HashingUtils::HashString("USE_INPUT_SEGMENTATION");
        static const int USE_SEGMENT_DURATION_HASH = HashingUtils::HashString("USE_SEGMENT_DURATION");


        SmoothGroupSegmentationMode GetSmoothGroupSegmentationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USE_INPUT_SEGMENTATION_HASH)
          {
            return SmoothGroupSegmentationMode::USE_INPUT_SEGMENTATION;
          }
          else if (hashCode == USE_SEGMENT_DURATION_HASH)
          {
            return SmoothGroupSegmentationMode::USE_SEGMENT_DURATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SmoothGroupSegmentationMode>(hashCode);
          }

          return SmoothGroupSegmentationMode::NOT_SET;
        }

        Aws::String GetNameForSmoothGroupSegmentationMode(SmoothGroupSegmentationMode enumValue)
        {
          switch(enumValue)
          {
          case SmoothGroupSegmentationMode::USE_INPUT_SEGMENTATION:
            return "USE_INPUT_SEGMENTATION";
          case SmoothGroupSegmentationMode::USE_SEGMENT_DURATION:
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

      } // namespace SmoothGroupSegmentationModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
