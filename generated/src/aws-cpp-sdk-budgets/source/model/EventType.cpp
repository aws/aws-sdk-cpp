/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/EventType.h>
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
      namespace EventTypeMapper
      {

        static constexpr uint32_t SYSTEM_HASH = ConstExprHashingUtils::HashString("SYSTEM");
        static constexpr uint32_t CREATE_ACTION_HASH = ConstExprHashingUtils::HashString("CREATE_ACTION");
        static constexpr uint32_t DELETE_ACTION_HASH = ConstExprHashingUtils::HashString("DELETE_ACTION");
        static constexpr uint32_t UPDATE_ACTION_HASH = ConstExprHashingUtils::HashString("UPDATE_ACTION");
        static constexpr uint32_t EXECUTE_ACTION_HASH = ConstExprHashingUtils::HashString("EXECUTE_ACTION");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYSTEM_HASH)
          {
            return EventType::SYSTEM;
          }
          else if (hashCode == CREATE_ACTION_HASH)
          {
            return EventType::CREATE_ACTION;
          }
          else if (hashCode == DELETE_ACTION_HASH)
          {
            return EventType::DELETE_ACTION;
          }
          else if (hashCode == UPDATE_ACTION_HASH)
          {
            return EventType::UPDATE_ACTION;
          }
          else if (hashCode == EXECUTE_ACTION_HASH)
          {
            return EventType::EXECUTE_ACTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventType>(hashCode);
          }

          return EventType::NOT_SET;
        }

        Aws::String GetNameForEventType(EventType enumValue)
        {
          switch(enumValue)
          {
          case EventType::NOT_SET:
            return {};
          case EventType::SYSTEM:
            return "SYSTEM";
          case EventType::CREATE_ACTION:
            return "CREATE_ACTION";
          case EventType::DELETE_ACTION:
            return "DELETE_ACTION";
          case EventType::UPDATE_ACTION:
            return "UPDATE_ACTION";
          case EventType::EXECUTE_ACTION:
            return "EXECUTE_ACTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventTypeMapper
    } // namespace Model
  } // namespace Budgets
} // namespace Aws
