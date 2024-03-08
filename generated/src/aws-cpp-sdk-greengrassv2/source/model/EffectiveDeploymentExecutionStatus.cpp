/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/EffectiveDeploymentExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace EffectiveDeploymentExecutionStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");


        EffectiveDeploymentExecutionStatus GetEffectiveDeploymentExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return EffectiveDeploymentExecutionStatus::IN_PROGRESS;
          }
          else if (hashCode == QUEUED_HASH)
          {
            return EffectiveDeploymentExecutionStatus::QUEUED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return EffectiveDeploymentExecutionStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return EffectiveDeploymentExecutionStatus::COMPLETED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return EffectiveDeploymentExecutionStatus::TIMED_OUT;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return EffectiveDeploymentExecutionStatus::CANCELED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return EffectiveDeploymentExecutionStatus::REJECTED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return EffectiveDeploymentExecutionStatus::SUCCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EffectiveDeploymentExecutionStatus>(hashCode);
          }

          return EffectiveDeploymentExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForEffectiveDeploymentExecutionStatus(EffectiveDeploymentExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case EffectiveDeploymentExecutionStatus::NOT_SET:
            return {};
          case EffectiveDeploymentExecutionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case EffectiveDeploymentExecutionStatus::QUEUED:
            return "QUEUED";
          case EffectiveDeploymentExecutionStatus::FAILED:
            return "FAILED";
          case EffectiveDeploymentExecutionStatus::COMPLETED:
            return "COMPLETED";
          case EffectiveDeploymentExecutionStatus::TIMED_OUT:
            return "TIMED_OUT";
          case EffectiveDeploymentExecutionStatus::CANCELED:
            return "CANCELED";
          case EffectiveDeploymentExecutionStatus::REJECTED:
            return "REJECTED";
          case EffectiveDeploymentExecutionStatus::SUCCEEDED:
            return "SUCCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EffectiveDeploymentExecutionStatusMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
