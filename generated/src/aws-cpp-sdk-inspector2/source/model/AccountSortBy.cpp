/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AccountSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace AccountSortByMapper
      {

        static constexpr uint32_t CRITICAL_HASH = ConstExprHashingUtils::HashString("CRITICAL");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");


        AccountSortBy GetAccountSortByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_HASH)
          {
            return AccountSortBy::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return AccountSortBy::HIGH;
          }
          else if (hashCode == ALL_HASH)
          {
            return AccountSortBy::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountSortBy>(hashCode);
          }

          return AccountSortBy::NOT_SET;
        }

        Aws::String GetNameForAccountSortBy(AccountSortBy enumValue)
        {
          switch(enumValue)
          {
          case AccountSortBy::NOT_SET:
            return {};
          case AccountSortBy::CRITICAL:
            return "CRITICAL";
          case AccountSortBy::HIGH:
            return "HIGH";
          case AccountSortBy::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountSortByMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
