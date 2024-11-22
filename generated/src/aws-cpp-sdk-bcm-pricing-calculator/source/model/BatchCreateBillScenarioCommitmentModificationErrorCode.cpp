/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BatchCreateBillScenarioCommitmentModificationErrorCode.h>
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
      namespace BatchCreateBillScenarioCommitmentModificationErrorCodeMapper
      {

        static const int CONFLICT_HASH = HashingUtils::HashString("CONFLICT");
        static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVER_ERROR");
        static const int INVALID_ACCOUNT_HASH = HashingUtils::HashString("INVALID_ACCOUNT");


        BatchCreateBillScenarioCommitmentModificationErrorCode GetBatchCreateBillScenarioCommitmentModificationErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONFLICT_HASH)
          {
            return BatchCreateBillScenarioCommitmentModificationErrorCode::CONFLICT;
          }
          else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
          {
            return BatchCreateBillScenarioCommitmentModificationErrorCode::INTERNAL_SERVER_ERROR;
          }
          else if (hashCode == INVALID_ACCOUNT_HASH)
          {
            return BatchCreateBillScenarioCommitmentModificationErrorCode::INVALID_ACCOUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchCreateBillScenarioCommitmentModificationErrorCode>(hashCode);
          }

          return BatchCreateBillScenarioCommitmentModificationErrorCode::NOT_SET;
        }

        Aws::String GetNameForBatchCreateBillScenarioCommitmentModificationErrorCode(BatchCreateBillScenarioCommitmentModificationErrorCode enumValue)
        {
          switch(enumValue)
          {
          case BatchCreateBillScenarioCommitmentModificationErrorCode::NOT_SET:
            return {};
          case BatchCreateBillScenarioCommitmentModificationErrorCode::CONFLICT:
            return "CONFLICT";
          case BatchCreateBillScenarioCommitmentModificationErrorCode::INTERNAL_SERVER_ERROR:
            return "INTERNAL_SERVER_ERROR";
          case BatchCreateBillScenarioCommitmentModificationErrorCode::INVALID_ACCOUNT:
            return "INVALID_ACCOUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchCreateBillScenarioCommitmentModificationErrorCodeMapper
    } // namespace Model
  } // namespace BCMPricingCalculator
} // namespace Aws
