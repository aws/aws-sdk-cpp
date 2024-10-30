/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/AutocompleteFilterPlaceType.h>
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
      namespace AutocompleteFilterPlaceTypeMapper
      {

        static const int Locality_HASH = HashingUtils::HashString("Locality");
        static const int PostalCode_HASH = HashingUtils::HashString("PostalCode");


        AutocompleteFilterPlaceType GetAutocompleteFilterPlaceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Locality_HASH)
          {
            return AutocompleteFilterPlaceType::Locality;
          }
          else if (hashCode == PostalCode_HASH)
          {
            return AutocompleteFilterPlaceType::PostalCode;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutocompleteFilterPlaceType>(hashCode);
          }

          return AutocompleteFilterPlaceType::NOT_SET;
        }

        Aws::String GetNameForAutocompleteFilterPlaceType(AutocompleteFilterPlaceType enumValue)
        {
          switch(enumValue)
          {
          case AutocompleteFilterPlaceType::NOT_SET:
            return {};
          case AutocompleteFilterPlaceType::Locality:
            return "Locality";
          case AutocompleteFilterPlaceType::PostalCode:
            return "PostalCode";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutocompleteFilterPlaceTypeMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
