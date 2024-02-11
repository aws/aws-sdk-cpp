/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/InstanceSavingsEstimationModeSource.h>
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
      namespace InstanceSavingsEstimationModeSourceMapper
      {

        static const int PublicPricing_HASH = HashingUtils::HashString("PublicPricing");
        static const int CostExplorerRightsizing_HASH = HashingUtils::HashString("CostExplorerRightsizing");
        static const int CostOptimizationHub_HASH = HashingUtils::HashString("CostOptimizationHub");


        InstanceSavingsEstimationModeSource GetInstanceSavingsEstimationModeSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PublicPricing_HASH)
          {
            return InstanceSavingsEstimationModeSource::PublicPricing;
          }
          else if (hashCode == CostExplorerRightsizing_HASH)
          {
            return InstanceSavingsEstimationModeSource::CostExplorerRightsizing;
          }
          else if (hashCode == CostOptimizationHub_HASH)
          {
            return InstanceSavingsEstimationModeSource::CostOptimizationHub;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceSavingsEstimationModeSource>(hashCode);
          }

          return InstanceSavingsEstimationModeSource::NOT_SET;
        }

        Aws::String GetNameForInstanceSavingsEstimationModeSource(InstanceSavingsEstimationModeSource enumValue)
        {
          switch(enumValue)
          {
          case InstanceSavingsEstimationModeSource::NOT_SET:
            return {};
          case InstanceSavingsEstimationModeSource::PublicPricing:
            return "PublicPricing";
          case InstanceSavingsEstimationModeSource::CostExplorerRightsizing:
            return "CostExplorerRightsizing";
          case InstanceSavingsEstimationModeSource::CostOptimizationHub:
            return "CostOptimizationHub";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceSavingsEstimationModeSourceMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
