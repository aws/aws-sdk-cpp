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

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int INOPERABLE_HASH = HashingUtils::HashString("INOPERABLE");
        static const int SKIPPED_SUSPENDED_ACCOUNT_HASH = HashingUtils::HashString("SKIPPED_SUSPENDED_ACCOUNT");
        static const int FAILED_IMPORT_HASH = HashingUtils::HashString("FAILED_IMPORT");


        StackInstanceDetailedStatus GetStackInstanceDetailedStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == FAILED_IMPORT_HASH)
          {
            return StackInstanceDetailedStatus::FAILED_IMPORT;
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
          case StackInstanceDetailedStatus::FAILED_IMPORT:
            return "FAILED_IMPORT";
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
