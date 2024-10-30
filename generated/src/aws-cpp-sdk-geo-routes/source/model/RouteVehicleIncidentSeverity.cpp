/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteVehicleIncidentSeverity.h>
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
      namespace RouteVehicleIncidentSeverityMapper
      {

        static const int Critical_HASH = HashingUtils::HashString("Critical");
        static const int High_HASH = HashingUtils::HashString("High");
        static const int Medium_HASH = HashingUtils::HashString("Medium");
        static const int Low_HASH = HashingUtils::HashString("Low");


        RouteVehicleIncidentSeverity GetRouteVehicleIncidentSeverityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Critical_HASH)
          {
            return RouteVehicleIncidentSeverity::Critical;
          }
          else if (hashCode == High_HASH)
          {
            return RouteVehicleIncidentSeverity::High;
          }
          else if (hashCode == Medium_HASH)
          {
            return RouteVehicleIncidentSeverity::Medium;
          }
          else if (hashCode == Low_HASH)
          {
            return RouteVehicleIncidentSeverity::Low;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteVehicleIncidentSeverity>(hashCode);
          }

          return RouteVehicleIncidentSeverity::NOT_SET;
        }

        Aws::String GetNameForRouteVehicleIncidentSeverity(RouteVehicleIncidentSeverity enumValue)
        {
          switch(enumValue)
          {
          case RouteVehicleIncidentSeverity::NOT_SET:
            return {};
          case RouteVehicleIncidentSeverity::Critical:
            return "Critical";
          case RouteVehicleIncidentSeverity::High:
            return "High";
          case RouteVehicleIncidentSeverity::Medium:
            return "Medium";
          case RouteVehicleIncidentSeverity::Low:
            return "Low";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteVehicleIncidentSeverityMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
