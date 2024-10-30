/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteMatrixZoneCategory.h>
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
      namespace RouteMatrixZoneCategoryMapper
      {

        static const int CongestionPricing_HASH = HashingUtils::HashString("CongestionPricing");
        static const int Environmental_HASH = HashingUtils::HashString("Environmental");
        static const int Vignette_HASH = HashingUtils::HashString("Vignette");


        RouteMatrixZoneCategory GetRouteMatrixZoneCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CongestionPricing_HASH)
          {
            return RouteMatrixZoneCategory::CongestionPricing;
          }
          else if (hashCode == Environmental_HASH)
          {
            return RouteMatrixZoneCategory::Environmental;
          }
          else if (hashCode == Vignette_HASH)
          {
            return RouteMatrixZoneCategory::Vignette;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteMatrixZoneCategory>(hashCode);
          }

          return RouteMatrixZoneCategory::NOT_SET;
        }

        Aws::String GetNameForRouteMatrixZoneCategory(RouteMatrixZoneCategory enumValue)
        {
          switch(enumValue)
          {
          case RouteMatrixZoneCategory::NOT_SET:
            return {};
          case RouteMatrixZoneCategory::CongestionPricing:
            return "CongestionPricing";
          case RouteMatrixZoneCategory::Environmental:
            return "Environmental";
          case RouteMatrixZoneCategory::Vignette:
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

      } // namespace RouteMatrixZoneCategoryMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
