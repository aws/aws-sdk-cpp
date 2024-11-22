/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/WorkloadEstimateUpdateUsageErrorCode.h>
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
      namespace WorkloadEstimateUpdateUsageErrorCodeMapper
      {

        static const int BAD_REQUEST_HASH = HashingUtils::HashString("BAD_REQUEST");
        static const int NOT_FOUND_HASH = HashingUtils::HashString("NOT_FOUND");
        static const int CONFLICT_HASH = HashingUtils::HashString("CONFLICT");
        static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVER_ERROR");


        WorkloadEstimateUpdateUsageErrorCode GetWorkloadEstimateUpdateUsageErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BAD_REQUEST_HASH)
          {
            return WorkloadEstimateUpdateUsageErrorCode::BAD_REQUEST;
          }
          else if (hashCode == NOT_FOUND_HASH)
          {
            return WorkloadEstimateUpdateUsageErrorCode::NOT_FOUND;
          }
          else if (hashCode == CONFLICT_HASH)
          {
            return WorkloadEstimateUpdateUsageErrorCode::CONFLICT;
          }
          else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
          {
            return WorkloadEstimateUpdateUsageErrorCode::INTERNAL_SERVER_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkloadEstimateUpdateUsageErrorCode>(hashCode);
          }

          return WorkloadEstimateUpdateUsageErrorCode::NOT_SET;
        }

        Aws::String GetNameForWorkloadEstimateUpdateUsageErrorCode(WorkloadEstimateUpdateUsageErrorCode enumValue)
        {
          switch(enumValue)
          {
          case WorkloadEstimateUpdateUsageErrorCode::NOT_SET:
            return {};
          case WorkloadEstimateUpdateUsageErrorCode::BAD_REQUEST:
            return "BAD_REQUEST";
          case WorkloadEstimateUpdateUsageErrorCode::NOT_FOUND:
            return "NOT_FOUND";
          case WorkloadEstimateUpdateUsageErrorCode::CONFLICT:
            return "CONFLICT";
          case WorkloadEstimateUpdateUsageErrorCode::INTERNAL_SERVER_ERROR:
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

      } // namespace WorkloadEstimateUpdateUsageErrorCodeMapper
    } // namespace Model
  } // namespace BCMPricingCalculator
} // namespace Aws
