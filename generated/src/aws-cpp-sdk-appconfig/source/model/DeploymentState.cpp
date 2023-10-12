/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/DeploymentState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppConfig
  {
    namespace Model
    {
      namespace DeploymentStateMapper
      {

        static constexpr uint32_t BAKING_HASH = ConstExprHashingUtils::HashString("BAKING");
        static constexpr uint32_t VALIDATING_HASH = ConstExprHashingUtils::HashString("VALIDATING");
        static constexpr uint32_t DEPLOYING_HASH = ConstExprHashingUtils::HashString("DEPLOYING");
        static constexpr uint32_t COMPLETE_HASH = ConstExprHashingUtils::HashString("COMPLETE");
        static constexpr uint32_t ROLLING_BACK_HASH = ConstExprHashingUtils::HashString("ROLLING_BACK");
        static constexpr uint32_t ROLLED_BACK_HASH = ConstExprHashingUtils::HashString("ROLLED_BACK");


        DeploymentState GetDeploymentStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BAKING_HASH)
          {
            return DeploymentState::BAKING;
          }
          else if (hashCode == VALIDATING_HASH)
          {
            return DeploymentState::VALIDATING;
          }
          else if (hashCode == DEPLOYING_HASH)
          {
            return DeploymentState::DEPLOYING;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return DeploymentState::COMPLETE;
          }
          else if (hashCode == ROLLING_BACK_HASH)
          {
            return DeploymentState::ROLLING_BACK;
          }
          else if (hashCode == ROLLED_BACK_HASH)
          {
            return DeploymentState::ROLLED_BACK;
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
          case DeploymentState::BAKING:
            return "BAKING";
          case DeploymentState::VALIDATING:
            return "VALIDATING";
          case DeploymentState::DEPLOYING:
            return "DEPLOYING";
          case DeploymentState::COMPLETE:
            return "COMPLETE";
          case DeploymentState::ROLLING_BACK:
            return "ROLLING_BACK";
          case DeploymentState::ROLLED_BACK:
            return "ROLLED_BACK";
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
  } // namespace AppConfig
} // namespace Aws
