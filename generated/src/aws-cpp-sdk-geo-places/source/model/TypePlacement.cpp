/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/TypePlacement.h>
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
      namespace TypePlacementMapper
      {

        static const int BeforeBaseName_HASH = HashingUtils::HashString("BeforeBaseName");
        static const int AfterBaseName_HASH = HashingUtils::HashString("AfterBaseName");


        TypePlacement GetTypePlacementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BeforeBaseName_HASH)
          {
            return TypePlacement::BeforeBaseName;
          }
          else if (hashCode == AfterBaseName_HASH)
          {
            return TypePlacement::AfterBaseName;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TypePlacement>(hashCode);
          }

          return TypePlacement::NOT_SET;
        }

        Aws::String GetNameForTypePlacement(TypePlacement enumValue)
        {
          switch(enumValue)
          {
          case TypePlacement::NOT_SET:
            return {};
          case TypePlacement::BeforeBaseName:
            return "BeforeBaseName";
          case TypePlacement::AfterBaseName:
            return "AfterBaseName";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TypePlacementMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
