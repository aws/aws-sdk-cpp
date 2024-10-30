/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/SearchNearbyAdditionalFeature.h>
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
      namespace SearchNearbyAdditionalFeatureMapper
      {

        static const int TimeZone_HASH = HashingUtils::HashString("TimeZone");
        static const int Phonemes_HASH = HashingUtils::HashString("Phonemes");
        static const int Access_HASH = HashingUtils::HashString("Access");
        static const int Contact_HASH = HashingUtils::HashString("Contact");


        SearchNearbyAdditionalFeature GetSearchNearbyAdditionalFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TimeZone_HASH)
          {
            return SearchNearbyAdditionalFeature::TimeZone;
          }
          else if (hashCode == Phonemes_HASH)
          {
            return SearchNearbyAdditionalFeature::Phonemes;
          }
          else if (hashCode == Access_HASH)
          {
            return SearchNearbyAdditionalFeature::Access;
          }
          else if (hashCode == Contact_HASH)
          {
            return SearchNearbyAdditionalFeature::Contact;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchNearbyAdditionalFeature>(hashCode);
          }

          return SearchNearbyAdditionalFeature::NOT_SET;
        }

        Aws::String GetNameForSearchNearbyAdditionalFeature(SearchNearbyAdditionalFeature enumValue)
        {
          switch(enumValue)
          {
          case SearchNearbyAdditionalFeature::NOT_SET:
            return {};
          case SearchNearbyAdditionalFeature::TimeZone:
            return "TimeZone";
          case SearchNearbyAdditionalFeature::Phonemes:
            return "Phonemes";
          case SearchNearbyAdditionalFeature::Access:
            return "Access";
          case SearchNearbyAdditionalFeature::Contact:
            return "Contact";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchNearbyAdditionalFeatureMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
