/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BillScenarioStatus.h>
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
      namespace BillScenarioStatusMapper
      {

        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int LOCKED_HASH = HashingUtils::HashString("LOCKED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STALE_HASH = HashingUtils::HashString("STALE");


        BillScenarioStatus GetBillScenarioStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return BillScenarioStatus::READY;
          }
          else if (hashCode == LOCKED_HASH)
          {
            return BillScenarioStatus::LOCKED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BillScenarioStatus::FAILED;
          }
          else if (hashCode == STALE_HASH)
          {
            return BillScenarioStatus::STALE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BillScenarioStatus>(hashCode);
          }

          return BillScenarioStatus::NOT_SET;
        }

        Aws::String GetNameForBillScenarioStatus(BillScenarioStatus enumValue)
        {
          switch(enumValue)
          {
          case BillScenarioStatus::NOT_SET:
            return {};
          case BillScenarioStatus::READY:
            return "READY";
          case BillScenarioStatus::LOCKED:
            return "LOCKED";
          case BillScenarioStatus::FAILED:
            return "FAILED";
          case BillScenarioStatus::STALE:
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

      } // namespace BillScenarioStatusMapper
    } // namespace Model
  } // namespace BCMPricingCalculator
} // namespace Aws
