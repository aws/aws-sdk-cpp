/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteFerryNoticeCode.h>
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
      namespace RouteFerryNoticeCodeMapper
      {

        static const int AccuratePolylineUnavailable_HASH = HashingUtils::HashString("AccuratePolylineUnavailable");
        static const int NoSchedule_HASH = HashingUtils::HashString("NoSchedule");
        static const int Other_HASH = HashingUtils::HashString("Other");
        static const int ViolatedAvoidFerry_HASH = HashingUtils::HashString("ViolatedAvoidFerry");
        static const int ViolatedAvoidRailFerry_HASH = HashingUtils::HashString("ViolatedAvoidRailFerry");
        static const int SeasonalClosure_HASH = HashingUtils::HashString("SeasonalClosure");
        static const int PotentialViolatedVehicleRestrictionUsage_HASH = HashingUtils::HashString("PotentialViolatedVehicleRestrictionUsage");


        RouteFerryNoticeCode GetRouteFerryNoticeCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccuratePolylineUnavailable_HASH)
          {
            return RouteFerryNoticeCode::AccuratePolylineUnavailable;
          }
          else if (hashCode == NoSchedule_HASH)
          {
            return RouteFerryNoticeCode::NoSchedule;
          }
          else if (hashCode == Other_HASH)
          {
            return RouteFerryNoticeCode::Other;
          }
          else if (hashCode == ViolatedAvoidFerry_HASH)
          {
            return RouteFerryNoticeCode::ViolatedAvoidFerry;
          }
          else if (hashCode == ViolatedAvoidRailFerry_HASH)
          {
            return RouteFerryNoticeCode::ViolatedAvoidRailFerry;
          }
          else if (hashCode == SeasonalClosure_HASH)
          {
            return RouteFerryNoticeCode::SeasonalClosure;
          }
          else if (hashCode == PotentialViolatedVehicleRestrictionUsage_HASH)
          {
            return RouteFerryNoticeCode::PotentialViolatedVehicleRestrictionUsage;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteFerryNoticeCode>(hashCode);
          }

          return RouteFerryNoticeCode::NOT_SET;
        }

        Aws::String GetNameForRouteFerryNoticeCode(RouteFerryNoticeCode enumValue)
        {
          switch(enumValue)
          {
          case RouteFerryNoticeCode::NOT_SET:
            return {};
          case RouteFerryNoticeCode::AccuratePolylineUnavailable:
            return "AccuratePolylineUnavailable";
          case RouteFerryNoticeCode::NoSchedule:
            return "NoSchedule";
          case RouteFerryNoticeCode::Other:
            return "Other";
          case RouteFerryNoticeCode::ViolatedAvoidFerry:
            return "ViolatedAvoidFerry";
          case RouteFerryNoticeCode::ViolatedAvoidRailFerry:
            return "ViolatedAvoidRailFerry";
          case RouteFerryNoticeCode::SeasonalClosure:
            return "SeasonalClosure";
          case RouteFerryNoticeCode::PotentialViolatedVehicleRestrictionUsage:
            return "PotentialViolatedVehicleRestrictionUsage";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteFerryNoticeCodeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
