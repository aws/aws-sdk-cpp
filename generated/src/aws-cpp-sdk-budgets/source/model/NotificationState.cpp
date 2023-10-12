/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/NotificationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Budgets
  {
    namespace Model
    {
      namespace NotificationStateMapper
      {

        static constexpr uint32_t OK_HASH = ConstExprHashingUtils::HashString("OK");
        static constexpr uint32_t ALARM_HASH = ConstExprHashingUtils::HashString("ALARM");


        NotificationState GetNotificationStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OK_HASH)
          {
            return NotificationState::OK;
          }
          else if (hashCode == ALARM_HASH)
          {
            return NotificationState::ALARM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationState>(hashCode);
          }

          return NotificationState::NOT_SET;
        }

        Aws::String GetNameForNotificationState(NotificationState enumValue)
        {
          switch(enumValue)
          {
          case NotificationState::NOT_SET:
            return {};
          case NotificationState::OK:
            return "OK";
          case NotificationState::ALARM:
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

      } // namespace NotificationStateMapper
    } // namespace Model
  } // namespace Budgets
} // namespace Aws
