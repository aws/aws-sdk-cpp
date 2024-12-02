/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ProductCodeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace ProductCodeTypeMapper
      {

        static const int marketplace_HASH = HashingUtils::HashString("marketplace");


        ProductCodeType GetProductCodeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == marketplace_HASH)
          {
            return ProductCodeType::marketplace;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProductCodeType>(hashCode);
          }

          return ProductCodeType::NOT_SET;
        }

        Aws::String GetNameForProductCodeType(ProductCodeType enumValue)
        {
          switch(enumValue)
          {
          case ProductCodeType::NOT_SET:
            return {};
          case ProductCodeType::marketplace:
            return "marketplace";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProductCodeTypeMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
