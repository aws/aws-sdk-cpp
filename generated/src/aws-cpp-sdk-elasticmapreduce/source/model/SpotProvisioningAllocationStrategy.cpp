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

        static constexpr uint32_t capacity_optimized_HASH = ConstExprHashingUtils::HashString("capacity-optimized");
        static constexpr uint32_t price_capacity_optimized_HASH = ConstExprHashingUtils::HashString("price-capacity-optimized");
        static constexpr uint32_t lowest_price_HASH = ConstExprHashingUtils::HashString("lowest-price");
        static constexpr uint32_t diversified_HASH = ConstExprHashingUtils::HashString("diversified");


        SpotProvisioningAllocationStrategy GetSpotProvisioningAllocationStrategyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == capacity_optimized_HASH)
          {
            return SpotProvisioningAllocationStrategy::capacity_optimized;
          }
          else if (hashCode == price_capacity_optimized_HASH)
          {
            return SpotProvisioningAllocationStrategy::price_capacity_optimized;
          }
          else if (hashCode == lowest_price_HASH)
          {
            return SpotProvisioningAllocationStrategy::lowest_price;
          }
          else if (hashCode == diversified_HASH)
          {
            return SpotProvisioningAllocationStrategy::diversified;
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
          case SpotProvisioningAllocationStrategy::NOT_SET:
            return {};
          case SpotProvisioningAllocationStrategy::capacity_optimized:
            return "capacity-optimized";
          case SpotProvisioningAllocationStrategy::price_capacity_optimized:
            return "price-capacity-optimized";
          case SpotProvisioningAllocationStrategy::lowest_price:
            return "lowest-price";
          case SpotProvisioningAllocationStrategy::diversified:
            return "diversified";
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
