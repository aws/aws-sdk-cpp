/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackSetOperationStatus.h>
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
      namespace StackSetOperationStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");


        StackSetOperationStatus GetStackSetOperationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return StackSetOperationStatus::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return StackSetOperationStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StackSetOperationStatus::FAILED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return StackSetOperationStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return StackSetOperationStatus::STOPPED;
          }
          else if (hashCode == QUEUED_HASH)
          {
            return StackSetOperationStatus::QUEUED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackSetOperationStatus>(hashCode);
          }

          return StackSetOperationStatus::NOT_SET;
        }

        Aws::String GetNameForStackSetOperationStatus(StackSetOperationStatus enumValue)
        {
          switch(enumValue)
          {
          case StackSetOperationStatus::RUNNING:
            return "RUNNING";
          case StackSetOperationStatus::SUCCEEDED:
            return "SUCCEEDED";
          case StackSetOperationStatus::FAILED:
            return "FAILED";
          case StackSetOperationStatus::STOPPING:
            return "STOPPING";
          case StackSetOperationStatus::STOPPED:
            return "STOPPED";
          case StackSetOperationStatus::QUEUED:
            return "QUEUED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackSetOperationStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
