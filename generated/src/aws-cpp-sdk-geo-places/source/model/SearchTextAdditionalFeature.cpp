/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/SearchTextAdditionalFeature.h>
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
      namespace SearchTextAdditionalFeatureMapper
      {

        static const int TimeZone_HASH = HashingUtils::HashString("TimeZone");
        static const int Phonemes_HASH = HashingUtils::HashString("Phonemes");
        static const int Access_HASH = HashingUtils::HashString("Access");
        static const int Contact_HASH = HashingUtils::HashString("Contact");


        SearchTextAdditionalFeature GetSearchTextAdditionalFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TimeZone_HASH)
          {
            return SearchTextAdditionalFeature::TimeZone;
          }
          else if (hashCode == Phonemes_HASH)
          {
            return SearchTextAdditionalFeature::Phonemes;
          }
          else if (hashCode == Access_HASH)
          {
            return SearchTextAdditionalFeature::Access;
          }
          else if (hashCode == Contact_HASH)
          {
            return SearchTextAdditionalFeature::Contact;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchTextAdditionalFeature>(hashCode);
          }

          return SearchTextAdditionalFeature::NOT_SET;
        }

        Aws::String GetNameForSearchTextAdditionalFeature(SearchTextAdditionalFeature enumValue)
        {
          switch(enumValue)
          {
          case SearchTextAdditionalFeature::NOT_SET:
            return {};
          case SearchTextAdditionalFeature::TimeZone:
            return "TimeZone";
          case SearchTextAdditionalFeature::Phonemes:
            return "Phonemes";
          case SearchTextAdditionalFeature::Access:
            return "Access";
          case SearchTextAdditionalFeature::Contact:
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

      } // namespace SearchTextAdditionalFeatureMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
