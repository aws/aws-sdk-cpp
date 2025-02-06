/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackRefactorExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace StackRefactorExecutionStatusMapper
      {

        static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int OBSOLETE_HASH = HashingUtils::HashString("OBSOLETE");
        static const int EXECUTE_IN_PROGRESS_HASH = HashingUtils::HashString("EXECUTE_IN_PROGRESS");
        static const int EXECUTE_COMPLETE_HASH = HashingUtils::HashString("EXECUTE_COMPLETE");
        static const int EXECUTE_FAILED_HASH = HashingUtils::HashString("EXECUTE_FAILED");
        static const int ROLLBACK_IN_PROGRESS_HASH = HashingUtils::HashString("ROLLBACK_IN_PROGRESS");
        static const int ROLLBACK_COMPLETE_HASH = HashingUtils::HashString("ROLLBACK_COMPLETE");
        static const int ROLLBACK_FAILED_HASH = HashingUtils::HashString("ROLLBACK_FAILED");


        StackRefactorExecutionStatus GetStackRefactorExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNAVAILABLE_HASH)
          {
            return StackRefactorExecutionStatus::UNAVAILABLE;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return StackRefactorExecutionStatus::AVAILABLE;
          }
          else if (hashCode == OBSOLETE_HASH)
          {
            return StackRefactorExecutionStatus::OBSOLETE;
          }
          else if (hashCode == EXECUTE_IN_PROGRESS_HASH)
          {
            return StackRefactorExecutionStatus::EXECUTE_IN_PROGRESS;
          }
          else if (hashCode == EXECUTE_COMPLETE_HASH)
          {
            return StackRefactorExecutionStatus::EXECUTE_COMPLETE;
          }
          else if (hashCode == EXECUTE_FAILED_HASH)
          {
            return StackRefactorExecutionStatus::EXECUTE_FAILED;
          }
          else if (hashCode == ROLLBACK_IN_PROGRESS_HASH)
          {
            return StackRefactorExecutionStatus::ROLLBACK_IN_PROGRESS;
          }
          else if (hashCode == ROLLBACK_COMPLETE_HASH)
          {
            return StackRefactorExecutionStatus::ROLLBACK_COMPLETE;
          }
          else if (hashCode == ROLLBACK_FAILED_HASH)
          {
            return StackRefactorExecutionStatus::ROLLBACK_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackRefactorExecutionStatus>(hashCode);
          }

          return StackRefactorExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForStackRefactorExecutionStatus(StackRefactorExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case StackRefactorExecutionStatus::NOT_SET:
            return {};
          case StackRefactorExecutionStatus::UNAVAILABLE:
            return "UNAVAILABLE";
          case StackRefactorExecutionStatus::AVAILABLE:
            return "AVAILABLE";
          case StackRefactorExecutionStatus::OBSOLETE:
            return "OBSOLETE";
          case StackRefactorExecutionStatus::EXECUTE_IN_PROGRESS:
            return "EXECUTE_IN_PROGRESS";
          case StackRefactorExecutionStatus::EXECUTE_COMPLETE:
            return "EXECUTE_COMPLETE";
          case StackRefactorExecutionStatus::EXECUTE_FAILED:
            return "EXECUTE_FAILED";
          case StackRefactorExecutionStatus::ROLLBACK_IN_PROGRESS:
            return "ROLLBACK_IN_PROGRESS";
          case StackRefactorExecutionStatus::ROLLBACK_COMPLETE:
            return "ROLLBACK_COMPLETE";
          case StackRefactorExecutionStatus::ROLLBACK_FAILED:
            return "ROLLBACK_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackRefactorExecutionStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
