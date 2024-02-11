/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/CRUpdateAllocationStrategy.h>
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
      namespace CRUpdateAllocationStrategyMapper
      {

        static const int BEST_FIT_PROGRESSIVE_HASH = HashingUtils::HashString("BEST_FIT_PROGRESSIVE");
        static const int SPOT_CAPACITY_OPTIMIZED_HASH = HashingUtils::HashString("SPOT_CAPACITY_OPTIMIZED");
        static const int SPOT_PRICE_CAPACITY_OPTIMIZED_HASH = HashingUtils::HashString("SPOT_PRICE_CAPACITY_OPTIMIZED");


        CRUpdateAllocationStrategy GetCRUpdateAllocationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BEST_FIT_PROGRESSIVE_HASH)
          {
            return CRUpdateAllocationStrategy::BEST_FIT_PROGRESSIVE;
          }
          else if (hashCode == SPOT_CAPACITY_OPTIMIZED_HASH)
          {
            return CRUpdateAllocationStrategy::SPOT_CAPACITY_OPTIMIZED;
          }
          else if (hashCode == SPOT_PRICE_CAPACITY_OPTIMIZED_HASH)
          {
            return CRUpdateAllocationStrategy::SPOT_PRICE_CAPACITY_OPTIMIZED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CRUpdateAllocationStrategy>(hashCode);
          }

          return CRUpdateAllocationStrategy::NOT_SET;
        }

        Aws::String GetNameForCRUpdateAllocationStrategy(CRUpdateAllocationStrategy enumValue)
        {
          switch(enumValue)
          {
          case CRUpdateAllocationStrategy::NOT_SET:
            return {};
          case CRUpdateAllocationStrategy::BEST_FIT_PROGRESSIVE:
            return "BEST_FIT_PROGRESSIVE";
          case CRUpdateAllocationStrategy::SPOT_CAPACITY_OPTIMIZED:
            return "SPOT_CAPACITY_OPTIMIZED";
          case CRUpdateAllocationStrategy::SPOT_PRICE_CAPACITY_OPTIMIZED:
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

      } // namespace CRUpdateAllocationStrategyMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
