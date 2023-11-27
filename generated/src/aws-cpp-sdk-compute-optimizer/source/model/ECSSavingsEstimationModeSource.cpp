/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ECSSavingsEstimationModeSource.h>
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
      namespace ECSSavingsEstimationModeSourceMapper
      {

        static const int PublicPricing_HASH = HashingUtils::HashString("PublicPricing");
        static const int CostExplorerRightsizing_HASH = HashingUtils::HashString("CostExplorerRightsizing");
        static const int CostOptimizationHub_HASH = HashingUtils::HashString("CostOptimizationHub");


        ECSSavingsEstimationModeSource GetECSSavingsEstimationModeSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PublicPricing_HASH)
          {
            return ECSSavingsEstimationModeSource::PublicPricing;
          }
          else if (hashCode == CostExplorerRightsizing_HASH)
          {
            return ECSSavingsEstimationModeSource::CostExplorerRightsizing;
          }
          else if (hashCode == CostOptimizationHub_HASH)
          {
            return ECSSavingsEstimationModeSource::CostOptimizationHub;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ECSSavingsEstimationModeSource>(hashCode);
          }

          return ECSSavingsEstimationModeSource::NOT_SET;
        }

        Aws::String GetNameForECSSavingsEstimationModeSource(ECSSavingsEstimationModeSource enumValue)
        {
          switch(enumValue)
          {
          case ECSSavingsEstimationModeSource::NOT_SET:
            return {};
          case ECSSavingsEstimationModeSource::PublicPricing:
            return "PublicPricing";
          case ECSSavingsEstimationModeSource::CostExplorerRightsizing:
            return "CostExplorerRightsizing";
          case ECSSavingsEstimationModeSource::CostOptimizationHub:
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

      } // namespace ECSSavingsEstimationModeSourceMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
