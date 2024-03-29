/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/AggregationPeriod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace AggregationPeriodMapper
      {

        static const int OneHour_HASH = HashingUtils::HashString("OneHour");
        static const int OneDay_HASH = HashingUtils::HashString("OneDay");
        static const int OneWeek_HASH = HashingUtils::HashString("OneWeek");


        AggregationPeriod GetAggregationPeriodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OneHour_HASH)
          {
            return AggregationPeriod::OneHour;
          }
          else if (hashCode == OneDay_HASH)
          {
            return AggregationPeriod::OneDay;
          }
          else if (hashCode == OneWeek_HASH)
          {
            return AggregationPeriod::OneWeek;
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
          case AggregationPeriod::OneHour:
            return "OneHour";
          case AggregationPeriod::OneDay:
            return "OneDay";
          case AggregationPeriod::OneWeek:
            return "OneWeek";
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
  } // namespace IoTWireless
} // namespace Aws
