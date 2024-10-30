/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteZoneCategory.h>
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
      namespace RouteZoneCategoryMapper
      {

        static const int CongestionPricing_HASH = HashingUtils::HashString("CongestionPricing");
        static const int Environmental_HASH = HashingUtils::HashString("Environmental");
        static const int Vignette_HASH = HashingUtils::HashString("Vignette");


        RouteZoneCategory GetRouteZoneCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CongestionPricing_HASH)
          {
            return RouteZoneCategory::CongestionPricing;
          }
          else if (hashCode == Environmental_HASH)
          {
            return RouteZoneCategory::Environmental;
          }
          else if (hashCode == Vignette_HASH)
          {
            return RouteZoneCategory::Vignette;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteZoneCategory>(hashCode);
          }

          return RouteZoneCategory::NOT_SET;
        }

        Aws::String GetNameForRouteZoneCategory(RouteZoneCategory enumValue)
        {
          switch(enumValue)
          {
          case RouteZoneCategory::NOT_SET:
            return {};
          case RouteZoneCategory::CongestionPricing:
            return "CongestionPricing";
          case RouteZoneCategory::Environmental:
            return "Environmental";
          case RouteZoneCategory::Vignette:
            return "Vignette";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteZoneCategoryMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
