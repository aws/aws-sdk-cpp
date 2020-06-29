/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ProductCodeValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ProductCodeValuesMapper
      {

        static const int devpay_HASH = HashingUtils::HashString("devpay");
        static const int marketplace_HASH = HashingUtils::HashString("marketplace");


        ProductCodeValues GetProductCodeValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == devpay_HASH)
          {
            return ProductCodeValues::devpay;
          }
          else if (hashCode == marketplace_HASH)
          {
            return ProductCodeValues::marketplace;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProductCodeValues>(hashCode);
          }

          return ProductCodeValues::NOT_SET;
        }

        Aws::String GetNameForProductCodeValues(ProductCodeValues enumValue)
        {
          switch(enumValue)
          {
          case ProductCodeValues::devpay:
            return "devpay";
          case ProductCodeValues::marketplace:
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

      } // namespace ProductCodeValuesMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
