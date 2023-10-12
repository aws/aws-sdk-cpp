/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/Order.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectCases
  {
    namespace Model
    {
      namespace OrderMapper
      {

        static constexpr uint32_t Asc_HASH = ConstExprHashingUtils::HashString("Asc");
        static constexpr uint32_t Desc_HASH = ConstExprHashingUtils::HashString("Desc");


        Order GetOrderForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Asc_HASH)
          {
            return Order::Asc;
          }
          else if (hashCode == Desc_HASH)
          {
            return Order::Desc;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Order>(hashCode);
          }

          return Order::NOT_SET;
        }

        Aws::String GetNameForOrder(Order enumValue)
        {
          switch(enumValue)
          {
          case Order::NOT_SET:
            return {};
          case Order::Asc:
            return "Asc";
          case Order::Desc:
            return "Desc";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrderMapper
    } // namespace Model
  } // namespace ConnectCases
} // namespace Aws
