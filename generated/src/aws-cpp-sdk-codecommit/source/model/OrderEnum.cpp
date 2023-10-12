/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/OrderEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCommit
  {
    namespace Model
    {
      namespace OrderEnumMapper
      {

        static constexpr uint32_t ascending_HASH = ConstExprHashingUtils::HashString("ascending");
        static constexpr uint32_t descending_HASH = ConstExprHashingUtils::HashString("descending");


        OrderEnum GetOrderEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ascending_HASH)
          {
            return OrderEnum::ascending;
          }
          else if (hashCode == descending_HASH)
          {
            return OrderEnum::descending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrderEnum>(hashCode);
          }

          return OrderEnum::NOT_SET;
        }

        Aws::String GetNameForOrderEnum(OrderEnum enumValue)
        {
          switch(enumValue)
          {
          case OrderEnum::NOT_SET:
            return {};
          case OrderEnum::ascending:
            return "ascending";
          case OrderEnum::descending:
            return "descending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrderEnumMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws
