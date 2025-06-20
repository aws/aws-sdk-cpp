/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/ReverseGeocodeAdditionalFeature.h>
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
      namespace ReverseGeocodeAdditionalFeatureMapper
      {

        static const int TimeZone_HASH = HashingUtils::HashString("TimeZone");
        static const int Access_HASH = HashingUtils::HashString("Access");
        static const int Intersections_HASH = HashingUtils::HashString("Intersections");


        ReverseGeocodeAdditionalFeature GetReverseGeocodeAdditionalFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TimeZone_HASH)
          {
            return ReverseGeocodeAdditionalFeature::TimeZone;
          }
          else if (hashCode == Access_HASH)
          {
            return ReverseGeocodeAdditionalFeature::Access;
          }
          else if (hashCode == Intersections_HASH)
          {
            return ReverseGeocodeAdditionalFeature::Intersections;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReverseGeocodeAdditionalFeature>(hashCode);
          }

          return ReverseGeocodeAdditionalFeature::NOT_SET;
        }

        Aws::String GetNameForReverseGeocodeAdditionalFeature(ReverseGeocodeAdditionalFeature enumValue)
        {
          switch(enumValue)
          {
          case ReverseGeocodeAdditionalFeature::NOT_SET:
            return {};
          case ReverseGeocodeAdditionalFeature::TimeZone:
            return "TimeZone";
          case ReverseGeocodeAdditionalFeature::Access:
            return "Access";
          case ReverseGeocodeAdditionalFeature::Intersections:
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

      } // namespace ReverseGeocodeAdditionalFeatureMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
