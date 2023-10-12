/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/CustomLineItemType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BillingConductor
  {
    namespace Model
    {
      namespace CustomLineItemTypeMapper
      {

        static constexpr uint32_t CREDIT_HASH = ConstExprHashingUtils::HashString("CREDIT");
        static constexpr uint32_t FEE_HASH = ConstExprHashingUtils::HashString("FEE");


        CustomLineItemType GetCustomLineItemTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREDIT_HASH)
          {
            return CustomLineItemType::CREDIT;
          }
          else if (hashCode == FEE_HASH)
          {
            return CustomLineItemType::FEE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomLineItemType>(hashCode);
          }

          return CustomLineItemType::NOT_SET;
        }

        Aws::String GetNameForCustomLineItemType(CustomLineItemType enumValue)
        {
          switch(enumValue)
          {
          case CustomLineItemType::NOT_SET:
            return {};
          case CustomLineItemType::CREDIT:
            return "CREDIT";
          case CustomLineItemType::FEE:
            return "FEE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomLineItemTypeMapper
    } // namespace Model
  } // namespace BillingConductor
} // namespace Aws
