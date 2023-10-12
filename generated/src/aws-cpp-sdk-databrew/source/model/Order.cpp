/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/Order.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlueDataBrew
  {
    namespace Model
    {
      namespace OrderMapper
      {

        static constexpr uint32_t DESCENDING_HASH = ConstExprHashingUtils::HashString("DESCENDING");
        static constexpr uint32_t ASCENDING_HASH = ConstExprHashingUtils::HashString("ASCENDING");


        Order GetOrderForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DESCENDING_HASH)
          {
            return Order::DESCENDING;
          }
          else if (hashCode == ASCENDING_HASH)
          {
            return Order::ASCENDING;
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
          case Order::DESCENDING:
            return "DESCENDING";
          case Order::ASCENDING:
            return "ASCENDING";
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
  } // namespace GlueDataBrew
} // namespace Aws
