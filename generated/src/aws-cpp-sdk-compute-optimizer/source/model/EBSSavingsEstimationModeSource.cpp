/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/EBSSavingsEstimationModeSource.h>
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
      namespace EBSSavingsEstimationModeSourceMapper
      {

        static const int PublicPricing_HASH = HashingUtils::HashString("PublicPricing");
        static const int CostExplorerRightsizing_HASH = HashingUtils::HashString("CostExplorerRightsizing");
        static const int CostOptimizationHub_HASH = HashingUtils::HashString("CostOptimizationHub");


        EBSSavingsEstimationModeSource GetEBSSavingsEstimationModeSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PublicPricing_HASH)
          {
            return EBSSavingsEstimationModeSource::PublicPricing;
          }
          else if (hashCode == CostExplorerRightsizing_HASH)
          {
            return EBSSavingsEstimationModeSource::CostExplorerRightsizing;
          }
          else if (hashCode == CostOptimizationHub_HASH)
          {
            return EBSSavingsEstimationModeSource::CostOptimizationHub;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EBSSavingsEstimationModeSource>(hashCode);
          }

          return EBSSavingsEstimationModeSource::NOT_SET;
        }

        Aws::String GetNameForEBSSavingsEstimationModeSource(EBSSavingsEstimationModeSource enumValue)
        {
          switch(enumValue)
          {
          case EBSSavingsEstimationModeSource::NOT_SET:
            return {};
          case EBSSavingsEstimationModeSource::PublicPricing:
            return "PublicPricing";
          case EBSSavingsEstimationModeSource::CostExplorerRightsizing:
            return "CostExplorerRightsizing";
          case EBSSavingsEstimationModeSource::CostOptimizationHub:
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

      } // namespace EBSSavingsEstimationModeSourceMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
