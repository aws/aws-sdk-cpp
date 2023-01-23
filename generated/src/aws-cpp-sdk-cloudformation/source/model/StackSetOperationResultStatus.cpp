/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackSetOperationResultStatus.h>
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
      namespace StackSetOperationResultStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        StackSetOperationResultStatus GetStackSetOperationResultStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return StackSetOperationResultStatus::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return StackSetOperationResultStatus::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return StackSetOperationResultStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StackSetOperationResultStatus::FAILED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return StackSetOperationResultStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackSetOperationResultStatus>(hashCode);
          }

          return StackSetOperationResultStatus::NOT_SET;
        }

        Aws::String GetNameForStackSetOperationResultStatus(StackSetOperationResultStatus enumValue)
        {
          switch(enumValue)
          {
          case StackSetOperationResultStatus::PENDING:
            return "PENDING";
          case StackSetOperationResultStatus::RUNNING:
            return "RUNNING";
          case StackSetOperationResultStatus::SUCCEEDED:
            return "SUCCEEDED";
          case StackSetOperationResultStatus::FAILED:
            return "FAILED";
          case StackSetOperationResultStatus::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackSetOperationResultStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
