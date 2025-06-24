/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/PlaceType.h>
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
      namespace PlaceTypeMapper
      {

        static const int Country_HASH = HashingUtils::HashString("Country");
        static const int Region_HASH = HashingUtils::HashString("Region");
        static const int SubRegion_HASH = HashingUtils::HashString("SubRegion");
        static const int Locality_HASH = HashingUtils::HashString("Locality");
        static const int District_HASH = HashingUtils::HashString("District");
        static const int SubDistrict_HASH = HashingUtils::HashString("SubDistrict");
        static const int PostalCode_HASH = HashingUtils::HashString("PostalCode");
        static const int Block_HASH = HashingUtils::HashString("Block");
        static const int SubBlock_HASH = HashingUtils::HashString("SubBlock");
        static const int Intersection_HASH = HashingUtils::HashString("Intersection");
        static const int Street_HASH = HashingUtils::HashString("Street");
        static const int PointOfInterest_HASH = HashingUtils::HashString("PointOfInterest");
        static const int PointAddress_HASH = HashingUtils::HashString("PointAddress");
        static const int InterpolatedAddress_HASH = HashingUtils::HashString("InterpolatedAddress");
        static const int SecondaryAddress_HASH = HashingUtils::HashString("SecondaryAddress");


        PlaceType GetPlaceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Country_HASH)
          {
            return PlaceType::Country;
          }
          else if (hashCode == Region_HASH)
          {
            return PlaceType::Region;
          }
          else if (hashCode == SubRegion_HASH)
          {
            return PlaceType::SubRegion;
          }
          else if (hashCode == Locality_HASH)
          {
            return PlaceType::Locality;
          }
          else if (hashCode == District_HASH)
          {
            return PlaceType::District;
          }
          else if (hashCode == SubDistrict_HASH)
          {
            return PlaceType::SubDistrict;
          }
          else if (hashCode == PostalCode_HASH)
          {
            return PlaceType::PostalCode;
          }
          else if (hashCode == Block_HASH)
          {
            return PlaceType::Block;
          }
          else if (hashCode == SubBlock_HASH)
          {
            return PlaceType::SubBlock;
          }
          else if (hashCode == Intersection_HASH)
          {
            return PlaceType::Intersection;
          }
          else if (hashCode == Street_HASH)
          {
            return PlaceType::Street;
          }
          else if (hashCode == PointOfInterest_HASH)
          {
            return PlaceType::PointOfInterest;
          }
          else if (hashCode == PointAddress_HASH)
          {
            return PlaceType::PointAddress;
          }
          else if (hashCode == InterpolatedAddress_HASH)
          {
            return PlaceType::InterpolatedAddress;
          }
          else if (hashCode == SecondaryAddress_HASH)
          {
            return PlaceType::SecondaryAddress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlaceType>(hashCode);
          }

          return PlaceType::NOT_SET;
        }

        Aws::String GetNameForPlaceType(PlaceType enumValue)
        {
          switch(enumValue)
          {
          case PlaceType::NOT_SET:
            return {};
          case PlaceType::Country:
            return "Country";
          case PlaceType::Region:
            return "Region";
          case PlaceType::SubRegion:
            return "SubRegion";
          case PlaceType::Locality:
            return "Locality";
          case PlaceType::District:
            return "District";
          case PlaceType::SubDistrict:
            return "SubDistrict";
          case PlaceType::PostalCode:
            return "PostalCode";
          case PlaceType::Block:
            return "Block";
          case PlaceType::SubBlock:
            return "SubBlock";
          case PlaceType::Intersection:
            return "Intersection";
          case PlaceType::Street:
            return "Street";
          case PlaceType::PointOfInterest:
            return "PointOfInterest";
          case PlaceType::PointAddress:
            return "PointAddress";
          case PlaceType::InterpolatedAddress:
            return "InterpolatedAddress";
          case PlaceType::SecondaryAddress:
            return "SecondaryAddress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlaceTypeMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
