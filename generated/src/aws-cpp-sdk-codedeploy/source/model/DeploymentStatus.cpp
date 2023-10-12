/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace DeploymentStatusMapper
      {

        static constexpr uint32_t Created_HASH = ConstExprHashingUtils::HashString("Created");
        static constexpr uint32_t Queued_HASH = ConstExprHashingUtils::HashString("Queued");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Baking_HASH = ConstExprHashingUtils::HashString("Baking");
        static constexpr uint32_t Succeeded_HASH = ConstExprHashingUtils::HashString("Succeeded");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");
        static constexpr uint32_t Ready_HASH = ConstExprHashingUtils::HashString("Ready");


        DeploymentStatus GetDeploymentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Created_HASH)
          {
            return DeploymentStatus::Created;
          }
          else if (hashCode == Queued_HASH)
          {
            return DeploymentStatus::Queued;
          }
          else if (hashCode == InProgress_HASH)
          {
            return DeploymentStatus::InProgress;
          }
          else if (hashCode == Baking_HASH)
          {
            return DeploymentStatus::Baking;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return DeploymentStatus::Succeeded;
          }
          else if (hashCode == Failed_HASH)
          {
            return DeploymentStatus::Failed;
          }
          else if (hashCode == Stopped_HASH)
          {
            return DeploymentStatus::Stopped;
          }
          else if (hashCode == Ready_HASH)
          {
            return DeploymentStatus::Ready;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentStatus>(hashCode);
          }

          return DeploymentStatus::NOT_SET;
        }

        Aws::String GetNameForDeploymentStatus(DeploymentStatus enumValue)
        {
          switch(enumValue)
          {
          case DeploymentStatus::NOT_SET:
            return {};
          case DeploymentStatus::Created:
            return "Created";
          case DeploymentStatus::Queued:
            return "Queued";
          case DeploymentStatus::InProgress:
            return "InProgress";
          case DeploymentStatus::Baking:
            return "Baking";
          case DeploymentStatus::Succeeded:
            return "Succeeded";
          case DeploymentStatus::Failed:
            return "Failed";
          case DeploymentStatus::Stopped:
            return "Stopped";
          case DeploymentStatus::Ready:
            return "Ready";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentStatusMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
