/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/TimeUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace TimeUnitMapper
      {

        static const int MILLISECOND_HASH = HashingUtils::HashString("MILLISECOND");
        static const int SECOND_HASH = HashingUtils::HashString("SECOND");
        static const int MINUTE_HASH = HashingUtils::HashString("MINUTE");
        static const int HOUR_HASH = HashingUtils::HashString("HOUR");


        TimeUnit GetTimeUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MILLISECOND_HASH)
          {
            return TimeUnit::MILLISECOND;
          }
          else if (hashCode == SECOND_HASH)
          {
            return TimeUnit::SECOND;
          }
          else if (hashCode == MINUTE_HASH)
          {
            return TimeUnit::MINUTE;
          }
          else if (hashCode == HOUR_HASH)
          {
            return TimeUnit::HOUR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeUnit>(hashCode);
          }

          return TimeUnit::NOT_SET;
        }

        Aws::String GetNameForTimeUnit(TimeUnit enumValue)
        {
          switch(enumValue)
          {
          case TimeUnit::NOT_SET:
            return {};
          case TimeUnit::MILLISECOND:
            return "MILLISECOND";
          case TimeUnit::SECOND:
            return "SECOND";
          case TimeUnit::MINUTE:
            return "MINUTE";
          case TimeUnit::HOUR:
            return "HOUR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimeUnitMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
