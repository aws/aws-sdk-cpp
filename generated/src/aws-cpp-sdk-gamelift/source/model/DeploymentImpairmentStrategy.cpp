/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DeploymentImpairmentStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace DeploymentImpairmentStrategyMapper
      {

        static const int MAINTAIN_HASH = HashingUtils::HashString("MAINTAIN");
        static const int ROLLBACK_HASH = HashingUtils::HashString("ROLLBACK");


        DeploymentImpairmentStrategy GetDeploymentImpairmentStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MAINTAIN_HASH)
          {
            return DeploymentImpairmentStrategy::MAINTAIN;
          }
          else if (hashCode == ROLLBACK_HASH)
          {
            return DeploymentImpairmentStrategy::ROLLBACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentImpairmentStrategy>(hashCode);
          }

          return DeploymentImpairmentStrategy::NOT_SET;
        }

        Aws::String GetNameForDeploymentImpairmentStrategy(DeploymentImpairmentStrategy enumValue)
        {
          switch(enumValue)
          {
          case DeploymentImpairmentStrategy::NOT_SET:
            return {};
          case DeploymentImpairmentStrategy::MAINTAIN:
            return "MAINTAIN";
          case DeploymentImpairmentStrategy::ROLLBACK:
            return "ROLLBACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentImpairmentStrategyMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
