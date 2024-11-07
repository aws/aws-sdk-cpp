/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/CapacityDistributionStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace CapacityDistributionStrategyMapper
      {

        static const int balanced_only_HASH = HashingUtils::HashString("balanced-only");
        static const int balanced_best_effort_HASH = HashingUtils::HashString("balanced-best-effort");


        CapacityDistributionStrategy GetCapacityDistributionStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == balanced_only_HASH)
          {
            return CapacityDistributionStrategy::balanced_only;
          }
          else if (hashCode == balanced_best_effort_HASH)
          {
            return CapacityDistributionStrategy::balanced_best_effort;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityDistributionStrategy>(hashCode);
          }

          return CapacityDistributionStrategy::NOT_SET;
        }

        Aws::String GetNameForCapacityDistributionStrategy(CapacityDistributionStrategy enumValue)
        {
          switch(enumValue)
          {
          case CapacityDistributionStrategy::NOT_SET:
            return {};
          case CapacityDistributionStrategy::balanced_only:
            return "balanced-only";
          case CapacityDistributionStrategy::balanced_best_effort:
            return "balanced-best-effort";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityDistributionStrategyMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
