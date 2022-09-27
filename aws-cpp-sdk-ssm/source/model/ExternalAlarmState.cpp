/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ExternalAlarmState.h>
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
      namespace ExternalAlarmStateMapper
      {

        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int ALARM_HASH = HashingUtils::HashString("ALARM");


        ExternalAlarmState GetExternalAlarmStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNKNOWN_HASH)
          {
            return ExternalAlarmState::UNKNOWN;
          }
          else if (hashCode == ALARM_HASH)
          {
            return ExternalAlarmState::ALARM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExternalAlarmState>(hashCode);
          }

          return ExternalAlarmState::NOT_SET;
        }

        Aws::String GetNameForExternalAlarmState(ExternalAlarmState enumValue)
        {
          switch(enumValue)
          {
          case ExternalAlarmState::UNKNOWN:
            return "UNKNOWN";
          case ExternalAlarmState::ALARM:
            return "ALARM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExternalAlarmStateMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
