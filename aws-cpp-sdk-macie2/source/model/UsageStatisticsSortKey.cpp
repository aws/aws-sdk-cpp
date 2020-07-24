/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UsageStatisticsSortKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace UsageStatisticsSortKeyMapper
      {

        static const int accountId_HASH = HashingUtils::HashString("accountId");
        static const int total_HASH = HashingUtils::HashString("total");
        static const int serviceLimitValue_HASH = HashingUtils::HashString("serviceLimitValue");
        static const int freeTrialStartDate_HASH = HashingUtils::HashString("freeTrialStartDate");


        UsageStatisticsSortKey GetUsageStatisticsSortKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == accountId_HASH)
          {
            return UsageStatisticsSortKey::accountId;
          }
          else if (hashCode == total_HASH)
          {
            return UsageStatisticsSortKey::total;
          }
          else if (hashCode == serviceLimitValue_HASH)
          {
            return UsageStatisticsSortKey::serviceLimitValue;
          }
          else if (hashCode == freeTrialStartDate_HASH)
          {
            return UsageStatisticsSortKey::freeTrialStartDate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageStatisticsSortKey>(hashCode);
          }

          return UsageStatisticsSortKey::NOT_SET;
        }

        Aws::String GetNameForUsageStatisticsSortKey(UsageStatisticsSortKey enumValue)
        {
          switch(enumValue)
          {
          case UsageStatisticsSortKey::accountId:
            return "accountId";
          case UsageStatisticsSortKey::total:
            return "total";
          case UsageStatisticsSortKey::serviceLimitValue:
            return "serviceLimitValue";
          case UsageStatisticsSortKey::freeTrialStartDate:
            return "freeTrialStartDate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageStatisticsSortKeyMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
