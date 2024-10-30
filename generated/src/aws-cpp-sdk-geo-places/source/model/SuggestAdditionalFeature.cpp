/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/SuggestAdditionalFeature.h>
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
      namespace SuggestAdditionalFeatureMapper
      {

        static const int Core_HASH = HashingUtils::HashString("Core");
        static const int TimeZone_HASH = HashingUtils::HashString("TimeZone");
        static const int Phonemes_HASH = HashingUtils::HashString("Phonemes");
        static const int Access_HASH = HashingUtils::HashString("Access");


        SuggestAdditionalFeature GetSuggestAdditionalFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Core_HASH)
          {
            return SuggestAdditionalFeature::Core;
          }
          else if (hashCode == TimeZone_HASH)
          {
            return SuggestAdditionalFeature::TimeZone;
          }
          else if (hashCode == Phonemes_HASH)
          {
            return SuggestAdditionalFeature::Phonemes;
          }
          else if (hashCode == Access_HASH)
          {
            return SuggestAdditionalFeature::Access;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SuggestAdditionalFeature>(hashCode);
          }

          return SuggestAdditionalFeature::NOT_SET;
        }

        Aws::String GetNameForSuggestAdditionalFeature(SuggestAdditionalFeature enumValue)
        {
          switch(enumValue)
          {
          case SuggestAdditionalFeature::NOT_SET:
            return {};
          case SuggestAdditionalFeature::Core:
            return "Core";
          case SuggestAdditionalFeature::TimeZone:
            return "TimeZone";
          case SuggestAdditionalFeature::Phonemes:
            return "Phonemes";
          case SuggestAdditionalFeature::Access:
            return "Access";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SuggestAdditionalFeatureMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
