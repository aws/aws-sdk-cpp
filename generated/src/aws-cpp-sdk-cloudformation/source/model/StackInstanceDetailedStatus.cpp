/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackInstanceDetailedStatus.h>
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
      namespace StackInstanceDetailedStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t INOPERABLE_HASH = ConstExprHashingUtils::HashString("INOPERABLE");
        static constexpr uint32_t SKIPPED_SUSPENDED_ACCOUNT_HASH = ConstExprHashingUtils::HashString("SKIPPED_SUSPENDED_ACCOUNT");


        StackInstanceDetailedStatus GetStackInstanceDetailedStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return StackInstanceDetailedStatus::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return StackInstanceDetailedStatus::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return StackInstanceDetailedStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StackInstanceDetailedStatus::FAILED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return StackInstanceDetailedStatus::CANCELLED;
          }
          else if (hashCode == INOPERABLE_HASH)
          {
            return StackInstanceDetailedStatus::INOPERABLE;
          }
          else if (hashCode == SKIPPED_SUSPENDED_ACCOUNT_HASH)
          {
            return StackInstanceDetailedStatus::SKIPPED_SUSPENDED_ACCOUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackInstanceDetailedStatus>(hashCode);
          }

          return StackInstanceDetailedStatus::NOT_SET;
        }

        Aws::String GetNameForStackInstanceDetailedStatus(StackInstanceDetailedStatus enumValue)
        {
          switch(enumValue)
          {
          case StackInstanceDetailedStatus::NOT_SET:
            return {};
          case StackInstanceDetailedStatus::PENDING:
            return "PENDING";
          case StackInstanceDetailedStatus::RUNNING:
            return "RUNNING";
          case StackInstanceDetailedStatus::SUCCEEDED:
            return "SUCCEEDED";
          case StackInstanceDetailedStatus::FAILED:
            return "FAILED";
          case StackInstanceDetailedStatus::CANCELLED:
            return "CANCELLED";
          case StackInstanceDetailedStatus::INOPERABLE:
            return "INOPERABLE";
          case StackInstanceDetailedStatus::SKIPPED_SUSPENDED_ACCOUNT:
            return "SKIPPED_SUSPENDED_ACCOUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackInstanceDetailedStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
