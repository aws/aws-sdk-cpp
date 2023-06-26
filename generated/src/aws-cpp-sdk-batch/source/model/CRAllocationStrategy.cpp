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

        static const int BEST_FIT_HASH = HashingUtils::HashString("BEST_FIT");
        static const int BEST_FIT_PROGRESSIVE_HASH = HashingUtils::HashString("BEST_FIT_PROGRESSIVE");
        static const int SPOT_CAPACITY_OPTIMIZED_HASH = HashingUtils::HashString("SPOT_CAPACITY_OPTIMIZED");


        CRAllocationStrategy GetCRAllocationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          case CRAllocationStrategy::BEST_FIT:
            return "BEST_FIT";
          case CRAllocationStrategy::BEST_FIT_PROGRESSIVE:
            return "BEST_FIT_PROGRESSIVE";
          case CRAllocationStrategy::SPOT_CAPACITY_OPTIMIZED:
            return "SPOT_CAPACITY_OPTIMIZED";
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
