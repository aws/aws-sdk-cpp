/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DeploymentRolloutState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace DeploymentRolloutStateMapper
      {

        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");


        DeploymentRolloutState GetDeploymentRolloutStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETED_HASH)
          {
            return DeploymentRolloutState::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DeploymentRolloutState::FAILED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return DeploymentRolloutState::IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentRolloutState>(hashCode);
          }

          return DeploymentRolloutState::NOT_SET;
        }

        Aws::String GetNameForDeploymentRolloutState(DeploymentRolloutState enumValue)
        {
          switch(enumValue)
          {
          case DeploymentRolloutState::NOT_SET:
            return {};
          case DeploymentRolloutState::COMPLETED:
            return "COMPLETED";
          case DeploymentRolloutState::FAILED:
            return "FAILED";
          case DeploymentRolloutState::IN_PROGRESS:
            return "IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentRolloutStateMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
