/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/ActionStatus.h>
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
      namespace ActionStatusMapper
      {

        static const int STANDBY_HASH = HashingUtils::HashString("STANDBY");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int EXECUTION_IN_PROGRESS_HASH = HashingUtils::HashString("EXECUTION_IN_PROGRESS");
        static const int EXECUTION_SUCCESS_HASH = HashingUtils::HashString("EXECUTION_SUCCESS");
        static const int EXECUTION_FAILURE_HASH = HashingUtils::HashString("EXECUTION_FAILURE");
        static const int REVERSE_IN_PROGRESS_HASH = HashingUtils::HashString("REVERSE_IN_PROGRESS");
        static const int REVERSE_SUCCESS_HASH = HashingUtils::HashString("REVERSE_SUCCESS");
        static const int REVERSE_FAILURE_HASH = HashingUtils::HashString("REVERSE_FAILURE");
        static const int RESET_IN_PROGRESS_HASH = HashingUtils::HashString("RESET_IN_PROGRESS");
        static const int RESET_FAILURE_HASH = HashingUtils::HashString("RESET_FAILURE");


        ActionStatus GetActionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDBY_HASH)
          {
            return ActionStatus::STANDBY;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ActionStatus::PENDING;
          }
          else if (hashCode == EXECUTION_IN_PROGRESS_HASH)
          {
            return ActionStatus::EXECUTION_IN_PROGRESS;
          }
          else if (hashCode == EXECUTION_SUCCESS_HASH)
          {
            return ActionStatus::EXECUTION_SUCCESS;
          }
          else if (hashCode == EXECUTION_FAILURE_HASH)
          {
            return ActionStatus::EXECUTION_FAILURE;
          }
          else if (hashCode == REVERSE_IN_PROGRESS_HASH)
          {
            return ActionStatus::REVERSE_IN_PROGRESS;
          }
          else if (hashCode == REVERSE_SUCCESS_HASH)
          {
            return ActionStatus::REVERSE_SUCCESS;
          }
          else if (hashCode == REVERSE_FAILURE_HASH)
          {
            return ActionStatus::REVERSE_FAILURE;
          }
          else if (hashCode == RESET_IN_PROGRESS_HASH)
          {
            return ActionStatus::RESET_IN_PROGRESS;
          }
          else if (hashCode == RESET_FAILURE_HASH)
          {
            return ActionStatus::RESET_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionStatus>(hashCode);
          }

          return ActionStatus::NOT_SET;
        }

        Aws::String GetNameForActionStatus(ActionStatus enumValue)
        {
          switch(enumValue)
          {
          case ActionStatus::STANDBY:
            return "STANDBY";
          case ActionStatus::PENDING:
            return "PENDING";
          case ActionStatus::EXECUTION_IN_PROGRESS:
            return "EXECUTION_IN_PROGRESS";
          case ActionStatus::EXECUTION_SUCCESS:
            return "EXECUTION_SUCCESS";
          case ActionStatus::EXECUTION_FAILURE:
            return "EXECUTION_FAILURE";
          case ActionStatus::REVERSE_IN_PROGRESS:
            return "REVERSE_IN_PROGRESS";
          case ActionStatus::REVERSE_SUCCESS:
            return "REVERSE_SUCCESS";
          case ActionStatus::REVERSE_FAILURE:
            return "REVERSE_FAILURE";
          case ActionStatus::RESET_IN_PROGRESS:
            return "RESET_IN_PROGRESS";
          case ActionStatus::RESET_FAILURE:
            return "RESET_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionStatusMapper
    } // namespace Model
  } // namespace Budgets
} // namespace Aws
