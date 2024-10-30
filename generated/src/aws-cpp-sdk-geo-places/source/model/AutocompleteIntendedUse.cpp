/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/AutocompleteIntendedUse.h>
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
      namespace AutocompleteIntendedUseMapper
      {

        static const int SingleUse_HASH = HashingUtils::HashString("SingleUse");


        AutocompleteIntendedUse GetAutocompleteIntendedUseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SingleUse_HASH)
          {
            return AutocompleteIntendedUse::SingleUse;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutocompleteIntendedUse>(hashCode);
          }

          return AutocompleteIntendedUse::NOT_SET;
        }

        Aws::String GetNameForAutocompleteIntendedUse(AutocompleteIntendedUse enumValue)
        {
          switch(enumValue)
          {
          case AutocompleteIntendedUse::NOT_SET:
            return {};
          case AutocompleteIntendedUse::SingleUse:
            return "SingleUse";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutocompleteIntendedUseMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
