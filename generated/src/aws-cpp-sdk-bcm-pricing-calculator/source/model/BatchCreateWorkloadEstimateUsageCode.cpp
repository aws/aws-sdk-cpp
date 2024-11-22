/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BatchCreateWorkloadEstimateUsageCode.h>
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
      namespace BatchCreateWorkloadEstimateUsageCodeMapper
      {

        static const int BAD_REQUEST_HASH = HashingUtils::HashString("BAD_REQUEST");
        static const int NOT_FOUND_HASH = HashingUtils::HashString("NOT_FOUND");
        static const int CONFLICT_HASH = HashingUtils::HashString("CONFLICT");
        static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVER_ERROR");


        BatchCreateWorkloadEstimateUsageCode GetBatchCreateWorkloadEstimateUsageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BAD_REQUEST_HASH)
          {
            return BatchCreateWorkloadEstimateUsageCode::BAD_REQUEST;
          }
          else if (hashCode == NOT_FOUND_HASH)
          {
            return BatchCreateWorkloadEstimateUsageCode::NOT_FOUND;
          }
          else if (hashCode == CONFLICT_HASH)
          {
            return BatchCreateWorkloadEstimateUsageCode::CONFLICT;
          }
          else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
          {
            return BatchCreateWorkloadEstimateUsageCode::INTERNAL_SERVER_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchCreateWorkloadEstimateUsageCode>(hashCode);
          }

          return BatchCreateWorkloadEstimateUsageCode::NOT_SET;
        }

        Aws::String GetNameForBatchCreateWorkloadEstimateUsageCode(BatchCreateWorkloadEstimateUsageCode enumValue)
        {
          switch(enumValue)
          {
          case BatchCreateWorkloadEstimateUsageCode::NOT_SET:
            return {};
          case BatchCreateWorkloadEstimateUsageCode::BAD_REQUEST:
            return "BAD_REQUEST";
          case BatchCreateWorkloadEstimateUsageCode::NOT_FOUND:
            return "NOT_FOUND";
          case BatchCreateWorkloadEstimateUsageCode::CONFLICT:
            return "CONFLICT";
          case BatchCreateWorkloadEstimateUsageCode::INTERNAL_SERVER_ERROR:
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

      } // namespace BatchCreateWorkloadEstimateUsageCodeMapper
    } // namespace Model
  } // namespace BCMPricingCalculator
} // namespace Aws
