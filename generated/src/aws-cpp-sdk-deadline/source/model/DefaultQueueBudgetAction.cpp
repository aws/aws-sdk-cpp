/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/DefaultQueueBudgetAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace DefaultQueueBudgetActionMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int STOP_SCHEDULING_AND_COMPLETE_TASKS_HASH = HashingUtils::HashString("STOP_SCHEDULING_AND_COMPLETE_TASKS");
        static const int STOP_SCHEDULING_AND_CANCEL_TASKS_HASH = HashingUtils::HashString("STOP_SCHEDULING_AND_CANCEL_TASKS");


        DefaultQueueBudgetAction GetDefaultQueueBudgetActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return DefaultQueueBudgetAction::NONE;
          }
          else if (hashCode == STOP_SCHEDULING_AND_COMPLETE_TASKS_HASH)
          {
            return DefaultQueueBudgetAction::STOP_SCHEDULING_AND_COMPLETE_TASKS;
          }
          else if (hashCode == STOP_SCHEDULING_AND_CANCEL_TASKS_HASH)
          {
            return DefaultQueueBudgetAction::STOP_SCHEDULING_AND_CANCEL_TASKS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DefaultQueueBudgetAction>(hashCode);
          }

          return DefaultQueueBudgetAction::NOT_SET;
        }

        Aws::String GetNameForDefaultQueueBudgetAction(DefaultQueueBudgetAction enumValue)
        {
          switch(enumValue)
          {
          case DefaultQueueBudgetAction::NOT_SET:
            return {};
          case DefaultQueueBudgetAction::NONE:
            return "NONE";
          case DefaultQueueBudgetAction::STOP_SCHEDULING_AND_COMPLETE_TASKS:
            return "STOP_SCHEDULING_AND_COMPLETE_TASKS";
          case DefaultQueueBudgetAction::STOP_SCHEDULING_AND_CANCEL_TASKS:
            return "STOP_SCHEDULING_AND_CANCEL_TASKS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DefaultQueueBudgetActionMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
