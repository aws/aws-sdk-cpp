/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BatchDeleteBillScenarioUsageModificationErrorCode.h>
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
      namespace BatchDeleteBillScenarioUsageModificationErrorCodeMapper
      {

        static const int BAD_REQUEST_HASH = HashingUtils::HashString("BAD_REQUEST");
        static const int CONFLICT_HASH = HashingUtils::HashString("CONFLICT");
        static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVER_ERROR");


        BatchDeleteBillScenarioUsageModificationErrorCode GetBatchDeleteBillScenarioUsageModificationErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BAD_REQUEST_HASH)
          {
            return BatchDeleteBillScenarioUsageModificationErrorCode::BAD_REQUEST;
          }
          else if (hashCode == CONFLICT_HASH)
          {
            return BatchDeleteBillScenarioUsageModificationErrorCode::CONFLICT;
          }
          else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
          {
            return BatchDeleteBillScenarioUsageModificationErrorCode::INTERNAL_SERVER_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchDeleteBillScenarioUsageModificationErrorCode>(hashCode);
          }

          return BatchDeleteBillScenarioUsageModificationErrorCode::NOT_SET;
        }

        Aws::String GetNameForBatchDeleteBillScenarioUsageModificationErrorCode(BatchDeleteBillScenarioUsageModificationErrorCode enumValue)
        {
          switch(enumValue)
          {
          case BatchDeleteBillScenarioUsageModificationErrorCode::NOT_SET:
            return {};
          case BatchDeleteBillScenarioUsageModificationErrorCode::BAD_REQUEST:
            return "BAD_REQUEST";
          case BatchDeleteBillScenarioUsageModificationErrorCode::CONFLICT:
            return "CONFLICT";
          case BatchDeleteBillScenarioUsageModificationErrorCode::INTERNAL_SERVER_ERROR:
            return "INTERNAL_SERVER_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchDeleteBillScenarioUsageModificationErrorCodeMapper
    } // namespace Model
  } // namespace BCMPricingCalculator
} // namespace Aws
