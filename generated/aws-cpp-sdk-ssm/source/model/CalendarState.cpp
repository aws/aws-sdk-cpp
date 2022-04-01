/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/CalendarState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace CalendarStateMapper
      {

        static const int OPEN_HASH = HashingUtils::HashString("OPEN");
        static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");


        CalendarState GetCalendarStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPEN_HASH)
          {
            return CalendarState::OPEN;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return CalendarState::CLOSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CalendarState>(hashCode);
          }

          return CalendarState::NOT_SET;
        }

        Aws::String GetNameForCalendarState(CalendarState enumValue)
        {
          switch(enumValue)
          {
          case CalendarState::OPEN:
            return "OPEN";
          case CalendarState::CLOSED:
            return "CLOSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CalendarStateMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
