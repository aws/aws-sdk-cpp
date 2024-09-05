/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/DurationUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationSignals
  {
    namespace Model
    {
      namespace DurationUnitMapper
      {

        static const int MINUTE_HASH = HashingUtils::HashString("MINUTE");
        static const int HOUR_HASH = HashingUtils::HashString("HOUR");
        static const int DAY_HASH = HashingUtils::HashString("DAY");
        static const int MONTH_HASH = HashingUtils::HashString("MONTH");


        DurationUnit GetDurationUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MINUTE_HASH)
          {
            return DurationUnit::MINUTE;
          }
          else if (hashCode == HOUR_HASH)
          {
            return DurationUnit::HOUR;
          }
          else if (hashCode == DAY_HASH)
          {
            return DurationUnit::DAY;
          }
          else if (hashCode == MONTH_HASH)
          {
            return DurationUnit::MONTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DurationUnit>(hashCode);
          }

          return DurationUnit::NOT_SET;
        }

        Aws::String GetNameForDurationUnit(DurationUnit enumValue)
        {
          switch(enumValue)
          {
          case DurationUnit::NOT_SET:
            return {};
          case DurationUnit::MINUTE:
            return "MINUTE";
          case DurationUnit::HOUR:
            return "HOUR";
          case DurationUnit::DAY:
            return "DAY";
          case DurationUnit::MONTH:
            return "MONTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DurationUnitMapper
    } // namespace Model
  } // namespace ApplicationSignals
} // namespace Aws
