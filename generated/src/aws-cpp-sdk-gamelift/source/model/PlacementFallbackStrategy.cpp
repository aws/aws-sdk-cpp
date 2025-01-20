/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/PlacementFallbackStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace PlacementFallbackStrategyMapper
      {

        static const int DEFAULT_AFTER_SINGLE_PASS_HASH = HashingUtils::HashString("DEFAULT_AFTER_SINGLE_PASS");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        PlacementFallbackStrategy GetPlacementFallbackStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_AFTER_SINGLE_PASS_HASH)
          {
            return PlacementFallbackStrategy::DEFAULT_AFTER_SINGLE_PASS;
          }
          else if (hashCode == NONE_HASH)
          {
            return PlacementFallbackStrategy::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlacementFallbackStrategy>(hashCode);
          }

          return PlacementFallbackStrategy::NOT_SET;
        }

        Aws::String GetNameForPlacementFallbackStrategy(PlacementFallbackStrategy enumValue)
        {
          switch(enumValue)
          {
          case PlacementFallbackStrategy::NOT_SET:
            return {};
          case PlacementFallbackStrategy::DEFAULT_AFTER_SINGLE_PASS:
            return "DEFAULT_AFTER_SINGLE_PASS";
          case PlacementFallbackStrategy::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlacementFallbackStrategyMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
