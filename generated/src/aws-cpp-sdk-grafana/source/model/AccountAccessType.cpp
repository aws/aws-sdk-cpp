/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/AccountAccessType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedGrafana
  {
    namespace Model
    {
      namespace AccountAccessTypeMapper
      {

        static const int CURRENT_ACCOUNT_HASH = HashingUtils::HashString("CURRENT_ACCOUNT");
        static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");


        AccountAccessType GetAccountAccessTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CURRENT_ACCOUNT_HASH)
          {
            return AccountAccessType::CURRENT_ACCOUNT;
          }
          else if (hashCode == ORGANIZATION_HASH)
          {
            return AccountAccessType::ORGANIZATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountAccessType>(hashCode);
          }

          return AccountAccessType::NOT_SET;
        }

        Aws::String GetNameForAccountAccessType(AccountAccessType enumValue)
        {
          switch(enumValue)
          {
          case AccountAccessType::NOT_SET:
            return {};
          case AccountAccessType::CURRENT_ACCOUNT:
            return "CURRENT_ACCOUNT";
          case AccountAccessType::ORGANIZATION:
            return "ORGANIZATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountAccessTypeMapper
    } // namespace Model
  } // namespace ManagedGrafana
} // namespace Aws
