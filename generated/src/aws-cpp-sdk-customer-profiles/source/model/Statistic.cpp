/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/Statistic.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace StatisticMapper
      {

        static constexpr uint32_t FIRST_OCCURRENCE_HASH = ConstExprHashingUtils::HashString("FIRST_OCCURRENCE");
        static constexpr uint32_t LAST_OCCURRENCE_HASH = ConstExprHashingUtils::HashString("LAST_OCCURRENCE");
        static constexpr uint32_t COUNT_HASH = ConstExprHashingUtils::HashString("COUNT");
        static constexpr uint32_t SUM_HASH = ConstExprHashingUtils::HashString("SUM");
        static constexpr uint32_t MINIMUM_HASH = ConstExprHashingUtils::HashString("MINIMUM");
        static constexpr uint32_t MAXIMUM_HASH = ConstExprHashingUtils::HashString("MAXIMUM");
        static constexpr uint32_t AVERAGE_HASH = ConstExprHashingUtils::HashString("AVERAGE");
        static constexpr uint32_t MAX_OCCURRENCE_HASH = ConstExprHashingUtils::HashString("MAX_OCCURRENCE");


        Statistic GetStatisticForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIRST_OCCURRENCE_HASH)
          {
            return Statistic::FIRST_OCCURRENCE;
          }
          else if (hashCode == LAST_OCCURRENCE_HASH)
          {
            return Statistic::LAST_OCCURRENCE;
          }
          else if (hashCode == COUNT_HASH)
          {
            return Statistic::COUNT;
          }
          else if (hashCode == SUM_HASH)
          {
            return Statistic::SUM;
          }
          else if (hashCode == MINIMUM_HASH)
          {
            return Statistic::MINIMUM;
          }
          else if (hashCode == MAXIMUM_HASH)
          {
            return Statistic::MAXIMUM;
          }
          else if (hashCode == AVERAGE_HASH)
          {
            return Statistic::AVERAGE;
          }
          else if (hashCode == MAX_OCCURRENCE_HASH)
          {
            return Statistic::MAX_OCCURRENCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Statistic>(hashCode);
          }

          return Statistic::NOT_SET;
        }

        Aws::String GetNameForStatistic(Statistic enumValue)
        {
          switch(enumValue)
          {
          case Statistic::NOT_SET:
            return {};
          case Statistic::FIRST_OCCURRENCE:
            return "FIRST_OCCURRENCE";
          case Statistic::LAST_OCCURRENCE:
            return "LAST_OCCURRENCE";
          case Statistic::COUNT:
            return "COUNT";
          case Statistic::SUM:
            return "SUM";
          case Statistic::MINIMUM:
            return "MINIMUM";
          case Statistic::MAXIMUM:
            return "MAXIMUM";
          case Statistic::AVERAGE:
            return "AVERAGE";
          case Statistic::MAX_OCCURRENCE:
            return "MAX_OCCURRENCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatisticMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
