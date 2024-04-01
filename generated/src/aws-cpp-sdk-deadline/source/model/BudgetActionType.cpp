/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/BudgetActionType.h>
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
      namespace BudgetActionTypeMapper
      {

        static const int STOP_SCHEDULING_AND_COMPLETE_TASKS_HASH = HashingUtils::HashString("STOP_SCHEDULING_AND_COMPLETE_TASKS");
        static const int STOP_SCHEDULING_AND_CANCEL_TASKS_HASH = HashingUtils::HashString("STOP_SCHEDULING_AND_CANCEL_TASKS");


        BudgetActionType GetBudgetActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STOP_SCHEDULING_AND_COMPLETE_TASKS_HASH)
          {
            return BudgetActionType::STOP_SCHEDULING_AND_COMPLETE_TASKS;
          }
          else if (hashCode == STOP_SCHEDULING_AND_CANCEL_TASKS_HASH)
          {
            return BudgetActionType::STOP_SCHEDULING_AND_CANCEL_TASKS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BudgetActionType>(hashCode);
          }

          return BudgetActionType::NOT_SET;
        }

        Aws::String GetNameForBudgetActionType(BudgetActionType enumValue)
        {
          switch(enumValue)
          {
          case BudgetActionType::NOT_SET:
            return {};
          case BudgetActionType::STOP_SCHEDULING_AND_COMPLETE_TASKS:
            return "STOP_SCHEDULING_AND_COMPLETE_TASKS";
          case BudgetActionType::STOP_SCHEDULING_AND_CANCEL_TASKS:
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

      } // namespace BudgetActionTypeMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
