/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AllocationStrategy.h>
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
      namespace AllocationStrategyMapper
      {

        static constexpr uint32_t lowestPrice_HASH = ConstExprHashingUtils::HashString("lowestPrice");
        static constexpr uint32_t diversified_HASH = ConstExprHashingUtils::HashString("diversified");
        static constexpr uint32_t capacityOptimized_HASH = ConstExprHashingUtils::HashString("capacityOptimized");
        static constexpr uint32_t capacityOptimizedPrioritized_HASH = ConstExprHashingUtils::HashString("capacityOptimizedPrioritized");
        static constexpr uint32_t priceCapacityOptimized_HASH = ConstExprHashingUtils::HashString("priceCapacityOptimized");


        AllocationStrategy GetAllocationStrategyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == lowestPrice_HASH)
          {
            return AllocationStrategy::lowestPrice;
          }
          else if (hashCode == diversified_HASH)
          {
            return AllocationStrategy::diversified;
          }
          else if (hashCode == capacityOptimized_HASH)
          {
            return AllocationStrategy::capacityOptimized;
          }
          else if (hashCode == capacityOptimizedPrioritized_HASH)
          {
            return AllocationStrategy::capacityOptimizedPrioritized;
          }
          else if (hashCode == priceCapacityOptimized_HASH)
          {
            return AllocationStrategy::priceCapacityOptimized;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllocationStrategy>(hashCode);
          }

          return AllocationStrategy::NOT_SET;
        }

        Aws::String GetNameForAllocationStrategy(AllocationStrategy enumValue)
        {
          switch(enumValue)
          {
          case AllocationStrategy::NOT_SET:
            return {};
          case AllocationStrategy::lowestPrice:
            return "lowestPrice";
          case AllocationStrategy::diversified:
            return "diversified";
          case AllocationStrategy::capacityOptimized:
            return "capacityOptimized";
          case AllocationStrategy::capacityOptimizedPrioritized:
            return "capacityOptimizedPrioritized";
          case AllocationStrategy::priceCapacityOptimized:
            return "priceCapacityOptimized";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AllocationStrategyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
