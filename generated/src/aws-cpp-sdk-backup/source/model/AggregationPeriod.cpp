/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/AggregationPeriod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Backup
  {
    namespace Model
    {
      namespace AggregationPeriodMapper
      {

        static const int ONE_DAY_HASH = HashingUtils::HashString("ONE_DAY");
        static const int SEVEN_DAYS_HASH = HashingUtils::HashString("SEVEN_DAYS");
        static const int FOURTEEN_DAYS_HASH = HashingUtils::HashString("FOURTEEN_DAYS");


        AggregationPeriod GetAggregationPeriodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONE_DAY_HASH)
          {
            return AggregationPeriod::ONE_DAY;
          }
          else if (hashCode == SEVEN_DAYS_HASH)
          {
            return AggregationPeriod::SEVEN_DAYS;
          }
          else if (hashCode == FOURTEEN_DAYS_HASH)
          {
            return AggregationPeriod::FOURTEEN_DAYS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregationPeriod>(hashCode);
          }

          return AggregationPeriod::NOT_SET;
        }

        Aws::String GetNameForAggregationPeriod(AggregationPeriod enumValue)
        {
          switch(enumValue)
          {
          case AggregationPeriod::NOT_SET:
            return {};
          case AggregationPeriod::ONE_DAY:
            return "ONE_DAY";
          case AggregationPeriod::SEVEN_DAYS:
            return "SEVEN_DAYS";
          case AggregationPeriod::FOURTEEN_DAYS:
            return "FOURTEEN_DAYS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregationPeriodMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
