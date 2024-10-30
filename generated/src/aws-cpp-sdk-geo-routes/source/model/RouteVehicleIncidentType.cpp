/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteVehicleIncidentType.h>
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
      namespace RouteVehicleIncidentTypeMapper
      {

        static const int Accident_HASH = HashingUtils::HashString("Accident");
        static const int Congestion_HASH = HashingUtils::HashString("Congestion");
        static const int Construction_HASH = HashingUtils::HashString("Construction");
        static const int DisabledVehicle_HASH = HashingUtils::HashString("DisabledVehicle");
        static const int LaneRestriction_HASH = HashingUtils::HashString("LaneRestriction");
        static const int MassTransit_HASH = HashingUtils::HashString("MassTransit");
        static const int Other_HASH = HashingUtils::HashString("Other");
        static const int PlannedEvent_HASH = HashingUtils::HashString("PlannedEvent");
        static const int RoadClosure_HASH = HashingUtils::HashString("RoadClosure");
        static const int RoadHazard_HASH = HashingUtils::HashString("RoadHazard");
        static const int Weather_HASH = HashingUtils::HashString("Weather");


        RouteVehicleIncidentType GetRouteVehicleIncidentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Accident_HASH)
          {
            return RouteVehicleIncidentType::Accident;
          }
          else if (hashCode == Congestion_HASH)
          {
            return RouteVehicleIncidentType::Congestion;
          }
          else if (hashCode == Construction_HASH)
          {
            return RouteVehicleIncidentType::Construction;
          }
          else if (hashCode == DisabledVehicle_HASH)
          {
            return RouteVehicleIncidentType::DisabledVehicle;
          }
          else if (hashCode == LaneRestriction_HASH)
          {
            return RouteVehicleIncidentType::LaneRestriction;
          }
          else if (hashCode == MassTransit_HASH)
          {
            return RouteVehicleIncidentType::MassTransit;
          }
          else if (hashCode == Other_HASH)
          {
            return RouteVehicleIncidentType::Other;
          }
          else if (hashCode == PlannedEvent_HASH)
          {
            return RouteVehicleIncidentType::PlannedEvent;
          }
          else if (hashCode == RoadClosure_HASH)
          {
            return RouteVehicleIncidentType::RoadClosure;
          }
          else if (hashCode == RoadHazard_HASH)
          {
            return RouteVehicleIncidentType::RoadHazard;
          }
          else if (hashCode == Weather_HASH)
          {
            return RouteVehicleIncidentType::Weather;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteVehicleIncidentType>(hashCode);
          }

          return RouteVehicleIncidentType::NOT_SET;
        }

        Aws::String GetNameForRouteVehicleIncidentType(RouteVehicleIncidentType enumValue)
        {
          switch(enumValue)
          {
          case RouteVehicleIncidentType::NOT_SET:
            return {};
          case RouteVehicleIncidentType::Accident:
            return "Accident";
          case RouteVehicleIncidentType::Congestion:
            return "Congestion";
          case RouteVehicleIncidentType::Construction:
            return "Construction";
          case RouteVehicleIncidentType::DisabledVehicle:
            return "DisabledVehicle";
          case RouteVehicleIncidentType::LaneRestriction:
            return "LaneRestriction";
          case RouteVehicleIncidentType::MassTransit:
            return "MassTransit";
          case RouteVehicleIncidentType::Other:
            return "Other";
          case RouteVehicleIncidentType::PlannedEvent:
            return "PlannedEvent";
          case RouteVehicleIncidentType::RoadClosure:
            return "RoadClosure";
          case RouteVehicleIncidentType::RoadHazard:
            return "RoadHazard";
          case RouteVehicleIncidentType::Weather:
            return "Weather";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteVehicleIncidentTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
