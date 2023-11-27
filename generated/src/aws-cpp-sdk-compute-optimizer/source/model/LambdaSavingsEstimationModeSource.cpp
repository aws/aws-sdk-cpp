/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LambdaSavingsEstimationModeSource.h>
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
      namespace LambdaSavingsEstimationModeSourceMapper
      {

        static const int PublicPricing_HASH = HashingUtils::HashString("PublicPricing");
        static const int CostExplorerRightsizing_HASH = HashingUtils::HashString("CostExplorerRightsizing");
        static const int CostOptimizationHub_HASH = HashingUtils::HashString("CostOptimizationHub");


        LambdaSavingsEstimationModeSource GetLambdaSavingsEstimationModeSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PublicPricing_HASH)
          {
            return LambdaSavingsEstimationModeSource::PublicPricing;
          }
          else if (hashCode == CostExplorerRightsizing_HASH)
          {
            return LambdaSavingsEstimationModeSource::CostExplorerRightsizing;
          }
          else if (hashCode == CostOptimizationHub_HASH)
          {
            return LambdaSavingsEstimationModeSource::CostOptimizationHub;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LambdaSavingsEstimationModeSource>(hashCode);
          }

          return LambdaSavingsEstimationModeSource::NOT_SET;
        }

        Aws::String GetNameForLambdaSavingsEstimationModeSource(LambdaSavingsEstimationModeSource enumValue)
        {
          switch(enumValue)
          {
          case LambdaSavingsEstimationModeSource::NOT_SET:
            return {};
          case LambdaSavingsEstimationModeSource::PublicPricing:
            return "PublicPricing";
          case LambdaSavingsEstimationModeSource::CostExplorerRightsizing:
            return "CostExplorerRightsizing";
          case LambdaSavingsEstimationModeSource::CostOptimizationHub:
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

      } // namespace LambdaSavingsEstimationModeSourceMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
