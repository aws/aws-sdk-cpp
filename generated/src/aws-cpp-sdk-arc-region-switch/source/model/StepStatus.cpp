/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/StepStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCRegionswitch
  {
    namespace Model
    {
      namespace StepStatusMapper
      {

        static const int notStarted_HASH = HashingUtils::HashString("notStarted");
        static const int running_HASH = HashingUtils::HashString("running");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int completed_HASH = HashingUtils::HashString("completed");
        static const int canceled_HASH = HashingUtils::HashString("canceled");
        static const int skipped_HASH = HashingUtils::HashString("skipped");
        static const int pendingApproval_HASH = HashingUtils::HashString("pendingApproval");


        StepStatus GetStepStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == notStarted_HASH)
          {
            return StepStatus::notStarted;
          }
          else if (hashCode == running_HASH)
          {
            return StepStatus::running;
          }
          else if (hashCode == failed_HASH)
          {
            return StepStatus::failed;
          }
          else if (hashCode == completed_HASH)
          {
            return StepStatus::completed;
          }
          else if (hashCode == canceled_HASH)
          {
            return StepStatus::canceled;
          }
          else if (hashCode == skipped_HASH)
          {
            return StepStatus::skipped;
          }
          else if (hashCode == pendingApproval_HASH)
          {
            return StepStatus::pendingApproval;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StepStatus>(hashCode);
          }

          return StepStatus::NOT_SET;
        }

        Aws::String GetNameForStepStatus(StepStatus enumValue)
        {
          switch(enumValue)
          {
          case StepStatus::NOT_SET:
            return {};
          case StepStatus::notStarted:
            return "notStarted";
          case StepStatus::running:
            return "running";
          case StepStatus::failed:
            return "failed";
          case StepStatus::completed:
            return "completed";
          case StepStatus::canceled:
            return "canceled";
          case StepStatus::skipped:
            return "skipped";
          case StepStatus::pendingApproval:
            return "pendingApproval";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StepStatusMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
