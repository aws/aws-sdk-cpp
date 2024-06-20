/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSSavingsEstimationModeSource.h>
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
      namespace RDSSavingsEstimationModeSourceMapper
      {

        static const int PublicPricing_HASH = HashingUtils::HashString("PublicPricing");
        static const int CostExplorerRightsizing_HASH = HashingUtils::HashString("CostExplorerRightsizing");
        static const int CostOptimizationHub_HASH = HashingUtils::HashString("CostOptimizationHub");


        RDSSavingsEstimationModeSource GetRDSSavingsEstimationModeSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PublicPricing_HASH)
          {
            return RDSSavingsEstimationModeSource::PublicPricing;
          }
          else if (hashCode == CostExplorerRightsizing_HASH)
          {
            return RDSSavingsEstimationModeSource::CostExplorerRightsizing;
          }
          else if (hashCode == CostOptimizationHub_HASH)
          {
            return RDSSavingsEstimationModeSource::CostOptimizationHub;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RDSSavingsEstimationModeSource>(hashCode);
          }

          return RDSSavingsEstimationModeSource::NOT_SET;
        }

        Aws::String GetNameForRDSSavingsEstimationModeSource(RDSSavingsEstimationModeSource enumValue)
        {
          switch(enumValue)
          {
          case RDSSavingsEstimationModeSource::NOT_SET:
            return {};
          case RDSSavingsEstimationModeSource::PublicPricing:
            return "PublicPricing";
          case RDSSavingsEstimationModeSource::CostExplorerRightsizing:
            return "CostExplorerRightsizing";
          case RDSSavingsEstimationModeSource::CostOptimizationHub:
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

      } // namespace RDSSavingsEstimationModeSourceMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
