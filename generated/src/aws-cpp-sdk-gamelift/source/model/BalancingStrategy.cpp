/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/BalancingStrategy.h>
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
      namespace BalancingStrategyMapper
      {

        static const int SPOT_ONLY_HASH = HashingUtils::HashString("SPOT_ONLY");
        static const int SPOT_PREFERRED_HASH = HashingUtils::HashString("SPOT_PREFERRED");
        static const int ON_DEMAND_ONLY_HASH = HashingUtils::HashString("ON_DEMAND_ONLY");


        BalancingStrategy GetBalancingStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPOT_ONLY_HASH)
          {
            return BalancingStrategy::SPOT_ONLY;
          }
          else if (hashCode == SPOT_PREFERRED_HASH)
          {
            return BalancingStrategy::SPOT_PREFERRED;
          }
          else if (hashCode == ON_DEMAND_ONLY_HASH)
          {
            return BalancingStrategy::ON_DEMAND_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BalancingStrategy>(hashCode);
          }

          return BalancingStrategy::NOT_SET;
        }

        Aws::String GetNameForBalancingStrategy(BalancingStrategy enumValue)
        {
          switch(enumValue)
          {
          case BalancingStrategy::SPOT_ONLY:
            return "SPOT_ONLY";
          case BalancingStrategy::SPOT_PREFERRED:
            return "SPOT_PREFERRED";
          case BalancingStrategy::ON_DEMAND_ONLY:
            return "ON_DEMAND_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BalancingStrategyMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
