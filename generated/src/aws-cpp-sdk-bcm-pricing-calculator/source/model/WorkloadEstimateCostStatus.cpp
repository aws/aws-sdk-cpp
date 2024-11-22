/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/WorkloadEstimateCostStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMPricingCalculator
  {
    namespace Model
    {
      namespace WorkloadEstimateCostStatusMapper
      {

        static const int VALID_HASH = HashingUtils::HashString("VALID");
        static const int INVALID_HASH = HashingUtils::HashString("INVALID");
        static const int STALE_HASH = HashingUtils::HashString("STALE");


        WorkloadEstimateCostStatus GetWorkloadEstimateCostStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALID_HASH)
          {
            return WorkloadEstimateCostStatus::VALID;
          }
          else if (hashCode == INVALID_HASH)
          {
            return WorkloadEstimateCostStatus::INVALID;
          }
          else if (hashCode == STALE_HASH)
          {
            return WorkloadEstimateCostStatus::STALE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkloadEstimateCostStatus>(hashCode);
          }

          return WorkloadEstimateCostStatus::NOT_SET;
        }

        Aws::String GetNameForWorkloadEstimateCostStatus(WorkloadEstimateCostStatus enumValue)
        {
          switch(enumValue)
          {
          case WorkloadEstimateCostStatus::NOT_SET:
            return {};
          case WorkloadEstimateCostStatus::VALID:
            return "VALID";
          case WorkloadEstimateCostStatus::INVALID:
            return "INVALID";
          case WorkloadEstimateCostStatus::STALE:
            return "STALE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkloadEstimateCostStatusMapper
    } // namespace Model
  } // namespace BCMPricingCalculator
} // namespace Aws
