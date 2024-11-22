/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BatchDeleteBillScenarioCommitmentModificationErrorCode.h>
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
      namespace BatchDeleteBillScenarioCommitmentModificationErrorCodeMapper
      {

        static const int BAD_REQUEST_HASH = HashingUtils::HashString("BAD_REQUEST");
        static const int CONFLICT_HASH = HashingUtils::HashString("CONFLICT");
        static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVER_ERROR");


        BatchDeleteBillScenarioCommitmentModificationErrorCode GetBatchDeleteBillScenarioCommitmentModificationErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BAD_REQUEST_HASH)
          {
            return BatchDeleteBillScenarioCommitmentModificationErrorCode::BAD_REQUEST;
          }
          else if (hashCode == CONFLICT_HASH)
          {
            return BatchDeleteBillScenarioCommitmentModificationErrorCode::CONFLICT;
          }
          else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
          {
            return BatchDeleteBillScenarioCommitmentModificationErrorCode::INTERNAL_SERVER_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchDeleteBillScenarioCommitmentModificationErrorCode>(hashCode);
          }

          return BatchDeleteBillScenarioCommitmentModificationErrorCode::NOT_SET;
        }

        Aws::String GetNameForBatchDeleteBillScenarioCommitmentModificationErrorCode(BatchDeleteBillScenarioCommitmentModificationErrorCode enumValue)
        {
          switch(enumValue)
          {
          case BatchDeleteBillScenarioCommitmentModificationErrorCode::NOT_SET:
            return {};
          case BatchDeleteBillScenarioCommitmentModificationErrorCode::BAD_REQUEST:
            return "BAD_REQUEST";
          case BatchDeleteBillScenarioCommitmentModificationErrorCode::CONFLICT:
            return "CONFLICT";
          case BatchDeleteBillScenarioCommitmentModificationErrorCode::INTERNAL_SERVER_ERROR:
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

      } // namespace BatchDeleteBillScenarioCommitmentModificationErrorCodeMapper
    } // namespace Model
  } // namespace BCMPricingCalculator
} // namespace Aws
