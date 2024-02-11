/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/CheckoutType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManager
  {
    namespace Model
    {
      namespace CheckoutTypeMapper
      {

        static const int PROVISIONAL_HASH = HashingUtils::HashString("PROVISIONAL");
        static const int PERPETUAL_HASH = HashingUtils::HashString("PERPETUAL");


        CheckoutType GetCheckoutTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROVISIONAL_HASH)
          {
            return CheckoutType::PROVISIONAL;
          }
          else if (hashCode == PERPETUAL_HASH)
          {
            return CheckoutType::PERPETUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CheckoutType>(hashCode);
          }

          return CheckoutType::NOT_SET;
        }

        Aws::String GetNameForCheckoutType(CheckoutType enumValue)
        {
          switch(enumValue)
          {
          case CheckoutType::NOT_SET:
            return {};
          case CheckoutType::PROVISIONAL:
            return "PROVISIONAL";
          case CheckoutType::PERPETUAL:
            return "PERPETUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CheckoutTypeMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
