/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/AlarmStateName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTEventsData
  {
    namespace Model
    {
      namespace AlarmStateNameMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ACKNOWLEDGED_HASH = HashingUtils::HashString("ACKNOWLEDGED");
        static const int SNOOZE_DISABLED_HASH = HashingUtils::HashString("SNOOZE_DISABLED");
        static const int LATCHED_HASH = HashingUtils::HashString("LATCHED");


        AlarmStateName GetAlarmStateNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return AlarmStateName::DISABLED;
          }
          else if (hashCode == NORMAL_HASH)
          {
            return AlarmStateName::NORMAL;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return AlarmStateName::ACTIVE;
          }
          else if (hashCode == ACKNOWLEDGED_HASH)
          {
            return AlarmStateName::ACKNOWLEDGED;
          }
          else if (hashCode == SNOOZE_DISABLED_HASH)
          {
            return AlarmStateName::SNOOZE_DISABLED;
          }
          else if (hashCode == LATCHED_HASH)
          {
            return AlarmStateName::LATCHED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlarmStateName>(hashCode);
          }

          return AlarmStateName::NOT_SET;
        }

        Aws::String GetNameForAlarmStateName(AlarmStateName enumValue)
        {
          switch(enumValue)
          {
          case AlarmStateName::NOT_SET:
            return {};
          case AlarmStateName::DISABLED:
            return "DISABLED";
          case AlarmStateName::NORMAL:
            return "NORMAL";
          case AlarmStateName::ACTIVE:
            return "ACTIVE";
          case AlarmStateName::ACKNOWLEDGED:
            return "ACKNOWLEDGED";
          case AlarmStateName::SNOOZE_DISABLED:
            return "SNOOZE_DISABLED";
          case AlarmStateName::LATCHED:
            return "LATCHED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlarmStateNameMapper
    } // namespace Model
  } // namespace IoTEventsData
} // namespace Aws
