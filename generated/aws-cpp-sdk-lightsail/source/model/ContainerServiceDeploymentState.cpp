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

        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ContainerServiceDeploymentState GetContainerServiceDeploymentStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
