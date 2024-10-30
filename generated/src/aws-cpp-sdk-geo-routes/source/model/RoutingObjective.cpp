/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RoutingObjective.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GeoRoutes
  {
    namespace Model
    {
      namespace RoutingObjectiveMapper
      {

        static const int FastestRoute_HASH = HashingUtils::HashString("FastestRoute");
        static const int ShortestRoute_HASH = HashingUtils::HashString("ShortestRoute");


        RoutingObjective GetRoutingObjectiveForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FastestRoute_HASH)
          {
            return RoutingObjective::FastestRoute;
          }
          else if (hashCode == ShortestRoute_HASH)
          {
            return RoutingObjective::ShortestRoute;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RoutingObjective>(hashCode);
          }

          return RoutingObjective::NOT_SET;
        }

        Aws::String GetNameForRoutingObjective(RoutingObjective enumValue)
        {
          switch(enumValue)
          {
          case RoutingObjective::NOT_SET:
            return {};
          case RoutingObjective::FastestRoute:
            return "FastestRoute";
          case RoutingObjective::ShortestRoute:
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

      } // namespace RoutingObjectiveMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
