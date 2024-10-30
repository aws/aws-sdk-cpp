/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/SuggestResultItemType.h>
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
      namespace SuggestResultItemTypeMapper
      {

        static const int Place_HASH = HashingUtils::HashString("Place");
        static const int Query_HASH = HashingUtils::HashString("Query");


        SuggestResultItemType GetSuggestResultItemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Place_HASH)
          {
            return SuggestResultItemType::Place;
          }
          else if (hashCode == Query_HASH)
          {
            return SuggestResultItemType::Query;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SuggestResultItemType>(hashCode);
          }

          return SuggestResultItemType::NOT_SET;
        }

        Aws::String GetNameForSuggestResultItemType(SuggestResultItemType enumValue)
        {
          switch(enumValue)
          {
          case SuggestResultItemType::NOT_SET:
            return {};
          case SuggestResultItemType::Place:
            return "Place";
          case SuggestResultItemType::Query:
            return "Query";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SuggestResultItemTypeMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
