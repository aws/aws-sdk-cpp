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

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t NORMAL_HASH = ConstExprHashingUtils::HashString("NORMAL");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t ACKNOWLEDGED_HASH = ConstExprHashingUtils::HashString("ACKNOWLEDGED");
        static constexpr uint32_t SNOOZE_DISABLED_HASH = ConstExprHashingUtils::HashString("SNOOZE_DISABLED");
        static constexpr uint32_t LATCHED_HASH = ConstExprHashingUtils::HashString("LATCHED");


        AlarmStateName GetAlarmStateNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
