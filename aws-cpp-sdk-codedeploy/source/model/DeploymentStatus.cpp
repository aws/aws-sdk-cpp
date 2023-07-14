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

        static const int Created_HASH = HashingUtils::HashString("Created");
        static const int Queued_HASH = HashingUtils::HashString("Queued");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Baking_HASH = HashingUtils::HashString("Baking");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Ready_HASH = HashingUtils::HashString("Ready");


        DeploymentStatus GetDeploymentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
