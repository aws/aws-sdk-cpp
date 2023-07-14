/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeoSpatialDataRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace GeoSpatialDataRoleMapper
      {

        static const int COUNTRY_HASH = HashingUtils::HashString("COUNTRY");
        static const int STATE_HASH = HashingUtils::HashString("STATE");
        static const int COUNTY_HASH = HashingUtils::HashString("COUNTY");
        static const int CITY_HASH = HashingUtils::HashString("CITY");
        static const int POSTCODE_HASH = HashingUtils::HashString("POSTCODE");
        static const int LONGITUDE_HASH = HashingUtils::HashString("LONGITUDE");
        static const int LATITUDE_HASH = HashingUtils::HashString("LATITUDE");


        GeoSpatialDataRole GetGeoSpatialDataRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COUNTRY_HASH)
          {
            return GeoSpatialDataRole::COUNTRY;
          }
          else if (hashCode == STATE_HASH)
          {
            return GeoSpatialDataRole::STATE;
          }
          else if (hashCode == COUNTY_HASH)
          {
            return GeoSpatialDataRole::COUNTY;
          }
          else if (hashCode == CITY_HASH)
          {
            return GeoSpatialDataRole::CITY;
          }
          else if (hashCode == POSTCODE_HASH)
          {
            return GeoSpatialDataRole::POSTCODE;
          }
          else if (hashCode == LONGITUDE_HASH)
          {
            return GeoSpatialDataRole::LONGITUDE;
          }
          else if (hashCode == LATITUDE_HASH)
          {
            return GeoSpatialDataRole::LATITUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeoSpatialDataRole>(hashCode);
          }

          return GeoSpatialDataRole::NOT_SET;
        }

        Aws::String GetNameForGeoSpatialDataRole(GeoSpatialDataRole enumValue)
        {
          switch(enumValue)
          {
          case GeoSpatialDataRole::COUNTRY:
            return "COUNTRY";
          case GeoSpatialDataRole::STATE:
            return "STATE";
          case GeoSpatialDataRole::COUNTY:
            return "COUNTY";
          case GeoSpatialDataRole::CITY:
            return "CITY";
          case GeoSpatialDataRole::POSTCODE:
            return "POSTCODE";
          case GeoSpatialDataRole::LONGITUDE:
            return "LONGITUDE";
          case GeoSpatialDataRole::LATITUDE:
            return "LATITUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GeoSpatialDataRoleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
