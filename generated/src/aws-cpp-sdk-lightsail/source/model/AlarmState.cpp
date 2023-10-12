/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AlarmState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace AlarmStateMapper
      {

        static constexpr uint32_t OK_HASH = ConstExprHashingUtils::HashString("OK");
        static constexpr uint32_t ALARM_HASH = ConstExprHashingUtils::HashString("ALARM");
        static constexpr uint32_t INSUFFICIENT_DATA_HASH = ConstExprHashingUtils::HashString("INSUFFICIENT_DATA");


        AlarmState GetAlarmStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OK_HASH)
          {
            return AlarmState::OK;
          }
          else if (hashCode == ALARM_HASH)
          {
            return AlarmState::ALARM;
          }
          else if (hashCode == INSUFFICIENT_DATA_HASH)
          {
            return AlarmState::INSUFFICIENT_DATA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlarmState>(hashCode);
          }

          return AlarmState::NOT_SET;
        }

        Aws::String GetNameForAlarmState(AlarmState enumValue)
        {
          switch(enumValue)
          {
          case AlarmState::NOT_SET:
            return {};
          case AlarmState::OK:
            return "OK";
          case AlarmState::ALARM:
            return "ALARM";
          case AlarmState::INSUFFICIENT_DATA:
            return "INSUFFICIENT_DATA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlarmStateMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
