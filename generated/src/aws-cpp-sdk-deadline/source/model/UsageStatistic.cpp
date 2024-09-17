/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UsageStatistic.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace UsageStatisticMapper
      {

        static const int SUM_HASH = HashingUtils::HashString("SUM");
        static const int MIN_HASH = HashingUtils::HashString("MIN");
        static const int MAX_HASH = HashingUtils::HashString("MAX");
        static const int AVG_HASH = HashingUtils::HashString("AVG");


        UsageStatistic GetUsageStatisticForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUM_HASH)
          {
            return UsageStatistic::SUM;
          }
          else if (hashCode == MIN_HASH)
          {
            return UsageStatistic::MIN;
          }
          else if (hashCode == MAX_HASH)
          {
            return UsageStatistic::MAX;
          }
          else if (hashCode == AVG_HASH)
          {
            return UsageStatistic::AVG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageStatistic>(hashCode);
          }

          return UsageStatistic::NOT_SET;
        }

        Aws::String GetNameForUsageStatistic(UsageStatistic enumValue)
        {
          switch(enumValue)
          {
          case UsageStatistic::NOT_SET:
            return {};
          case UsageStatistic::SUM:
            return "SUM";
          case UsageStatistic::MIN:
            return "MIN";
          case UsageStatistic::MAX:
            return "MAX";
          case UsageStatistic::AVG:
            return "AVG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageStatisticMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
