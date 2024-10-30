/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/SuggestIntendedUse.h>
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
      namespace SuggestIntendedUseMapper
      {

        static const int SingleUse_HASH = HashingUtils::HashString("SingleUse");


        SuggestIntendedUse GetSuggestIntendedUseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SingleUse_HASH)
          {
            return SuggestIntendedUse::SingleUse;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SuggestIntendedUse>(hashCode);
          }

          return SuggestIntendedUse::NOT_SET;
        }

        Aws::String GetNameForSuggestIntendedUse(SuggestIntendedUse enumValue)
        {
          switch(enumValue)
          {
          case SuggestIntendedUse::NOT_SET:
            return {};
          case SuggestIntendedUse::SingleUse:
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

      } // namespace SuggestIntendedUseMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
