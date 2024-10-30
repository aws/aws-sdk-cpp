/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteSteeringDirection.h>
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
      namespace RouteSteeringDirectionMapper
      {

        static const int Left_HASH = HashingUtils::HashString("Left");
        static const int Right_HASH = HashingUtils::HashString("Right");
        static const int Straight_HASH = HashingUtils::HashString("Straight");


        RouteSteeringDirection GetRouteSteeringDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Left_HASH)
          {
            return RouteSteeringDirection::Left;
          }
          else if (hashCode == Right_HASH)
          {
            return RouteSteeringDirection::Right;
          }
          else if (hashCode == Straight_HASH)
          {
            return RouteSteeringDirection::Straight;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteSteeringDirection>(hashCode);
          }

          return RouteSteeringDirection::NOT_SET;
        }

        Aws::String GetNameForRouteSteeringDirection(RouteSteeringDirection enumValue)
        {
          switch(enumValue)
          {
          case RouteSteeringDirection::NOT_SET:
            return {};
          case RouteSteeringDirection::Left:
            return "Left";
          case RouteSteeringDirection::Right:
            return "Right";
          case RouteSteeringDirection::Straight:
            return "Straight";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteSteeringDirectionMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
