/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/AllocationStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace AllocationStrategyMapper
      {

        static const int Prioritized_HASH = HashingUtils::HashString("Prioritized");
        static const int LowestPrice_HASH = HashingUtils::HashString("LowestPrice");


        AllocationStrategy GetAllocationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Prioritized_HASH)
          {
            return AllocationStrategy::Prioritized;
          }
          else if (hashCode == LowestPrice_HASH)
          {
            return AllocationStrategy::LowestPrice;
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
          case AllocationStrategy::Prioritized:
            return "Prioritized";
          case AllocationStrategy::LowestPrice:
            return "LowestPrice";
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
  } // namespace ComputeOptimizer
} // namespace Aws
