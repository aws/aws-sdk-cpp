/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteVehicleTravelStepType.h>
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
      namespace RouteVehicleTravelStepTypeMapper
      {

        static const int Arrive_HASH = HashingUtils::HashString("Arrive");
        static const int Continue_HASH = HashingUtils::HashString("Continue");
        static const int ContinueHighway_HASH = HashingUtils::HashString("ContinueHighway");
        static const int Depart_HASH = HashingUtils::HashString("Depart");
        static const int EnterHighway_HASH = HashingUtils::HashString("EnterHighway");
        static const int Exit_HASH = HashingUtils::HashString("Exit");
        static const int Keep_HASH = HashingUtils::HashString("Keep");
        static const int Ramp_HASH = HashingUtils::HashString("Ramp");
        static const int RoundaboutEnter_HASH = HashingUtils::HashString("RoundaboutEnter");
        static const int RoundaboutExit_HASH = HashingUtils::HashString("RoundaboutExit");
        static const int RoundaboutPass_HASH = HashingUtils::HashString("RoundaboutPass");
        static const int Turn_HASH = HashingUtils::HashString("Turn");
        static const int UTurn_HASH = HashingUtils::HashString("UTurn");


        RouteVehicleTravelStepType GetRouteVehicleTravelStepTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Arrive_HASH)
          {
            return RouteVehicleTravelStepType::Arrive;
          }
          else if (hashCode == Continue_HASH)
          {
            return RouteVehicleTravelStepType::Continue;
          }
          else if (hashCode == ContinueHighway_HASH)
          {
            return RouteVehicleTravelStepType::ContinueHighway;
          }
          else if (hashCode == Depart_HASH)
          {
            return RouteVehicleTravelStepType::Depart;
          }
          else if (hashCode == EnterHighway_HASH)
          {
            return RouteVehicleTravelStepType::EnterHighway;
          }
          else if (hashCode == Exit_HASH)
          {
            return RouteVehicleTravelStepType::Exit;
          }
          else if (hashCode == Keep_HASH)
          {
            return RouteVehicleTravelStepType::Keep;
          }
          else if (hashCode == Ramp_HASH)
          {
            return RouteVehicleTravelStepType::Ramp;
          }
          else if (hashCode == RoundaboutEnter_HASH)
          {
            return RouteVehicleTravelStepType::RoundaboutEnter;
          }
          else if (hashCode == RoundaboutExit_HASH)
          {
            return RouteVehicleTravelStepType::RoundaboutExit;
          }
          else if (hashCode == RoundaboutPass_HASH)
          {
            return RouteVehicleTravelStepType::RoundaboutPass;
          }
          else if (hashCode == Turn_HASH)
          {
            return RouteVehicleTravelStepType::Turn;
          }
          else if (hashCode == UTurn_HASH)
          {
            return RouteVehicleTravelStepType::UTurn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteVehicleTravelStepType>(hashCode);
          }

          return RouteVehicleTravelStepType::NOT_SET;
        }

        Aws::String GetNameForRouteVehicleTravelStepType(RouteVehicleTravelStepType enumValue)
        {
          switch(enumValue)
          {
          case RouteVehicleTravelStepType::NOT_SET:
            return {};
          case RouteVehicleTravelStepType::Arrive:
            return "Arrive";
          case RouteVehicleTravelStepType::Continue:
            return "Continue";
          case RouteVehicleTravelStepType::ContinueHighway:
            return "ContinueHighway";
          case RouteVehicleTravelStepType::Depart:
            return "Depart";
          case RouteVehicleTravelStepType::EnterHighway:
            return "EnterHighway";
          case RouteVehicleTravelStepType::Exit:
            return "Exit";
          case RouteVehicleTravelStepType::Keep:
            return "Keep";
          case RouteVehicleTravelStepType::Ramp:
            return "Ramp";
          case RouteVehicleTravelStepType::RoundaboutEnter:
            return "RoundaboutEnter";
          case RouteVehicleTravelStepType::RoundaboutExit:
            return "RoundaboutExit";
          case RouteVehicleTravelStepType::RoundaboutPass:
            return "RoundaboutPass";
          case RouteVehicleTravelStepType::Turn:
            return "Turn";
          case RouteVehicleTravelStepType::UTurn:
            return "UTurn";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteVehicleTravelStepTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
