/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteSpanAdditionalFeature.h>
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
      namespace RouteSpanAdditionalFeatureMapper
      {

        static const int BestCaseDuration_HASH = HashingUtils::HashString("BestCaseDuration");
        static const int CarAccess_HASH = HashingUtils::HashString("CarAccess");
        static const int Country_HASH = HashingUtils::HashString("Country");
        static const int Distance_HASH = HashingUtils::HashString("Distance");
        static const int Duration_HASH = HashingUtils::HashString("Duration");
        static const int DynamicSpeed_HASH = HashingUtils::HashString("DynamicSpeed");
        static const int FunctionalClassification_HASH = HashingUtils::HashString("FunctionalClassification");
        static const int Gates_HASH = HashingUtils::HashString("Gates");
        static const int Incidents_HASH = HashingUtils::HashString("Incidents");
        static const int Names_HASH = HashingUtils::HashString("Names");
        static const int Notices_HASH = HashingUtils::HashString("Notices");
        static const int PedestrianAccess_HASH = HashingUtils::HashString("PedestrianAccess");
        static const int RailwayCrossings_HASH = HashingUtils::HashString("RailwayCrossings");
        static const int Region_HASH = HashingUtils::HashString("Region");
        static const int RoadAttributes_HASH = HashingUtils::HashString("RoadAttributes");
        static const int RouteNumbers_HASH = HashingUtils::HashString("RouteNumbers");
        static const int ScooterAccess_HASH = HashingUtils::HashString("ScooterAccess");
        static const int SpeedLimit_HASH = HashingUtils::HashString("SpeedLimit");
        static const int TollSystems_HASH = HashingUtils::HashString("TollSystems");
        static const int TruckAccess_HASH = HashingUtils::HashString("TruckAccess");
        static const int TruckRoadTypes_HASH = HashingUtils::HashString("TruckRoadTypes");
        static const int TypicalDuration_HASH = HashingUtils::HashString("TypicalDuration");
        static const int Zones_HASH = HashingUtils::HashString("Zones");
        static const int Consumption_HASH = HashingUtils::HashString("Consumption");


        RouteSpanAdditionalFeature GetRouteSpanAdditionalFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BestCaseDuration_HASH)
          {
            return RouteSpanAdditionalFeature::BestCaseDuration;
          }
          else if (hashCode == CarAccess_HASH)
          {
            return RouteSpanAdditionalFeature::CarAccess;
          }
          else if (hashCode == Country_HASH)
          {
            return RouteSpanAdditionalFeature::Country;
          }
          else if (hashCode == Distance_HASH)
          {
            return RouteSpanAdditionalFeature::Distance;
          }
          else if (hashCode == Duration_HASH)
          {
            return RouteSpanAdditionalFeature::Duration;
          }
          else if (hashCode == DynamicSpeed_HASH)
          {
            return RouteSpanAdditionalFeature::DynamicSpeed;
          }
          else if (hashCode == FunctionalClassification_HASH)
          {
            return RouteSpanAdditionalFeature::FunctionalClassification;
          }
          else if (hashCode == Gates_HASH)
          {
            return RouteSpanAdditionalFeature::Gates;
          }
          else if (hashCode == Incidents_HASH)
          {
            return RouteSpanAdditionalFeature::Incidents;
          }
          else if (hashCode == Names_HASH)
          {
            return RouteSpanAdditionalFeature::Names;
          }
          else if (hashCode == Notices_HASH)
          {
            return RouteSpanAdditionalFeature::Notices;
          }
          else if (hashCode == PedestrianAccess_HASH)
          {
            return RouteSpanAdditionalFeature::PedestrianAccess;
          }
          else if (hashCode == RailwayCrossings_HASH)
          {
            return RouteSpanAdditionalFeature::RailwayCrossings;
          }
          else if (hashCode == Region_HASH)
          {
            return RouteSpanAdditionalFeature::Region;
          }
          else if (hashCode == RoadAttributes_HASH)
          {
            return RouteSpanAdditionalFeature::RoadAttributes;
          }
          else if (hashCode == RouteNumbers_HASH)
          {
            return RouteSpanAdditionalFeature::RouteNumbers;
          }
          else if (hashCode == ScooterAccess_HASH)
          {
            return RouteSpanAdditionalFeature::ScooterAccess;
          }
          else if (hashCode == SpeedLimit_HASH)
          {
            return RouteSpanAdditionalFeature::SpeedLimit;
          }
          else if (hashCode == TollSystems_HASH)
          {
            return RouteSpanAdditionalFeature::TollSystems;
          }
          else if (hashCode == TruckAccess_HASH)
          {
            return RouteSpanAdditionalFeature::TruckAccess;
          }
          else if (hashCode == TruckRoadTypes_HASH)
          {
            return RouteSpanAdditionalFeature::TruckRoadTypes;
          }
          else if (hashCode == TypicalDuration_HASH)
          {
            return RouteSpanAdditionalFeature::TypicalDuration;
          }
          else if (hashCode == Zones_HASH)
          {
            return RouteSpanAdditionalFeature::Zones;
          }
          else if (hashCode == Consumption_HASH)
          {
            return RouteSpanAdditionalFeature::Consumption;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteSpanAdditionalFeature>(hashCode);
          }

          return RouteSpanAdditionalFeature::NOT_SET;
        }

        Aws::String GetNameForRouteSpanAdditionalFeature(RouteSpanAdditionalFeature enumValue)
        {
          switch(enumValue)
          {
          case RouteSpanAdditionalFeature::NOT_SET:
            return {};
          case RouteSpanAdditionalFeature::BestCaseDuration:
            return "BestCaseDuration";
          case RouteSpanAdditionalFeature::CarAccess:
            return "CarAccess";
          case RouteSpanAdditionalFeature::Country:
            return "Country";
          case RouteSpanAdditionalFeature::Distance:
            return "Distance";
          case RouteSpanAdditionalFeature::Duration:
            return "Duration";
          case RouteSpanAdditionalFeature::DynamicSpeed:
            return "DynamicSpeed";
          case RouteSpanAdditionalFeature::FunctionalClassification:
            return "FunctionalClassification";
          case RouteSpanAdditionalFeature::Gates:
            return "Gates";
          case RouteSpanAdditionalFeature::Incidents:
            return "Incidents";
          case RouteSpanAdditionalFeature::Names:
            return "Names";
          case RouteSpanAdditionalFeature::Notices:
            return "Notices";
          case RouteSpanAdditionalFeature::PedestrianAccess:
            return "PedestrianAccess";
          case RouteSpanAdditionalFeature::RailwayCrossings:
            return "RailwayCrossings";
          case RouteSpanAdditionalFeature::Region:
            return "Region";
          case RouteSpanAdditionalFeature::RoadAttributes:
            return "RoadAttributes";
          case RouteSpanAdditionalFeature::RouteNumbers:
            return "RouteNumbers";
          case RouteSpanAdditionalFeature::ScooterAccess:
            return "ScooterAccess";
          case RouteSpanAdditionalFeature::SpeedLimit:
            return "SpeedLimit";
          case RouteSpanAdditionalFeature::TollSystems:
            return "TollSystems";
          case RouteSpanAdditionalFeature::TruckAccess:
            return "TruckAccess";
          case RouteSpanAdditionalFeature::TruckRoadTypes:
            return "TruckRoadTypes";
          case RouteSpanAdditionalFeature::TypicalDuration:
            return "TypicalDuration";
          case RouteSpanAdditionalFeature::Zones:
            return "Zones";
          case RouteSpanAdditionalFeature::Consumption:
            return "Consumption";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteSpanAdditionalFeatureMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
