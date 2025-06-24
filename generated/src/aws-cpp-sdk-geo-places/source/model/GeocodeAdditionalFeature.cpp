/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/GeocodeAdditionalFeature.h>
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
      namespace GeocodeAdditionalFeatureMapper
      {

        static const int TimeZone_HASH = HashingUtils::HashString("TimeZone");
        static const int Access_HASH = HashingUtils::HashString("Access");
        static const int SecondaryAddresses_HASH = HashingUtils::HashString("SecondaryAddresses");
        static const int Intersections_HASH = HashingUtils::HashString("Intersections");


        GeocodeAdditionalFeature GetGeocodeAdditionalFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TimeZone_HASH)
          {
            return GeocodeAdditionalFeature::TimeZone;
          }
          else if (hashCode == Access_HASH)
          {
            return GeocodeAdditionalFeature::Access;
          }
          else if (hashCode == SecondaryAddresses_HASH)
          {
            return GeocodeAdditionalFeature::SecondaryAddresses;
          }
          else if (hashCode == Intersections_HASH)
          {
            return GeocodeAdditionalFeature::Intersections;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeocodeAdditionalFeature>(hashCode);
          }

          return GeocodeAdditionalFeature::NOT_SET;
        }

        Aws::String GetNameForGeocodeAdditionalFeature(GeocodeAdditionalFeature enumValue)
        {
          switch(enumValue)
          {
          case GeocodeAdditionalFeature::NOT_SET:
            return {};
          case GeocodeAdditionalFeature::TimeZone:
            return "TimeZone";
          case GeocodeAdditionalFeature::Access:
            return "Access";
          case GeocodeAdditionalFeature::SecondaryAddresses:
            return "SecondaryAddresses";
          case GeocodeAdditionalFeature::Intersections:
            return "Intersections";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GeocodeAdditionalFeatureMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
