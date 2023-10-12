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

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t QUEUED_HASH = ConstExprHashingUtils::HashString("QUEUED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t TIMED_OUT_HASH = ConstExprHashingUtils::HashString("TIMED_OUT");
        static constexpr uint32_t CANCELED_HASH = ConstExprHashingUtils::HashString("CANCELED");
        static constexpr uint32_t REJECTED_HASH = ConstExprHashingUtils::HashString("REJECTED");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");


        EffectiveDeploymentExecutionStatus GetEffectiveDeploymentExecutionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
