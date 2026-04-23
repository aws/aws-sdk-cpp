/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int OK_HASH = HashingUtils::HashString("OK");
        static const int ALARM_HASH = HashingUtils::HashString("ALARM");


        NotificationState GetNotificationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
