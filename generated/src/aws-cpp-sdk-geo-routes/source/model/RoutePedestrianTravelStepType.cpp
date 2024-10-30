/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RoutePedestrianTravelStepType.h>
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
      namespace RoutePedestrianTravelStepTypeMapper
      {

        static const int Arrive_HASH = HashingUtils::HashString("Arrive");
        static const int Continue_HASH = HashingUtils::HashString("Continue");
        static const int Depart_HASH = HashingUtils::HashString("Depart");
        static const int Keep_HASH = HashingUtils::HashString("Keep");
        static const int RoundaboutEnter_HASH = HashingUtils::HashString("RoundaboutEnter");
        static const int RoundaboutExit_HASH = HashingUtils::HashString("RoundaboutExit");
        static const int RoundaboutPass_HASH = HashingUtils::HashString("RoundaboutPass");
        static const int Turn_HASH = HashingUtils::HashString("Turn");
        static const int Exit_HASH = HashingUtils::HashString("Exit");
        static const int Ramp_HASH = HashingUtils::HashString("Ramp");
        static const int UTurn_HASH = HashingUtils::HashString("UTurn");


        RoutePedestrianTravelStepType GetRoutePedestrianTravelStepTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Arrive_HASH)
          {
            return RoutePedestrianTravelStepType::Arrive;
          }
          else if (hashCode == Continue_HASH)
          {
            return RoutePedestrianTravelStepType::Continue;
          }
          else if (hashCode == Depart_HASH)
          {
            return RoutePedestrianTravelStepType::Depart;
          }
          else if (hashCode == Keep_HASH)
          {
            return RoutePedestrianTravelStepType::Keep;
          }
          else if (hashCode == RoundaboutEnter_HASH)
          {
            return RoutePedestrianTravelStepType::RoundaboutEnter;
          }
          else if (hashCode == RoundaboutExit_HASH)
          {
            return RoutePedestrianTravelStepType::RoundaboutExit;
          }
          else if (hashCode == RoundaboutPass_HASH)
          {
            return RoutePedestrianTravelStepType::RoundaboutPass;
          }
          else if (hashCode == Turn_HASH)
          {
            return RoutePedestrianTravelStepType::Turn;
          }
          else if (hashCode == Exit_HASH)
          {
            return RoutePedestrianTravelStepType::Exit;
          }
          else if (hashCode == Ramp_HASH)
          {
            return RoutePedestrianTravelStepType::Ramp;
          }
          else if (hashCode == UTurn_HASH)
          {
            return RoutePedestrianTravelStepType::UTurn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RoutePedestrianTravelStepType>(hashCode);
          }

          return RoutePedestrianTravelStepType::NOT_SET;
        }

        Aws::String GetNameForRoutePedestrianTravelStepType(RoutePedestrianTravelStepType enumValue)
        {
          switch(enumValue)
          {
          case RoutePedestrianTravelStepType::NOT_SET:
            return {};
          case RoutePedestrianTravelStepType::Arrive:
            return "Arrive";
          case RoutePedestrianTravelStepType::Continue:
            return "Continue";
          case RoutePedestrianTravelStepType::Depart:
            return "Depart";
          case RoutePedestrianTravelStepType::Keep:
            return "Keep";
          case RoutePedestrianTravelStepType::RoundaboutEnter:
            return "RoundaboutEnter";
          case RoutePedestrianTravelStepType::RoundaboutExit:
            return "RoundaboutExit";
          case RoutePedestrianTravelStepType::RoundaboutPass:
            return "RoundaboutPass";
          case RoutePedestrianTravelStepType::Turn:
            return "Turn";
          case RoutePedestrianTravelStepType::Exit:
            return "Exit";
          case RoutePedestrianTravelStepType::Ramp:
            return "Ramp";
          case RoutePedestrianTravelStepType::UTurn:
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

      } // namespace RoutePedestrianTravelStepTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
