/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/DeploymentState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameSparks
  {
    namespace Model
    {
      namespace DeploymentStateMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        DeploymentState GetDeploymentStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return DeploymentState::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return DeploymentState::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return DeploymentState::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DeploymentState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentState>(hashCode);
          }

          return DeploymentState::NOT_SET;
        }

        Aws::String GetNameForDeploymentState(DeploymentState enumValue)
        {
          switch(enumValue)
          {
          case DeploymentState::NOT_SET:
            return {};
          case DeploymentState::PENDING:
            return "PENDING";
          case DeploymentState::IN_PROGRESS:
            return "IN_PROGRESS";
          case DeploymentState::COMPLETED:
            return "COMPLETED";
          case DeploymentState::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentStateMapper
    } // namespace Model
  } // namespace GameSparks
} // namespace Aws
