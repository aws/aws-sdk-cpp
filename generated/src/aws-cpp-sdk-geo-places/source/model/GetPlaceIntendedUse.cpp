/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/GetPlaceIntendedUse.h>
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
      namespace GetPlaceIntendedUseMapper
      {

        static const int SingleUse_HASH = HashingUtils::HashString("SingleUse");
        static const int Storage_HASH = HashingUtils::HashString("Storage");


        GetPlaceIntendedUse GetGetPlaceIntendedUseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SingleUse_HASH)
          {
            return GetPlaceIntendedUse::SingleUse;
          }
          else if (hashCode == Storage_HASH)
          {
            return GetPlaceIntendedUse::Storage;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GetPlaceIntendedUse>(hashCode);
          }

          return GetPlaceIntendedUse::NOT_SET;
        }

        Aws::String GetNameForGetPlaceIntendedUse(GetPlaceIntendedUse enumValue)
        {
          switch(enumValue)
          {
          case GetPlaceIntendedUse::NOT_SET:
            return {};
          case GetPlaceIntendedUse::SingleUse:
            return "SingleUse";
          case GetPlaceIntendedUse::Storage:
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

      } // namespace GetPlaceIntendedUseMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
