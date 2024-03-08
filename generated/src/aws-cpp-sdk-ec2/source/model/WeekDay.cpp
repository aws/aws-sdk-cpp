/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/WeekDay.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace WeekDayMapper
      {

        static const int sunday_HASH = HashingUtils::HashString("sunday");
        static const int monday_HASH = HashingUtils::HashString("monday");
        static const int tuesday_HASH = HashingUtils::HashString("tuesday");
        static const int wednesday_HASH = HashingUtils::HashString("wednesday");
        static const int thursday_HASH = HashingUtils::HashString("thursday");
        static const int friday_HASH = HashingUtils::HashString("friday");
        static const int saturday_HASH = HashingUtils::HashString("saturday");


        WeekDay GetWeekDayForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sunday_HASH)
          {
            return WeekDay::sunday;
          }
          else if (hashCode == monday_HASH)
          {
            return WeekDay::monday;
          }
          else if (hashCode == tuesday_HASH)
          {
            return WeekDay::tuesday;
          }
          else if (hashCode == wednesday_HASH)
          {
            return WeekDay::wednesday;
          }
          else if (hashCode == thursday_HASH)
          {
            return WeekDay::thursday;
          }
          else if (hashCode == friday_HASH)
          {
            return WeekDay::friday;
          }
          else if (hashCode == saturday_HASH)
          {
            return WeekDay::saturday;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WeekDay>(hashCode);
          }

          return WeekDay::NOT_SET;
        }

        Aws::String GetNameForWeekDay(WeekDay enumValue)
        {
          switch(enumValue)
          {
          case WeekDay::NOT_SET:
            return {};
          case WeekDay::sunday:
            return "sunday";
          case WeekDay::monday:
            return "monday";
          case WeekDay::tuesday:
            return "tuesday";
          case WeekDay::wednesday:
            return "wednesday";
          case WeekDay::thursday:
            return "thursday";
          case WeekDay::friday:
            return "friday";
          case WeekDay::saturday:
            return "saturday";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WeekDayMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
