/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisScanResultsAggregatedByChecksSortBy.h>
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
      namespace CisScanResultsAggregatedByChecksSortByMapper
      {

        static const int CHECK_ID_HASH = HashingUtils::HashString("CHECK_ID");
        static const int TITLE_HASH = HashingUtils::HashString("TITLE");
        static const int PLATFORM_HASH = HashingUtils::HashString("PLATFORM");
        static const int FAILED_COUNTS_HASH = HashingUtils::HashString("FAILED_COUNTS");
        static const int SECURITY_LEVEL_HASH = HashingUtils::HashString("SECURITY_LEVEL");


        CisScanResultsAggregatedByChecksSortBy GetCisScanResultsAggregatedByChecksSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHECK_ID_HASH)
          {
            return CisScanResultsAggregatedByChecksSortBy::CHECK_ID;
          }
          else if (hashCode == TITLE_HASH)
          {
            return CisScanResultsAggregatedByChecksSortBy::TITLE;
          }
          else if (hashCode == PLATFORM_HASH)
          {
            return CisScanResultsAggregatedByChecksSortBy::PLATFORM;
          }
          else if (hashCode == FAILED_COUNTS_HASH)
          {
            return CisScanResultsAggregatedByChecksSortBy::FAILED_COUNTS;
          }
          else if (hashCode == SECURITY_LEVEL_HASH)
          {
            return CisScanResultsAggregatedByChecksSortBy::SECURITY_LEVEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisScanResultsAggregatedByChecksSortBy>(hashCode);
          }

          return CisScanResultsAggregatedByChecksSortBy::NOT_SET;
        }

        Aws::String GetNameForCisScanResultsAggregatedByChecksSortBy(CisScanResultsAggregatedByChecksSortBy enumValue)
        {
          switch(enumValue)
          {
          case CisScanResultsAggregatedByChecksSortBy::NOT_SET:
            return {};
          case CisScanResultsAggregatedByChecksSortBy::CHECK_ID:
            return "CHECK_ID";
          case CisScanResultsAggregatedByChecksSortBy::TITLE:
            return "TITLE";
          case CisScanResultsAggregatedByChecksSortBy::PLATFORM:
            return "PLATFORM";
          case CisScanResultsAggregatedByChecksSortBy::FAILED_COUNTS:
            return "FAILED_COUNTS";
          case CisScanResultsAggregatedByChecksSortBy::SECURITY_LEVEL:
            return "SECURITY_LEVEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CisScanResultsAggregatedByChecksSortByMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
