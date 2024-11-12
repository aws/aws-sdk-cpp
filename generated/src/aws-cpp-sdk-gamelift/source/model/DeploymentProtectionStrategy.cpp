/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DeploymentProtectionStrategy.h>
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
      namespace DeploymentProtectionStrategyMapper
      {

        static const int WITH_PROTECTION_HASH = HashingUtils::HashString("WITH_PROTECTION");
        static const int IGNORE_PROTECTION_HASH = HashingUtils::HashString("IGNORE_PROTECTION");


        DeploymentProtectionStrategy GetDeploymentProtectionStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WITH_PROTECTION_HASH)
          {
            return DeploymentProtectionStrategy::WITH_PROTECTION;
          }
          else if (hashCode == IGNORE_PROTECTION_HASH)
          {
            return DeploymentProtectionStrategy::IGNORE_PROTECTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentProtectionStrategy>(hashCode);
          }

          return DeploymentProtectionStrategy::NOT_SET;
        }

        Aws::String GetNameForDeploymentProtectionStrategy(DeploymentProtectionStrategy enumValue)
        {
          switch(enumValue)
          {
          case DeploymentProtectionStrategy::NOT_SET:
            return {};
          case DeploymentProtectionStrategy::WITH_PROTECTION:
            return "WITH_PROTECTION";
          case DeploymentProtectionStrategy::IGNORE_PROTECTION:
            return "IGNORE_PROTECTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentProtectionStrategyMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
