/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSCurrentInstancePerformanceRisk.h>
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
      namespace RDSCurrentInstancePerformanceRiskMapper
      {

        static const int VeryLow_HASH = HashingUtils::HashString("VeryLow");
        static const int Low_HASH = HashingUtils::HashString("Low");
        static const int Medium_HASH = HashingUtils::HashString("Medium");
        static const int High_HASH = HashingUtils::HashString("High");


        RDSCurrentInstancePerformanceRisk GetRDSCurrentInstancePerformanceRiskForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VeryLow_HASH)
          {
            return RDSCurrentInstancePerformanceRisk::VeryLow;
          }
          else if (hashCode == Low_HASH)
          {
            return RDSCurrentInstancePerformanceRisk::Low;
          }
          else if (hashCode == Medium_HASH)
          {
            return RDSCurrentInstancePerformanceRisk::Medium;
          }
          else if (hashCode == High_HASH)
          {
            return RDSCurrentInstancePerformanceRisk::High;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RDSCurrentInstancePerformanceRisk>(hashCode);
          }

          return RDSCurrentInstancePerformanceRisk::NOT_SET;
        }

        Aws::String GetNameForRDSCurrentInstancePerformanceRisk(RDSCurrentInstancePerformanceRisk enumValue)
        {
          switch(enumValue)
          {
          case RDSCurrentInstancePerformanceRisk::NOT_SET:
            return {};
          case RDSCurrentInstancePerformanceRisk::VeryLow:
            return "VeryLow";
          case RDSCurrentInstancePerformanceRisk::Low:
            return "Low";
          case RDSCurrentInstancePerformanceRisk::Medium:
            return "Medium";
          case RDSCurrentInstancePerformanceRisk::High:
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

      } // namespace RDSCurrentInstancePerformanceRiskMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
