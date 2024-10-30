/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/QueryType.h>
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
      namespace QueryTypeMapper
      {

        static const int Category_HASH = HashingUtils::HashString("Category");
        static const int BusinessChain_HASH = HashingUtils::HashString("BusinessChain");


        QueryType GetQueryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Category_HASH)
          {
            return QueryType::Category;
          }
          else if (hashCode == BusinessChain_HASH)
          {
            return QueryType::BusinessChain;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryType>(hashCode);
          }

          return QueryType::NOT_SET;
        }

        Aws::String GetNameForQueryType(QueryType enumValue)
        {
          switch(enumValue)
          {
          case QueryType::NOT_SET:
            return {};
          case QueryType::Category:
            return "Category";
          case QueryType::BusinessChain:
            return "BusinessChain";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryTypeMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
