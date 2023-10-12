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

        static constexpr uint32_t GT_HASH = ConstExprHashingUtils::HashString("GT");
        static constexpr uint32_t GTE_HASH = ConstExprHashingUtils::HashString("GTE");
        static constexpr uint32_t LT_HASH = ConstExprHashingUtils::HashString("LT");
        static constexpr uint32_t LTE_HASH = ConstExprHashingUtils::HashString("LTE");
        static constexpr uint32_t EQ_HASH = ConstExprHashingUtils::HashString("EQ");
        static constexpr uint32_t NE_HASH = ConstExprHashingUtils::HashString("NE");
        static constexpr uint32_t CONTAINS_HASH = ConstExprHashingUtils::HashString("CONTAINS");


        UsageStatisticsFilterComparator GetUsageStatisticsFilterComparatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case UsageStatisticsFilterComparator::NOT_SET:
            return {};
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
