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

        static const int OK_HASH = HashingUtils::HashString("OK");
        static const int ALARM_HASH = HashingUtils::HashString("ALARM");
        static const int INSUFFICIENT_DATA_HASH = HashingUtils::HashString("INSUFFICIENT_DATA");


        AlarmState GetAlarmStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
