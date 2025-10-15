/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Schedule.h>
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
      namespace ScheduleMapper
      {

        static const int hourly_HASH = HashingUtils::HashString("hourly");


        Schedule GetScheduleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == hourly_HASH)
          {
            return Schedule::hourly;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Schedule>(hashCode);
          }

          return Schedule::NOT_SET;
        }

        Aws::String GetNameForSchedule(Schedule enumValue)
        {
          switch(enumValue)
          {
          case Schedule::NOT_SET:
            return {};
          case Schedule::hourly:
            return "hourly";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduleMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
