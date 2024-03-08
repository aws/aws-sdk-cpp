/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/CurrentPerformanceRisk.h>
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
      namespace CurrentPerformanceRiskMapper
      {

        static const int VeryLow_HASH = HashingUtils::HashString("VeryLow");
        static const int Low_HASH = HashingUtils::HashString("Low");
        static const int Medium_HASH = HashingUtils::HashString("Medium");
        static const int High_HASH = HashingUtils::HashString("High");


        CurrentPerformanceRisk GetCurrentPerformanceRiskForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VeryLow_HASH)
          {
            return CurrentPerformanceRisk::VeryLow;
          }
          else if (hashCode == Low_HASH)
          {
            return CurrentPerformanceRisk::Low;
          }
          else if (hashCode == Medium_HASH)
          {
            return CurrentPerformanceRisk::Medium;
          }
          else if (hashCode == High_HASH)
          {
            return CurrentPerformanceRisk::High;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CurrentPerformanceRisk>(hashCode);
          }

          return CurrentPerformanceRisk::NOT_SET;
        }

        Aws::String GetNameForCurrentPerformanceRisk(CurrentPerformanceRisk enumValue)
        {
          switch(enumValue)
          {
          case CurrentPerformanceRisk::NOT_SET:
            return {};
          case CurrentPerformanceRisk::VeryLow:
            return "VeryLow";
          case CurrentPerformanceRisk::Low:
            return "Low";
          case CurrentPerformanceRisk::Medium:
            return "Medium";
          case CurrentPerformanceRisk::High:
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

      } // namespace CurrentPerformanceRiskMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
