/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/RefreshStrategy.h>
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
      namespace RefreshStrategyMapper
      {

        static const int Rolling_HASH = HashingUtils::HashString("Rolling");


        RefreshStrategy GetRefreshStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Rolling_HASH)
          {
            return RefreshStrategy::Rolling;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RefreshStrategy>(hashCode);
          }

          return RefreshStrategy::NOT_SET;
        }

        Aws::String GetNameForRefreshStrategy(RefreshStrategy enumValue)
        {
          switch(enumValue)
          {
          case RefreshStrategy::Rolling:
            return "Rolling";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RefreshStrategyMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
