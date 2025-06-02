/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSEstimatedMonthlyVolumeIOPsCostVariation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace RDSEstimatedMonthlyVolumeIOPsCostVariationMapper
      {

        static const int None_HASH = HashingUtils::HashString("None");
        static const int Low_HASH = HashingUtils::HashString("Low");
        static const int Medium_HASH = HashingUtils::HashString("Medium");
        static const int High_HASH = HashingUtils::HashString("High");


        RDSEstimatedMonthlyVolumeIOPsCostVariation GetRDSEstimatedMonthlyVolumeIOPsCostVariationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_HASH)
          {
            return RDSEstimatedMonthlyVolumeIOPsCostVariation::None;
          }
          else if (hashCode == Low_HASH)
          {
            return RDSEstimatedMonthlyVolumeIOPsCostVariation::Low;
          }
          else if (hashCode == Medium_HASH)
          {
            return RDSEstimatedMonthlyVolumeIOPsCostVariation::Medium;
          }
          else if (hashCode == High_HASH)
          {
            return RDSEstimatedMonthlyVolumeIOPsCostVariation::High;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RDSEstimatedMonthlyVolumeIOPsCostVariation>(hashCode);
          }

          return RDSEstimatedMonthlyVolumeIOPsCostVariation::NOT_SET;
        }

        Aws::String GetNameForRDSEstimatedMonthlyVolumeIOPsCostVariation(RDSEstimatedMonthlyVolumeIOPsCostVariation enumValue)
        {
          switch(enumValue)
          {
          case RDSEstimatedMonthlyVolumeIOPsCostVariation::NOT_SET:
            return {};
          case RDSEstimatedMonthlyVolumeIOPsCostVariation::None:
            return "None";
          case RDSEstimatedMonthlyVolumeIOPsCostVariation::Low:
            return "Low";
          case RDSEstimatedMonthlyVolumeIOPsCostVariation::Medium:
            return "Medium";
          case RDSEstimatedMonthlyVolumeIOPsCostVariation::High:
            return "High";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RDSEstimatedMonthlyVolumeIOPsCostVariationMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
