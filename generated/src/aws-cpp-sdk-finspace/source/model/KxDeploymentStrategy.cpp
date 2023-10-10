/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxDeploymentStrategy.h>
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
      namespace KxDeploymentStrategyMapper
      {

        static const int NO_RESTART_HASH = HashingUtils::HashString("NO_RESTART");
        static const int ROLLING_HASH = HashingUtils::HashString("ROLLING");


        KxDeploymentStrategy GetKxDeploymentStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_RESTART_HASH)
          {
            return KxDeploymentStrategy::NO_RESTART;
          }
          else if (hashCode == ROLLING_HASH)
          {
            return KxDeploymentStrategy::ROLLING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KxDeploymentStrategy>(hashCode);
          }

          return KxDeploymentStrategy::NOT_SET;
        }

        Aws::String GetNameForKxDeploymentStrategy(KxDeploymentStrategy enumValue)
        {
          switch(enumValue)
          {
          case KxDeploymentStrategy::NOT_SET:
            return {};
          case KxDeploymentStrategy::NO_RESTART:
            return "NO_RESTART";
          case KxDeploymentStrategy::ROLLING:
            return "ROLLING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KxDeploymentStrategyMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
