/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/StepTargetTaskRunStatus.h>
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
      namespace StepTargetTaskRunStatusMapper
      {

        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        StepTargetTaskRunStatus GetStepTargetTaskRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return StepTargetTaskRunStatus::READY;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StepTargetTaskRunStatus::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return StepTargetTaskRunStatus::SUCCEEDED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return StepTargetTaskRunStatus::CANCELED;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return StepTargetTaskRunStatus::SUSPENDED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return StepTargetTaskRunStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StepTargetTaskRunStatus>(hashCode);
          }

          return StepTargetTaskRunStatus::NOT_SET;
        }

        Aws::String GetNameForStepTargetTaskRunStatus(StepTargetTaskRunStatus enumValue)
        {
          switch(enumValue)
          {
          case StepTargetTaskRunStatus::NOT_SET:
            return {};
          case StepTargetTaskRunStatus::READY:
            return "READY";
          case StepTargetTaskRunStatus::FAILED:
            return "FAILED";
          case StepTargetTaskRunStatus::SUCCEEDED:
            return "SUCCEEDED";
          case StepTargetTaskRunStatus::CANCELED:
            return "CANCELED";
          case StepTargetTaskRunStatus::SUSPENDED:
            return "SUSPENDED";
          case StepTargetTaskRunStatus::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StepTargetTaskRunStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
