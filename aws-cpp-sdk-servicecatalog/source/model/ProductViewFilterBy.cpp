/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/servicecatalog/model/ProductViewFilterBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace ProductViewFilterByMapper
      {

        static const int FullTextSearch_HASH = HashingUtils::HashString("FullTextSearch");
        static const int Owner_HASH = HashingUtils::HashString("Owner");
        static const int ProductType_HASH = HashingUtils::HashString("ProductType");


        ProductViewFilterBy GetProductViewFilterByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FullTextSearch_HASH)
          {
            return ProductViewFilterBy::FullTextSearch;
          }
          else if (hashCode == Owner_HASH)
          {
            return ProductViewFilterBy::Owner;
          }
          else if (hashCode == ProductType_HASH)
          {
            return ProductViewFilterBy::ProductType;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProductViewFilterBy>(hashCode);
          }

          return ProductViewFilterBy::NOT_SET;
        }

        Aws::String GetNameForProductViewFilterBy(ProductViewFilterBy enumValue)
        {
          switch(enumValue)
          {
          case ProductViewFilterBy::FullTextSearch:
            return "FullTextSearch";
          case ProductViewFilterBy::Owner:
            return "Owner";
          case ProductViewFilterBy::ProductType:
            return "ProductType";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ProductViewFilterByMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
