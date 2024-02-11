/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/OptimizationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LocationService
  {
    namespace Model
    {
      namespace OptimizationModeMapper
      {

        static const int FastestRoute_HASH = HashingUtils::HashString("FastestRoute");
        static const int ShortestRoute_HASH = HashingUtils::HashString("ShortestRoute");


        OptimizationMode GetOptimizationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FastestRoute_HASH)
          {
            return OptimizationMode::FastestRoute;
          }
          else if (hashCode == ShortestRoute_HASH)
          {
            return OptimizationMode::ShortestRoute;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OptimizationMode>(hashCode);
          }

          return OptimizationMode::NOT_SET;
        }

        Aws::String GetNameForOptimizationMode(OptimizationMode enumValue)
        {
          switch(enumValue)
          {
          case OptimizationMode::NOT_SET:
            return {};
          case OptimizationMode::FastestRoute:
            return "FastestRoute";
          case OptimizationMode::ShortestRoute:
            return "ShortestRoute";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OptimizationModeMapper
    } // namespace Model
  } // namespace LocationService
} // namespace Aws
