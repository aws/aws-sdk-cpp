/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BillEstimateStatus.h>
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
      namespace BillEstimateStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        BillEstimateStatus GetBillEstimateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return BillEstimateStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return BillEstimateStatus::COMPLETE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BillEstimateStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BillEstimateStatus>(hashCode);
          }

          return BillEstimateStatus::NOT_SET;
        }

        Aws::String GetNameForBillEstimateStatus(BillEstimateStatus enumValue)
        {
          switch(enumValue)
          {
          case BillEstimateStatus::NOT_SET:
            return {};
          case BillEstimateStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case BillEstimateStatus::COMPLETE:
            return "COMPLETE";
          case BillEstimateStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BillEstimateStatusMapper
    } // namespace Model
  } // namespace BCMPricingCalculator
} // namespace Aws
