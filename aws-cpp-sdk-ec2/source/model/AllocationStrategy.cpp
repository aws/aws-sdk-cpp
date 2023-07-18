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

        static const int lowestPrice_HASH = HashingUtils::HashString("lowestPrice");
        static const int diversified_HASH = HashingUtils::HashString("diversified");
        static const int capacityOptimized_HASH = HashingUtils::HashString("capacityOptimized");
        static const int capacityOptimizedPrioritized_HASH = HashingUtils::HashString("capacityOptimizedPrioritized");


        AllocationStrategy GetAllocationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          case AllocationStrategy::lowestPrice:
            return "lowestPrice";
          case AllocationStrategy::diversified:
            return "diversified";
          case AllocationStrategy::capacityOptimized:
            return "capacityOptimized";
          case AllocationStrategy::capacityOptimizedPrioritized:
            return "capacityOptimizedPrioritized";
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
