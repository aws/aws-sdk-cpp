/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UsageStatisticsFilterComparator.h>
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
      namespace UsageStatisticsFilterComparatorMapper
      {

        static const int GT_HASH = HashingUtils::HashString("GT");
        static const int GTE_HASH = HashingUtils::HashString("GTE");
        static const int LT_HASH = HashingUtils::HashString("LT");
        static const int LTE_HASH = HashingUtils::HashString("LTE");
        static const int EQ_HASH = HashingUtils::HashString("EQ");
        static const int NE_HASH = HashingUtils::HashString("NE");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");


        UsageStatisticsFilterComparator GetUsageStatisticsFilterComparatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GT_HASH)
          {
            return UsageStatisticsFilterComparator::GT;
          }
          else if (hashCode == GTE_HASH)
          {
            return UsageStatisticsFilterComparator::GTE;
          }
          else if (hashCode == LT_HASH)
          {
            return UsageStatisticsFilterComparator::LT;
          }
          else if (hashCode == LTE_HASH)
          {
            return UsageStatisticsFilterComparator::LTE;
          }
          else if (hashCode == EQ_HASH)
          {
            return UsageStatisticsFilterComparator::EQ;
          }
          else if (hashCode == NE_HASH)
          {
            return UsageStatisticsFilterComparator::NE;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return UsageStatisticsFilterComparator::CONTAINS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageStatisticsFilterComparator>(hashCode);
          }

          return UsageStatisticsFilterComparator::NOT_SET;
        }

        Aws::String GetNameForUsageStatisticsFilterComparator(UsageStatisticsFilterComparator enumValue)
        {
          switch(enumValue)
          {
          case UsageStatisticsFilterComparator::GT:
            return "GT";
          case UsageStatisticsFilterComparator::GTE:
            return "GTE";
          case UsageStatisticsFilterComparator::LT:
            return "LT";
          case UsageStatisticsFilterComparator::LTE:
            return "LTE";
          case UsageStatisticsFilterComparator::EQ:
            return "EQ";
          case UsageStatisticsFilterComparator::NE:
            return "NE";
          case UsageStatisticsFilterComparator::CONTAINS:
            return "CONTAINS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageStatisticsFilterComparatorMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
