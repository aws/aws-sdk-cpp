/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/ReverseGeocodeIntendedUse.h>
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
      namespace ReverseGeocodeIntendedUseMapper
      {

        static const int SingleUse_HASH = HashingUtils::HashString("SingleUse");
        static const int Storage_HASH = HashingUtils::HashString("Storage");


        ReverseGeocodeIntendedUse GetReverseGeocodeIntendedUseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SingleUse_HASH)
          {
            return ReverseGeocodeIntendedUse::SingleUse;
          }
          else if (hashCode == Storage_HASH)
          {
            return ReverseGeocodeIntendedUse::Storage;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReverseGeocodeIntendedUse>(hashCode);
          }

          return ReverseGeocodeIntendedUse::NOT_SET;
        }

        Aws::String GetNameForReverseGeocodeIntendedUse(ReverseGeocodeIntendedUse enumValue)
        {
          switch(enumValue)
          {
          case ReverseGeocodeIntendedUse::NOT_SET:
            return {};
          case ReverseGeocodeIntendedUse::SingleUse:
            return "SingleUse";
          case ReverseGeocodeIntendedUse::Storage:
            return "Storage";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReverseGeocodeIntendedUseMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
