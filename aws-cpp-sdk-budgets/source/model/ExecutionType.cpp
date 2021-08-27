/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/ExecutionType.h>
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
      namespace ExecutionTypeMapper
      {

        static const int APPROVE_BUDGET_ACTION_HASH = HashingUtils::HashString("APPROVE_BUDGET_ACTION");
        static const int RETRY_BUDGET_ACTION_HASH = HashingUtils::HashString("RETRY_BUDGET_ACTION");
        static const int REVERSE_BUDGET_ACTION_HASH = HashingUtils::HashString("REVERSE_BUDGET_ACTION");
        static const int RESET_BUDGET_ACTION_HASH = HashingUtils::HashString("RESET_BUDGET_ACTION");


        ExecutionType GetExecutionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPROVE_BUDGET_ACTION_HASH)
          {
            return ExecutionType::APPROVE_BUDGET_ACTION;
          }
          else if (hashCode == RETRY_BUDGET_ACTION_HASH)
          {
            return ExecutionType::RETRY_BUDGET_ACTION;
          }
          else if (hashCode == REVERSE_BUDGET_ACTION_HASH)
          {
            return ExecutionType::REVERSE_BUDGET_ACTION;
          }
          else if (hashCode == RESET_BUDGET_ACTION_HASH)
          {
            return ExecutionType::RESET_BUDGET_ACTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionType>(hashCode);
          }

          return ExecutionType::NOT_SET;
        }

        Aws::String GetNameForExecutionType(ExecutionType enumValue)
        {
          switch(enumValue)
          {
          case ExecutionType::APPROVE_BUDGET_ACTION:
            return "APPROVE_BUDGET_ACTION";
          case ExecutionType::RETRY_BUDGET_ACTION:
            return "RETRY_BUDGET_ACTION";
          case ExecutionType::REVERSE_BUDGET_ACTION:
            return "REVERSE_BUDGET_ACTION";
          case ExecutionType::RESET_BUDGET_ACTION:
            return "RESET_BUDGET_ACTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionTypeMapper
    } // namespace Model
  } // namespace Budgets
} // namespace Aws
