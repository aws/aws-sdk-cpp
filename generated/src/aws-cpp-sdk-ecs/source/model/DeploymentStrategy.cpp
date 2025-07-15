/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DeploymentStrategy.h>
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
      namespace DeploymentStrategyMapper
      {

        static const int ROLLING_HASH = HashingUtils::HashString("ROLLING");
        static const int BLUE_GREEN_HASH = HashingUtils::HashString("BLUE_GREEN");


        DeploymentStrategy GetDeploymentStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROLLING_HASH)
          {
            return DeploymentStrategy::ROLLING;
          }
          else if (hashCode == BLUE_GREEN_HASH)
          {
            return DeploymentStrategy::BLUE_GREEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentStrategy>(hashCode);
          }

          return DeploymentStrategy::NOT_SET;
        }

        Aws::String GetNameForDeploymentStrategy(DeploymentStrategy enumValue)
        {
          switch(enumValue)
          {
          case DeploymentStrategy::NOT_SET:
            return {};
          case DeploymentStrategy::ROLLING:
            return "ROLLING";
          case DeploymentStrategy::BLUE_GREEN:
            return "BLUE_GREEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentStrategyMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
