/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/ReverseGeocodeFilterPlaceType.h>
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
      namespace ReverseGeocodeFilterPlaceTypeMapper
      {

        static const int Locality_HASH = HashingUtils::HashString("Locality");
        static const int Intersection_HASH = HashingUtils::HashString("Intersection");
        static const int Street_HASH = HashingUtils::HashString("Street");
        static const int PointAddress_HASH = HashingUtils::HashString("PointAddress");
        static const int InterpolatedAddress_HASH = HashingUtils::HashString("InterpolatedAddress");


        ReverseGeocodeFilterPlaceType GetReverseGeocodeFilterPlaceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Locality_HASH)
          {
            return ReverseGeocodeFilterPlaceType::Locality;
          }
          else if (hashCode == Intersection_HASH)
          {
            return ReverseGeocodeFilterPlaceType::Intersection;
          }
          else if (hashCode == Street_HASH)
          {
            return ReverseGeocodeFilterPlaceType::Street;
          }
          else if (hashCode == PointAddress_HASH)
          {
            return ReverseGeocodeFilterPlaceType::PointAddress;
          }
          else if (hashCode == InterpolatedAddress_HASH)
          {
            return ReverseGeocodeFilterPlaceType::InterpolatedAddress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReverseGeocodeFilterPlaceType>(hashCode);
          }

          return ReverseGeocodeFilterPlaceType::NOT_SET;
        }

        Aws::String GetNameForReverseGeocodeFilterPlaceType(ReverseGeocodeFilterPlaceType enumValue)
        {
          switch(enumValue)
          {
          case ReverseGeocodeFilterPlaceType::NOT_SET:
            return {};
          case ReverseGeocodeFilterPlaceType::Locality:
            return "Locality";
          case ReverseGeocodeFilterPlaceType::Intersection:
            return "Intersection";
          case ReverseGeocodeFilterPlaceType::Street:
            return "Street";
          case ReverseGeocodeFilterPlaceType::PointAddress:
            return "PointAddress";
          case ReverseGeocodeFilterPlaceType::InterpolatedAddress:
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

      } // namespace ReverseGeocodeFilterPlaceTypeMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
