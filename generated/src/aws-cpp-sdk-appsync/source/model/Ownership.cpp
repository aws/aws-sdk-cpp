/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/Ownership.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace OwnershipMapper
      {

        static const int CURRENT_ACCOUNT_HASH = HashingUtils::HashString("CURRENT_ACCOUNT");
        static const int OTHER_ACCOUNTS_HASH = HashingUtils::HashString("OTHER_ACCOUNTS");


        Ownership GetOwnershipForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CURRENT_ACCOUNT_HASH)
          {
            return Ownership::CURRENT_ACCOUNT;
          }
          else if (hashCode == OTHER_ACCOUNTS_HASH)
          {
            return Ownership::OTHER_ACCOUNTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ownership>(hashCode);
          }

          return Ownership::NOT_SET;
        }

        Aws::String GetNameForOwnership(Ownership enumValue)
        {
          switch(enumValue)
          {
          case Ownership::NOT_SET:
            return {};
          case Ownership::CURRENT_ACCOUNT:
            return "CURRENT_ACCOUNT";
          case Ownership::OTHER_ACCOUNTS:
            return "OTHER_ACCOUNTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OwnershipMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
