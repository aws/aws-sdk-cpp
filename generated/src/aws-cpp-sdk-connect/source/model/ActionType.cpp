/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ActionType.h>
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
      namespace ActionTypeMapper
      {

        static const int CREATE_TASK_HASH = HashingUtils::HashString("CREATE_TASK");
        static const int ASSIGN_CONTACT_CATEGORY_HASH = HashingUtils::HashString("ASSIGN_CONTACT_CATEGORY");
        static const int GENERATE_EVENTBRIDGE_EVENT_HASH = HashingUtils::HashString("GENERATE_EVENTBRIDGE_EVENT");
        static const int SEND_NOTIFICATION_HASH = HashingUtils::HashString("SEND_NOTIFICATION");
        static const int CREATE_CASE_HASH = HashingUtils::HashString("CREATE_CASE");
        static const int UPDATE_CASE_HASH = HashingUtils::HashString("UPDATE_CASE");
        static const int END_ASSOCIATED_TASKS_HASH = HashingUtils::HashString("END_ASSOCIATED_TASKS");


        ActionType GetActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_TASK_HASH)
          {
            return ActionType::CREATE_TASK;
          }
          else if (hashCode == ASSIGN_CONTACT_CATEGORY_HASH)
          {
            return ActionType::ASSIGN_CONTACT_CATEGORY;
          }
          else if (hashCode == GENERATE_EVENTBRIDGE_EVENT_HASH)
          {
            return ActionType::GENERATE_EVENTBRIDGE_EVENT;
          }
          else if (hashCode == SEND_NOTIFICATION_HASH)
          {
            return ActionType::SEND_NOTIFICATION;
          }
          else if (hashCode == CREATE_CASE_HASH)
          {
            return ActionType::CREATE_CASE;
          }
          else if (hashCode == UPDATE_CASE_HASH)
          {
            return ActionType::UPDATE_CASE;
          }
          else if (hashCode == END_ASSOCIATED_TASKS_HASH)
          {
            return ActionType::END_ASSOCIATED_TASKS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionType>(hashCode);
          }

          return ActionType::NOT_SET;
        }

        Aws::String GetNameForActionType(ActionType enumValue)
        {
          switch(enumValue)
          {
          case ActionType::NOT_SET:
            return {};
          case ActionType::CREATE_TASK:
            return "CREATE_TASK";
          case ActionType::ASSIGN_CONTACT_CATEGORY:
            return "ASSIGN_CONTACT_CATEGORY";
          case ActionType::GENERATE_EVENTBRIDGE_EVENT:
            return "GENERATE_EVENTBRIDGE_EVENT";
          case ActionType::SEND_NOTIFICATION:
            return "SEND_NOTIFICATION";
          case ActionType::CREATE_CASE:
            return "CREATE_CASE";
          case ActionType::UPDATE_CASE:
            return "UPDATE_CASE";
          case ActionType::END_ASSOCIATED_TASKS:
            return "END_ASSOCIATED_TASKS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
