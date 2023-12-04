/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxClusterCodeDeploymentStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace finspace
  {
    namespace Model
    {
      namespace KxClusterCodeDeploymentStrategyMapper
      {

        static const int NO_RESTART_HASH = HashingUtils::HashString("NO_RESTART");
        static const int ROLLING_HASH = HashingUtils::HashString("ROLLING");
        static const int FORCE_HASH = HashingUtils::HashString("FORCE");


        KxClusterCodeDeploymentStrategy GetKxClusterCodeDeploymentStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_RESTART_HASH)
          {
            return KxClusterCodeDeploymentStrategy::NO_RESTART;
          }
          else if (hashCode == ROLLING_HASH)
          {
            return KxClusterCodeDeploymentStrategy::ROLLING;
          }
          else if (hashCode == FORCE_HASH)
          {
            return KxClusterCodeDeploymentStrategy::FORCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KxClusterCodeDeploymentStrategy>(hashCode);
          }

          return KxClusterCodeDeploymentStrategy::NOT_SET;
        }

        Aws::String GetNameForKxClusterCodeDeploymentStrategy(KxClusterCodeDeploymentStrategy enumValue)
        {
          switch(enumValue)
          {
          case KxClusterCodeDeploymentStrategy::NOT_SET:
            return {};
          case KxClusterCodeDeploymentStrategy::NO_RESTART:
            return "NO_RESTART";
          case KxClusterCodeDeploymentStrategy::ROLLING:
            return "ROLLING";
          case KxClusterCodeDeploymentStrategy::FORCE:
            return "FORCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KxClusterCodeDeploymentStrategyMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
