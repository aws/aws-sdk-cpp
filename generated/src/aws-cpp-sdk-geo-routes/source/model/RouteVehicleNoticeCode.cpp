/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteVehicleNoticeCode.h>
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
      namespace RouteVehicleNoticeCodeMapper
      {

        static const int AccuratePolylineUnavailable_HASH = HashingUtils::HashString("AccuratePolylineUnavailable");
        static const int Other_HASH = HashingUtils::HashString("Other");
        static const int PotentialViolatedAvoidTollRoadUsage_HASH = HashingUtils::HashString("PotentialViolatedAvoidTollRoadUsage");
        static const int PotentialViolatedCarpoolUsage_HASH = HashingUtils::HashString("PotentialViolatedCarpoolUsage");
        static const int PotentialViolatedTurnRestrictionUsage_HASH = HashingUtils::HashString("PotentialViolatedTurnRestrictionUsage");
        static const int PotentialViolatedVehicleRestrictionUsage_HASH = HashingUtils::HashString("PotentialViolatedVehicleRestrictionUsage");
        static const int PotentialViolatedZoneRestrictionUsage_HASH = HashingUtils::HashString("PotentialViolatedZoneRestrictionUsage");
        static const int SeasonalClosure_HASH = HashingUtils::HashString("SeasonalClosure");
        static const int TollsDataTemporarilyUnavailable_HASH = HashingUtils::HashString("TollsDataTemporarilyUnavailable");
        static const int TollsDataUnavailable_HASH = HashingUtils::HashString("TollsDataUnavailable");
        static const int TollTransponder_HASH = HashingUtils::HashString("TollTransponder");
        static const int ViolatedAvoidControlledAccessHighway_HASH = HashingUtils::HashString("ViolatedAvoidControlledAccessHighway");
        static const int ViolatedAvoidDifficultTurns_HASH = HashingUtils::HashString("ViolatedAvoidDifficultTurns");
        static const int ViolatedAvoidDirtRoad_HASH = HashingUtils::HashString("ViolatedAvoidDirtRoad");
        static const int ViolatedAvoidSeasonalClosure_HASH = HashingUtils::HashString("ViolatedAvoidSeasonalClosure");
        static const int ViolatedAvoidTollRoad_HASH = HashingUtils::HashString("ViolatedAvoidTollRoad");
        static const int ViolatedAvoidTollTransponder_HASH = HashingUtils::HashString("ViolatedAvoidTollTransponder");
        static const int ViolatedAvoidTruckRoadType_HASH = HashingUtils::HashString("ViolatedAvoidTruckRoadType");
        static const int ViolatedAvoidTunnel_HASH = HashingUtils::HashString("ViolatedAvoidTunnel");
        static const int ViolatedAvoidUTurns_HASH = HashingUtils::HashString("ViolatedAvoidUTurns");
        static const int ViolatedBlockedRoad_HASH = HashingUtils::HashString("ViolatedBlockedRoad");
        static const int ViolatedCarpool_HASH = HashingUtils::HashString("ViolatedCarpool");
        static const int ViolatedEmergencyGate_HASH = HashingUtils::HashString("ViolatedEmergencyGate");
        static const int ViolatedStartDirection_HASH = HashingUtils::HashString("ViolatedStartDirection");
        static const int ViolatedTurnRestriction_HASH = HashingUtils::HashString("ViolatedTurnRestriction");
        static const int ViolatedVehicleRestriction_HASH = HashingUtils::HashString("ViolatedVehicleRestriction");
        static const int ViolatedZoneRestriction_HASH = HashingUtils::HashString("ViolatedZoneRestriction");


        RouteVehicleNoticeCode GetRouteVehicleNoticeCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccuratePolylineUnavailable_HASH)
          {
            return RouteVehicleNoticeCode::AccuratePolylineUnavailable;
          }
          else if (hashCode == Other_HASH)
          {
            return RouteVehicleNoticeCode::Other;
          }
          else if (hashCode == PotentialViolatedAvoidTollRoadUsage_HASH)
          {
            return RouteVehicleNoticeCode::PotentialViolatedAvoidTollRoadUsage;
          }
          else if (hashCode == PotentialViolatedCarpoolUsage_HASH)
          {
            return RouteVehicleNoticeCode::PotentialViolatedCarpoolUsage;
          }
          else if (hashCode == PotentialViolatedTurnRestrictionUsage_HASH)
          {
            return RouteVehicleNoticeCode::PotentialViolatedTurnRestrictionUsage;
          }
          else if (hashCode == PotentialViolatedVehicleRestrictionUsage_HASH)
          {
            return RouteVehicleNoticeCode::PotentialViolatedVehicleRestrictionUsage;
          }
          else if (hashCode == PotentialViolatedZoneRestrictionUsage_HASH)
          {
            return RouteVehicleNoticeCode::PotentialViolatedZoneRestrictionUsage;
          }
          else if (hashCode == SeasonalClosure_HASH)
          {
            return RouteVehicleNoticeCode::SeasonalClosure;
          }
          else if (hashCode == TollsDataTemporarilyUnavailable_HASH)
          {
            return RouteVehicleNoticeCode::TollsDataTemporarilyUnavailable;
          }
          else if (hashCode == TollsDataUnavailable_HASH)
          {
            return RouteVehicleNoticeCode::TollsDataUnavailable;
          }
          else if (hashCode == TollTransponder_HASH)
          {
            return RouteVehicleNoticeCode::TollTransponder;
          }
          else if (hashCode == ViolatedAvoidControlledAccessHighway_HASH)
          {
            return RouteVehicleNoticeCode::ViolatedAvoidControlledAccessHighway;
          }
          else if (hashCode == ViolatedAvoidDifficultTurns_HASH)
          {
            return RouteVehicleNoticeCode::ViolatedAvoidDifficultTurns;
          }
          else if (hashCode == ViolatedAvoidDirtRoad_HASH)
          {
            return RouteVehicleNoticeCode::ViolatedAvoidDirtRoad;
          }
          else if (hashCode == ViolatedAvoidSeasonalClosure_HASH)
          {
            return RouteVehicleNoticeCode::ViolatedAvoidSeasonalClosure;
          }
          else if (hashCode == ViolatedAvoidTollRoad_HASH)
          {
            return RouteVehicleNoticeCode::ViolatedAvoidTollRoad;
          }
          else if (hashCode == ViolatedAvoidTollTransponder_HASH)
          {
            return RouteVehicleNoticeCode::ViolatedAvoidTollTransponder;
          }
          else if (hashCode == ViolatedAvoidTruckRoadType_HASH)
          {
            return RouteVehicleNoticeCode::ViolatedAvoidTruckRoadType;
          }
          else if (hashCode == ViolatedAvoidTunnel_HASH)
          {
            return RouteVehicleNoticeCode::ViolatedAvoidTunnel;
          }
          else if (hashCode == ViolatedAvoidUTurns_HASH)
          {
            return RouteVehicleNoticeCode::ViolatedAvoidUTurns;
          }
          else if (hashCode == ViolatedBlockedRoad_HASH)
          {
            return RouteVehicleNoticeCode::ViolatedBlockedRoad;
          }
          else if (hashCode == ViolatedCarpool_HASH)
          {
            return RouteVehicleNoticeCode::ViolatedCarpool;
          }
          else if (hashCode == ViolatedEmergencyGate_HASH)
          {
            return RouteVehicleNoticeCode::ViolatedEmergencyGate;
          }
          else if (hashCode == ViolatedStartDirection_HASH)
          {
            return RouteVehicleNoticeCode::ViolatedStartDirection;
          }
          else if (hashCode == ViolatedTurnRestriction_HASH)
          {
            return RouteVehicleNoticeCode::ViolatedTurnRestriction;
          }
          else if (hashCode == ViolatedVehicleRestriction_HASH)
          {
            return RouteVehicleNoticeCode::ViolatedVehicleRestriction;
          }
          else if (hashCode == ViolatedZoneRestriction_HASH)
          {
            return RouteVehicleNoticeCode::ViolatedZoneRestriction;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteVehicleNoticeCode>(hashCode);
          }

          return RouteVehicleNoticeCode::NOT_SET;
        }

        Aws::String GetNameForRouteVehicleNoticeCode(RouteVehicleNoticeCode enumValue)
        {
          switch(enumValue)
          {
          case RouteVehicleNoticeCode::NOT_SET:
            return {};
          case RouteVehicleNoticeCode::AccuratePolylineUnavailable:
            return "AccuratePolylineUnavailable";
          case RouteVehicleNoticeCode::Other:
            return "Other";
          case RouteVehicleNoticeCode::PotentialViolatedAvoidTollRoadUsage:
            return "PotentialViolatedAvoidTollRoadUsage";
          case RouteVehicleNoticeCode::PotentialViolatedCarpoolUsage:
            return "PotentialViolatedCarpoolUsage";
          case RouteVehicleNoticeCode::PotentialViolatedTurnRestrictionUsage:
            return "PotentialViolatedTurnRestrictionUsage";
          case RouteVehicleNoticeCode::PotentialViolatedVehicleRestrictionUsage:
            return "PotentialViolatedVehicleRestrictionUsage";
          case RouteVehicleNoticeCode::PotentialViolatedZoneRestrictionUsage:
            return "PotentialViolatedZoneRestrictionUsage";
          case RouteVehicleNoticeCode::SeasonalClosure:
            return "SeasonalClosure";
          case RouteVehicleNoticeCode::TollsDataTemporarilyUnavailable:
            return "TollsDataTemporarilyUnavailable";
          case RouteVehicleNoticeCode::TollsDataUnavailable:
            return "TollsDataUnavailable";
          case RouteVehicleNoticeCode::TollTransponder:
            return "TollTransponder";
          case RouteVehicleNoticeCode::ViolatedAvoidControlledAccessHighway:
            return "ViolatedAvoidControlledAccessHighway";
          case RouteVehicleNoticeCode::ViolatedAvoidDifficultTurns:
            return "ViolatedAvoidDifficultTurns";
          case RouteVehicleNoticeCode::ViolatedAvoidDirtRoad:
            return "ViolatedAvoidDirtRoad";
          case RouteVehicleNoticeCode::ViolatedAvoidSeasonalClosure:
            return "ViolatedAvoidSeasonalClosure";
          case RouteVehicleNoticeCode::ViolatedAvoidTollRoad:
            return "ViolatedAvoidTollRoad";
          case RouteVehicleNoticeCode::ViolatedAvoidTollTransponder:
            return "ViolatedAvoidTollTransponder";
          case RouteVehicleNoticeCode::ViolatedAvoidTruckRoadType:
            return "ViolatedAvoidTruckRoadType";
          case RouteVehicleNoticeCode::ViolatedAvoidTunnel:
            return "ViolatedAvoidTunnel";
          case RouteVehicleNoticeCode::ViolatedAvoidUTurns:
            return "ViolatedAvoidUTurns";
          case RouteVehicleNoticeCode::ViolatedBlockedRoad:
            return "ViolatedBlockedRoad";
          case RouteVehicleNoticeCode::ViolatedCarpool:
            return "ViolatedCarpool";
          case RouteVehicleNoticeCode::ViolatedEmergencyGate:
            return "ViolatedEmergencyGate";
          case RouteVehicleNoticeCode::ViolatedStartDirection:
            return "ViolatedStartDirection";
          case RouteVehicleNoticeCode::ViolatedTurnRestriction:
            return "ViolatedTurnRestriction";
          case RouteVehicleNoticeCode::ViolatedVehicleRestriction:
            return "ViolatedVehicleRestriction";
          case RouteVehicleNoticeCode::ViolatedZoneRestriction:
            return "ViolatedZoneRestriction";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteVehicleNoticeCodeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
