/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/SpotProvisioningAllocationStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace SpotProvisioningAllocationStrategyMapper
      {

        static const int capacity_optimized_HASH = HashingUtils::HashString("capacity-optimized");


        SpotProvisioningAllocationStrategy GetSpotProvisioningAllocationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == capacity_optimized_HASH)
          {
            return SpotProvisioningAllocationStrategy::capacity_optimized;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpotProvisioningAllocationStrategy>(hashCode);
          }

          return SpotProvisioningAllocationStrategy::NOT_SET;
        }

        Aws::String GetNameForSpotProvisioningAllocationStrategy(SpotProvisioningAllocationStrategy enumValue)
        {
          switch(enumValue)
          {
          case SpotProvisioningAllocationStrategy::capacity_optimized:
            return "capacity-optimized";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SpotProvisioningAllocationStrategyMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
