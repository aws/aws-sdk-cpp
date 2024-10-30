/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteRoadType.h>
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
      namespace RouteRoadTypeMapper
      {

        static const int Highway_HASH = HashingUtils::HashString("Highway");
        static const int Rural_HASH = HashingUtils::HashString("Rural");
        static const int Urban_HASH = HashingUtils::HashString("Urban");


        RouteRoadType GetRouteRoadTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Highway_HASH)
          {
            return RouteRoadType::Highway;
          }
          else if (hashCode == Rural_HASH)
          {
            return RouteRoadType::Rural;
          }
          else if (hashCode == Urban_HASH)
          {
            return RouteRoadType::Urban;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteRoadType>(hashCode);
          }

          return RouteRoadType::NOT_SET;
        }

        Aws::String GetNameForRouteRoadType(RouteRoadType enumValue)
        {
          switch(enumValue)
          {
          case RouteRoadType::NOT_SET:
            return {};
          case RouteRoadType::Highway:
            return "Highway";
          case RouteRoadType::Rural:
            return "Rural";
          case RouteRoadType::Urban:
            return "Urban";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteRoadTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
