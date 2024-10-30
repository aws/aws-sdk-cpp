/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationConstraint.h>
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
      namespace WaypointOptimizationConstraintMapper
      {

        static const int AccessHours_HASH = HashingUtils::HashString("AccessHours");
        static const int AppointmentTime_HASH = HashingUtils::HashString("AppointmentTime");
        static const int Before_HASH = HashingUtils::HashString("Before");
        static const int Heading_HASH = HashingUtils::HashString("Heading");
        static const int ServiceDuration_HASH = HashingUtils::HashString("ServiceDuration");
        static const int SideOfStreet_HASH = HashingUtils::HashString("SideOfStreet");


        WaypointOptimizationConstraint GetWaypointOptimizationConstraintForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccessHours_HASH)
          {
            return WaypointOptimizationConstraint::AccessHours;
          }
          else if (hashCode == AppointmentTime_HASH)
          {
            return WaypointOptimizationConstraint::AppointmentTime;
          }
          else if (hashCode == Before_HASH)
          {
            return WaypointOptimizationConstraint::Before;
          }
          else if (hashCode == Heading_HASH)
          {
            return WaypointOptimizationConstraint::Heading;
          }
          else if (hashCode == ServiceDuration_HASH)
          {
            return WaypointOptimizationConstraint::ServiceDuration;
          }
          else if (hashCode == SideOfStreet_HASH)
          {
            return WaypointOptimizationConstraint::SideOfStreet;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WaypointOptimizationConstraint>(hashCode);
          }

          return WaypointOptimizationConstraint::NOT_SET;
        }

        Aws::String GetNameForWaypointOptimizationConstraint(WaypointOptimizationConstraint enumValue)
        {
          switch(enumValue)
          {
          case WaypointOptimizationConstraint::NOT_SET:
            return {};
          case WaypointOptimizationConstraint::AccessHours:
            return "AccessHours";
          case WaypointOptimizationConstraint::AppointmentTime:
            return "AppointmentTime";
          case WaypointOptimizationConstraint::Before:
            return "Before";
          case WaypointOptimizationConstraint::Heading:
            return "Heading";
          case WaypointOptimizationConstraint::ServiceDuration:
            return "ServiceDuration";
          case WaypointOptimizationConstraint::SideOfStreet:
            return "SideOfStreet";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WaypointOptimizationConstraintMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
