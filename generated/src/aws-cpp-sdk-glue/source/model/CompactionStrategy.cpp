/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CompactionStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace CompactionStrategyMapper
      {

        static const int binpack_HASH = HashingUtils::HashString("binpack");
        static const int sort_HASH = HashingUtils::HashString("sort");
        static const int z_order_HASH = HashingUtils::HashString("z-order");


        CompactionStrategy GetCompactionStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == binpack_HASH)
          {
            return CompactionStrategy::binpack;
          }
          else if (hashCode == sort_HASH)
          {
            return CompactionStrategy::sort;
          }
          else if (hashCode == z_order_HASH)
          {
            return CompactionStrategy::z_order;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CompactionStrategy>(hashCode);
          }

          return CompactionStrategy::NOT_SET;
        }

        Aws::String GetNameForCompactionStrategy(CompactionStrategy enumValue)
        {
          switch(enumValue)
          {
          case CompactionStrategy::NOT_SET:
            return {};
          case CompactionStrategy::binpack:
            return "binpack";
          case CompactionStrategy::sort:
            return "sort";
          case CompactionStrategy::z_order:
            return "z-order";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CompactionStrategyMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
