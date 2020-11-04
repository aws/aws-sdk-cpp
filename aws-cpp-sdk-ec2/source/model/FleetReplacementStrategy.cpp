/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FleetReplacementStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace FleetReplacementStrategyMapper
      {

        static const int launch_HASH = HashingUtils::HashString("launch");


        FleetReplacementStrategy GetFleetReplacementStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == launch_HASH)
          {
            return FleetReplacementStrategy::launch;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetReplacementStrategy>(hashCode);
          }

          return FleetReplacementStrategy::NOT_SET;
        }

        Aws::String GetNameForFleetReplacementStrategy(FleetReplacementStrategy enumValue)
        {
          switch(enumValue)
          {
          case FleetReplacementStrategy::launch:
            return "launch";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetReplacementStrategyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
