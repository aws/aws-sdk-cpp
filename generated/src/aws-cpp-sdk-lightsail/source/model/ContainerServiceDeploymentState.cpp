/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContainerServiceDeploymentState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace ContainerServiceDeploymentStateMapper
      {

        static constexpr uint32_t ACTIVATING_HASH = ConstExprHashingUtils::HashString("ACTIVATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        ContainerServiceDeploymentState GetContainerServiceDeploymentStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVATING_HASH)
          {
            return ContainerServiceDeploymentState::ACTIVATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ContainerServiceDeploymentState::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return ContainerServiceDeploymentState::INACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ContainerServiceDeploymentState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerServiceDeploymentState>(hashCode);
          }

          return ContainerServiceDeploymentState::NOT_SET;
        }

        Aws::String GetNameForContainerServiceDeploymentState(ContainerServiceDeploymentState enumValue)
        {
          switch(enumValue)
          {
          case ContainerServiceDeploymentState::NOT_SET:
            return {};
          case ContainerServiceDeploymentState::ACTIVATING:
            return "ACTIVATING";
          case ContainerServiceDeploymentState::ACTIVE:
            return "ACTIVE";
          case ContainerServiceDeploymentState::INACTIVE:
            return "INACTIVE";
          case ContainerServiceDeploymentState::FAILED:
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

      } // namespace ContainerServiceDeploymentStateMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
