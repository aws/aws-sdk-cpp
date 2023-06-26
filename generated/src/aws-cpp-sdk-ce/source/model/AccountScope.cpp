/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/AccountScope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace AccountScopeMapper
      {

        static const int PAYER_HASH = HashingUtils::HashString("PAYER");
        static const int LINKED_HASH = HashingUtils::HashString("LINKED");


        AccountScope GetAccountScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PAYER_HASH)
          {
            return AccountScope::PAYER;
          }
          else if (hashCode == LINKED_HASH)
          {
            return AccountScope::LINKED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountScope>(hashCode);
          }

          return AccountScope::NOT_SET;
        }

        Aws::String GetNameForAccountScope(AccountScope enumValue)
        {
          switch(enumValue)
          {
          case AccountScope::PAYER:
            return "PAYER";
          case AccountScope::LINKED:
            return "LINKED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountScopeMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
