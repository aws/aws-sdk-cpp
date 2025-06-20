/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/GetPlaceAdditionalFeature.h>
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
      namespace GetPlaceAdditionalFeatureMapper
      {

        static const int TimeZone_HASH = HashingUtils::HashString("TimeZone");
        static const int Phonemes_HASH = HashingUtils::HashString("Phonemes");
        static const int Access_HASH = HashingUtils::HashString("Access");
        static const int Contact_HASH = HashingUtils::HashString("Contact");
        static const int SecondaryAddresses_HASH = HashingUtils::HashString("SecondaryAddresses");


        GetPlaceAdditionalFeature GetGetPlaceAdditionalFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TimeZone_HASH)
          {
            return GetPlaceAdditionalFeature::TimeZone;
          }
          else if (hashCode == Phonemes_HASH)
          {
            return GetPlaceAdditionalFeature::Phonemes;
          }
          else if (hashCode == Access_HASH)
          {
            return GetPlaceAdditionalFeature::Access;
          }
          else if (hashCode == Contact_HASH)
          {
            return GetPlaceAdditionalFeature::Contact;
          }
          else if (hashCode == SecondaryAddresses_HASH)
          {
            return GetPlaceAdditionalFeature::SecondaryAddresses;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GetPlaceAdditionalFeature>(hashCode);
          }

          return GetPlaceAdditionalFeature::NOT_SET;
        }

        Aws::String GetNameForGetPlaceAdditionalFeature(GetPlaceAdditionalFeature enumValue)
        {
          switch(enumValue)
          {
          case GetPlaceAdditionalFeature::NOT_SET:
            return {};
          case GetPlaceAdditionalFeature::TimeZone:
            return "TimeZone";
          case GetPlaceAdditionalFeature::Phonemes:
            return "Phonemes";
          case GetPlaceAdditionalFeature::Access:
            return "Access";
          case GetPlaceAdditionalFeature::Contact:
            return "Contact";
          case GetPlaceAdditionalFeature::SecondaryAddresses:
            return "SecondaryAddresses";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GetPlaceAdditionalFeatureMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
