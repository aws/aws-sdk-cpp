/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisScanResultsAggregatedByTargetResourceSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace CisScanResultsAggregatedByTargetResourceSortByMapper
      {

        static const int RESOURCE_ID_HASH = HashingUtils::HashString("RESOURCE_ID");
        static const int FAILED_COUNTS_HASH = HashingUtils::HashString("FAILED_COUNTS");
        static const int ACCOUNT_ID_HASH = HashingUtils::HashString("ACCOUNT_ID");
        static const int PLATFORM_HASH = HashingUtils::HashString("PLATFORM");
        static const int TARGET_STATUS_HASH = HashingUtils::HashString("TARGET_STATUS");
        static const int TARGET_STATUS_REASON_HASH = HashingUtils::HashString("TARGET_STATUS_REASON");


        CisScanResultsAggregatedByTargetResourceSortBy GetCisScanResultsAggregatedByTargetResourceSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOURCE_ID_HASH)
          {
            return CisScanResultsAggregatedByTargetResourceSortBy::RESOURCE_ID;
          }
          else if (hashCode == FAILED_COUNTS_HASH)
          {
            return CisScanResultsAggregatedByTargetResourceSortBy::FAILED_COUNTS;
          }
          else if (hashCode == ACCOUNT_ID_HASH)
          {
            return CisScanResultsAggregatedByTargetResourceSortBy::ACCOUNT_ID;
          }
          else if (hashCode == PLATFORM_HASH)
          {
            return CisScanResultsAggregatedByTargetResourceSortBy::PLATFORM;
          }
          else if (hashCode == TARGET_STATUS_HASH)
          {
            return CisScanResultsAggregatedByTargetResourceSortBy::TARGET_STATUS;
          }
          else if (hashCode == TARGET_STATUS_REASON_HASH)
          {
            return CisScanResultsAggregatedByTargetResourceSortBy::TARGET_STATUS_REASON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisScanResultsAggregatedByTargetResourceSortBy>(hashCode);
          }

          return CisScanResultsAggregatedByTargetResourceSortBy::NOT_SET;
        }

        Aws::String GetNameForCisScanResultsAggregatedByTargetResourceSortBy(CisScanResultsAggregatedByTargetResourceSortBy enumValue)
        {
          switch(enumValue)
          {
          case CisScanResultsAggregatedByTargetResourceSortBy::NOT_SET:
            return {};
          case CisScanResultsAggregatedByTargetResourceSortBy::RESOURCE_ID:
            return "RESOURCE_ID";
          case CisScanResultsAggregatedByTargetResourceSortBy::FAILED_COUNTS:
            return "FAILED_COUNTS";
          case CisScanResultsAggregatedByTargetResourceSortBy::ACCOUNT_ID:
            return "ACCOUNT_ID";
          case CisScanResultsAggregatedByTargetResourceSortBy::PLATFORM:
            return "PLATFORM";
          case CisScanResultsAggregatedByTargetResourceSortBy::TARGET_STATUS:
            return "TARGET_STATUS";
          case CisScanResultsAggregatedByTargetResourceSortBy::TARGET_STATUS_REASON:
            return "TARGET_STATUS_REASON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CisScanResultsAggregatedByTargetResourceSortByMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
