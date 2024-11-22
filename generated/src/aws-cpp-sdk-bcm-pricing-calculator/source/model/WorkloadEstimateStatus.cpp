/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/WorkloadEstimateStatus.h>
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
      namespace WorkloadEstimateStatusMapper
      {

        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int VALID_HASH = HashingUtils::HashString("VALID");
        static const int INVALID_HASH = HashingUtils::HashString("INVALID");
        static const int ACTION_NEEDED_HASH = HashingUtils::HashString("ACTION_NEEDED");


        WorkloadEstimateStatus GetWorkloadEstimateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATING_HASH)
          {
            return WorkloadEstimateStatus::UPDATING;
          }
          else if (hashCode == VALID_HASH)
          {
            return WorkloadEstimateStatus::VALID;
          }
          else if (hashCode == INVALID_HASH)
          {
            return WorkloadEstimateStatus::INVALID;
          }
          else if (hashCode == ACTION_NEEDED_HASH)
          {
            return WorkloadEstimateStatus::ACTION_NEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkloadEstimateStatus>(hashCode);
          }

          return WorkloadEstimateStatus::NOT_SET;
        }

        Aws::String GetNameForWorkloadEstimateStatus(WorkloadEstimateStatus enumValue)
        {
          switch(enumValue)
          {
          case WorkloadEstimateStatus::NOT_SET:
            return {};
          case WorkloadEstimateStatus::UPDATING:
            return "UPDATING";
          case WorkloadEstimateStatus::VALID:
            return "VALID";
          case WorkloadEstimateStatus::INVALID:
            return "INVALID";
          case WorkloadEstimateStatus::ACTION_NEEDED:
            return "ACTION_NEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkloadEstimateStatusMapper
    } // namespace Model
  } // namespace BCMPricingCalculator
} // namespace Aws
