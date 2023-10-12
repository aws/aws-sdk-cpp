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

        static constexpr uint32_t sunday_HASH = ConstExprHashingUtils::HashString("sunday");
        static constexpr uint32_t monday_HASH = ConstExprHashingUtils::HashString("monday");
        static constexpr uint32_t tuesday_HASH = ConstExprHashingUtils::HashString("tuesday");
        static constexpr uint32_t wednesday_HASH = ConstExprHashingUtils::HashString("wednesday");
        static constexpr uint32_t thursday_HASH = ConstExprHashingUtils::HashString("thursday");
        static constexpr uint32_t friday_HASH = ConstExprHashingUtils::HashString("friday");
        static constexpr uint32_t saturday_HASH = ConstExprHashingUtils::HashString("saturday");


        WeekDay GetWeekDayForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
