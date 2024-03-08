/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/AccountTargeting.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FIS
  {
    namespace Model
    {
      namespace AccountTargetingMapper
      {

        static const int single_account_HASH = HashingUtils::HashString("single-account");
        static const int multi_account_HASH = HashingUtils::HashString("multi-account");


        AccountTargeting GetAccountTargetingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == single_account_HASH)
          {
            return AccountTargeting::single_account;
          }
          else if (hashCode == multi_account_HASH)
          {
            return AccountTargeting::multi_account;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountTargeting>(hashCode);
          }

          return AccountTargeting::NOT_SET;
        }

        Aws::String GetNameForAccountTargeting(AccountTargeting enumValue)
        {
          switch(enumValue)
          {
          case AccountTargeting::NOT_SET:
            return {};
          case AccountTargeting::single_account:
            return "single-account";
          case AccountTargeting::multi_account:
            return "multi-account";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountTargetingMapper
    } // namespace Model
  } // namespace FIS
} // namespace Aws
