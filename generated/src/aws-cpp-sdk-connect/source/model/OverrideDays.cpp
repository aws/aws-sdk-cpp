/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/OverrideDays.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace OverrideDaysMapper
      {

        static const int SUNDAY_HASH = HashingUtils::HashString("SUNDAY");
        static const int MONDAY_HASH = HashingUtils::HashString("MONDAY");
        static const int TUESDAY_HASH = HashingUtils::HashString("TUESDAY");
        static const int WEDNESDAY_HASH = HashingUtils::HashString("WEDNESDAY");
        static const int THURSDAY_HASH = HashingUtils::HashString("THURSDAY");
        static const int FRIDAY_HASH = HashingUtils::HashString("FRIDAY");
        static const int SATURDAY_HASH = HashingUtils::HashString("SATURDAY");


        OverrideDays GetOverrideDaysForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUNDAY_HASH)
          {
            return OverrideDays::SUNDAY;
          }
          else if (hashCode == MONDAY_HASH)
          {
            return OverrideDays::MONDAY;
          }
          else if (hashCode == TUESDAY_HASH)
          {
            return OverrideDays::TUESDAY;
          }
          else if (hashCode == WEDNESDAY_HASH)
          {
            return OverrideDays::WEDNESDAY;
          }
          else if (hashCode == THURSDAY_HASH)
          {
            return OverrideDays::THURSDAY;
          }
          else if (hashCode == FRIDAY_HASH)
          {
            return OverrideDays::FRIDAY;
          }
          else if (hashCode == SATURDAY_HASH)
          {
            return OverrideDays::SATURDAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OverrideDays>(hashCode);
          }

          return OverrideDays::NOT_SET;
        }

        Aws::String GetNameForOverrideDays(OverrideDays enumValue)
        {
          switch(enumValue)
          {
          case OverrideDays::NOT_SET:
            return {};
          case OverrideDays::SUNDAY:
            return "SUNDAY";
          case OverrideDays::MONDAY:
            return "MONDAY";
          case OverrideDays::TUESDAY:
            return "TUESDAY";
          case OverrideDays::WEDNESDAY:
            return "WEDNESDAY";
          case OverrideDays::THURSDAY:
            return "THURSDAY";
          case OverrideDays::FRIDAY:
            return "FRIDAY";
          case OverrideDays::SATURDAY:
            return "SATURDAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OverrideDaysMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
