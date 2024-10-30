/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/AutocompleteAdditionalFeature.h>
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
      namespace AutocompleteAdditionalFeatureMapper
      {

        static const int Core_HASH = HashingUtils::HashString("Core");


        AutocompleteAdditionalFeature GetAutocompleteAdditionalFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Core_HASH)
          {
            return AutocompleteAdditionalFeature::Core;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutocompleteAdditionalFeature>(hashCode);
          }

          return AutocompleteAdditionalFeature::NOT_SET;
        }

        Aws::String GetNameForAutocompleteAdditionalFeature(AutocompleteAdditionalFeature enumValue)
        {
          switch(enumValue)
          {
          case AutocompleteAdditionalFeature::NOT_SET:
            return {};
          case AutocompleteAdditionalFeature::Core:
            return "Core";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutocompleteAdditionalFeatureMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
