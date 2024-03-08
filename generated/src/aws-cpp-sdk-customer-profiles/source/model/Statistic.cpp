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

        static const int FIRST_OCCURRENCE_HASH = HashingUtils::HashString("FIRST_OCCURRENCE");
        static const int LAST_OCCURRENCE_HASH = HashingUtils::HashString("LAST_OCCURRENCE");
        static const int COUNT_HASH = HashingUtils::HashString("COUNT");
        static const int SUM_HASH = HashingUtils::HashString("SUM");
        static const int MINIMUM_HASH = HashingUtils::HashString("MINIMUM");
        static const int MAXIMUM_HASH = HashingUtils::HashString("MAXIMUM");
        static const int AVERAGE_HASH = HashingUtils::HashString("AVERAGE");
        static const int MAX_OCCURRENCE_HASH = HashingUtils::HashString("MAX_OCCURRENCE");


        Statistic GetStatisticForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
