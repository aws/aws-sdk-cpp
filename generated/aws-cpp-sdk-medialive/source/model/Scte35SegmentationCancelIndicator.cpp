/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte35SegmentationCancelIndicator.h>
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
      namespace Scte35SegmentationCancelIndicatorMapper
      {

        static const int SEGMENTATION_EVENT_NOT_CANCELED_HASH = HashingUtils::HashString("SEGMENTATION_EVENT_NOT_CANCELED");
        static const int SEGMENTATION_EVENT_CANCELED_HASH = HashingUtils::HashString("SEGMENTATION_EVENT_CANCELED");


        Scte35SegmentationCancelIndicator GetScte35SegmentationCancelIndicatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEGMENTATION_EVENT_NOT_CANCELED_HASH)
          {
            return Scte35SegmentationCancelIndicator::SEGMENTATION_EVENT_NOT_CANCELED;
          }
          else if (hashCode == SEGMENTATION_EVENT_CANCELED_HASH)
          {
            return Scte35SegmentationCancelIndicator::SEGMENTATION_EVENT_CANCELED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Scte35SegmentationCancelIndicator>(hashCode);
          }

          return Scte35SegmentationCancelIndicator::NOT_SET;
        }

        Aws::String GetNameForScte35SegmentationCancelIndicator(Scte35SegmentationCancelIndicator enumValue)
        {
          switch(enumValue)
          {
          case Scte35SegmentationCancelIndicator::SEGMENTATION_EVENT_NOT_CANCELED:
            return "SEGMENTATION_EVENT_NOT_CANCELED";
          case Scte35SegmentationCancelIndicator::SEGMENTATION_EVENT_CANCELED:
            return "SEGMENTATION_EVENT_CANCELED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Scte35SegmentationCancelIndicatorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
