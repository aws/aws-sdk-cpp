/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/GeocodeFilterPlaceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GeoPlaces
  {
    namespace Model
    {
      namespace GeocodeFilterPlaceTypeMapper
      {

        static const int Locality_HASH = HashingUtils::HashString("Locality");
        static const int PostalCode_HASH = HashingUtils::HashString("PostalCode");
        static const int Intersection_HASH = HashingUtils::HashString("Intersection");
        static const int Street_HASH = HashingUtils::HashString("Street");
        static const int PointAddress_HASH = HashingUtils::HashString("PointAddress");
        static const int InterpolatedAddress_HASH = HashingUtils::HashString("InterpolatedAddress");


        GeocodeFilterPlaceType GetGeocodeFilterPlaceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Locality_HASH)
          {
            return GeocodeFilterPlaceType::Locality;
          }
          else if (hashCode == PostalCode_HASH)
          {
            return GeocodeFilterPlaceType::PostalCode;
          }
          else if (hashCode == Intersection_HASH)
          {
            return GeocodeFilterPlaceType::Intersection;
          }
          else if (hashCode == Street_HASH)
          {
            return GeocodeFilterPlaceType::Street;
          }
          else if (hashCode == PointAddress_HASH)
          {
            return GeocodeFilterPlaceType::PointAddress;
          }
          else if (hashCode == InterpolatedAddress_HASH)
          {
            return GeocodeFilterPlaceType::InterpolatedAddress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeocodeFilterPlaceType>(hashCode);
          }

          return GeocodeFilterPlaceType::NOT_SET;
        }

        Aws::String GetNameForGeocodeFilterPlaceType(GeocodeFilterPlaceType enumValue)
        {
          switch(enumValue)
          {
          case GeocodeFilterPlaceType::NOT_SET:
            return {};
          case GeocodeFilterPlaceType::Locality:
            return "Locality";
          case GeocodeFilterPlaceType::PostalCode:
            return "PostalCode";
          case GeocodeFilterPlaceType::Intersection:
            return "Intersection";
          case GeocodeFilterPlaceType::Street:
            return "Street";
          case GeocodeFilterPlaceType::PointAddress:
            return "PointAddress";
          case GeocodeFilterPlaceType::InterpolatedAddress:
            return "InterpolatedAddress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GeocodeFilterPlaceTypeMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
