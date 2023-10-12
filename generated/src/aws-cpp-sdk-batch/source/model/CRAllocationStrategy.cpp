/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/CRAllocationStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace CRAllocationStrategyMapper
      {

        static constexpr uint32_t BEST_FIT_HASH = ConstExprHashingUtils::HashString("BEST_FIT");
        static constexpr uint32_t BEST_FIT_PROGRESSIVE_HASH = ConstExprHashingUtils::HashString("BEST_FIT_PROGRESSIVE");
        static constexpr uint32_t SPOT_CAPACITY_OPTIMIZED_HASH = ConstExprHashingUtils::HashString("SPOT_CAPACITY_OPTIMIZED");
        static constexpr uint32_t SPOT_PRICE_CAPACITY_OPTIMIZED_HASH = ConstExprHashingUtils::HashString("SPOT_PRICE_CAPACITY_OPTIMIZED");


        CRAllocationStrategy GetCRAllocationStrategyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BEST_FIT_HASH)
          {
            return CRAllocationStrategy::BEST_FIT;
          }
          else if (hashCode == BEST_FIT_PROGRESSIVE_HASH)
          {
            return CRAllocationStrategy::BEST_FIT_PROGRESSIVE;
          }
          else if (hashCode == SPOT_CAPACITY_OPTIMIZED_HASH)
          {
            return CRAllocationStrategy::SPOT_CAPACITY_OPTIMIZED;
          }
          else if (hashCode == SPOT_PRICE_CAPACITY_OPTIMIZED_HASH)
          {
            return CRAllocationStrategy::SPOT_PRICE_CAPACITY_OPTIMIZED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CRAllocationStrategy>(hashCode);
          }

          return CRAllocationStrategy::NOT_SET;
        }

        Aws::String GetNameForCRAllocationStrategy(CRAllocationStrategy enumValue)
        {
          switch(enumValue)
          {
          case CRAllocationStrategy::NOT_SET:
            return {};
          case CRAllocationStrategy::BEST_FIT:
            return "BEST_FIT";
          case CRAllocationStrategy::BEST_FIT_PROGRESSIVE:
            return "BEST_FIT_PROGRESSIVE";
          case CRAllocationStrategy::SPOT_CAPACITY_OPTIMIZED:
            return "SPOT_CAPACITY_OPTIMIZED";
          case CRAllocationStrategy::SPOT_PRICE_CAPACITY_OPTIMIZED:
            return "SPOT_PRICE_CAPACITY_OPTIMIZED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CRAllocationStrategyMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
