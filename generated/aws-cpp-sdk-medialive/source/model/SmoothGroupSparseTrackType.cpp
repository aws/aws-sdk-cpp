/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SmoothGroupSparseTrackType.h>
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
      namespace SmoothGroupSparseTrackTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SCTE_35_HASH = HashingUtils::HashString("SCTE_35");
        static const int SCTE_35_WITHOUT_SEGMENTATION_HASH = HashingUtils::HashString("SCTE_35_WITHOUT_SEGMENTATION");


        SmoothGroupSparseTrackType GetSmoothGroupSparseTrackTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return SmoothGroupSparseTrackType::NONE;
          }
          else if (hashCode == SCTE_35_HASH)
          {
            return SmoothGroupSparseTrackType::SCTE_35;
          }
          else if (hashCode == SCTE_35_WITHOUT_SEGMENTATION_HASH)
          {
            return SmoothGroupSparseTrackType::SCTE_35_WITHOUT_SEGMENTATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SmoothGroupSparseTrackType>(hashCode);
          }

          return SmoothGroupSparseTrackType::NOT_SET;
        }

        Aws::String GetNameForSmoothGroupSparseTrackType(SmoothGroupSparseTrackType enumValue)
        {
          switch(enumValue)
          {
          case SmoothGroupSparseTrackType::NONE:
            return "NONE";
          case SmoothGroupSparseTrackType::SCTE_35:
            return "SCTE_35";
          case SmoothGroupSparseTrackType::SCTE_35_WITHOUT_SEGMENTATION:
            return "SCTE_35_WITHOUT_SEGMENTATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SmoothGroupSparseTrackTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
