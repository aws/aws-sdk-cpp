/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BatchUpdateBillScenarioCommitmentModificationErrorCode.h>
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
      namespace BatchUpdateBillScenarioCommitmentModificationErrorCodeMapper
      {

        static const int BAD_REQUEST_HASH = HashingUtils::HashString("BAD_REQUEST");
        static const int NOT_FOUND_HASH = HashingUtils::HashString("NOT_FOUND");
        static const int CONFLICT_HASH = HashingUtils::HashString("CONFLICT");
        static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVER_ERROR");


        BatchUpdateBillScenarioCommitmentModificationErrorCode GetBatchUpdateBillScenarioCommitmentModificationErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BAD_REQUEST_HASH)
          {
            return BatchUpdateBillScenarioCommitmentModificationErrorCode::BAD_REQUEST;
          }
          else if (hashCode == NOT_FOUND_HASH)
          {
            return BatchUpdateBillScenarioCommitmentModificationErrorCode::NOT_FOUND;
          }
          else if (hashCode == CONFLICT_HASH)
          {
            return BatchUpdateBillScenarioCommitmentModificationErrorCode::CONFLICT;
          }
          else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
          {
            return BatchUpdateBillScenarioCommitmentModificationErrorCode::INTERNAL_SERVER_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchUpdateBillScenarioCommitmentModificationErrorCode>(hashCode);
          }

          return BatchUpdateBillScenarioCommitmentModificationErrorCode::NOT_SET;
        }

        Aws::String GetNameForBatchUpdateBillScenarioCommitmentModificationErrorCode(BatchUpdateBillScenarioCommitmentModificationErrorCode enumValue)
        {
          switch(enumValue)
          {
          case BatchUpdateBillScenarioCommitmentModificationErrorCode::NOT_SET:
            return {};
          case BatchUpdateBillScenarioCommitmentModificationErrorCode::BAD_REQUEST:
            return "BAD_REQUEST";
          case BatchUpdateBillScenarioCommitmentModificationErrorCode::NOT_FOUND:
            return "NOT_FOUND";
          case BatchUpdateBillScenarioCommitmentModificationErrorCode::CONFLICT:
            return "CONFLICT";
          case BatchUpdateBillScenarioCommitmentModificationErrorCode::INTERNAL_SERVER_ERROR:
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

      } // namespace BatchUpdateBillScenarioCommitmentModificationErrorCodeMapper
    } // namespace Model
  } // namespace BCMPricingCalculator
} // namespace Aws
