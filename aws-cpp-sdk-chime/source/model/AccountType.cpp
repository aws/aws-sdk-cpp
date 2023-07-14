/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/AccountType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace AccountTypeMapper
      {

        static const int Team_HASH = HashingUtils::HashString("Team");
        static const int EnterpriseDirectory_HASH = HashingUtils::HashString("EnterpriseDirectory");
        static const int EnterpriseLWA_HASH = HashingUtils::HashString("EnterpriseLWA");
        static const int EnterpriseOIDC_HASH = HashingUtils::HashString("EnterpriseOIDC");


        AccountType GetAccountTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Team_HASH)
          {
            return AccountType::Team;
          }
          else if (hashCode == EnterpriseDirectory_HASH)
          {
            return AccountType::EnterpriseDirectory;
          }
          else if (hashCode == EnterpriseLWA_HASH)
          {
            return AccountType::EnterpriseLWA;
          }
          else if (hashCode == EnterpriseOIDC_HASH)
          {
            return AccountType::EnterpriseOIDC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountType>(hashCode);
          }

          return AccountType::NOT_SET;
        }

        Aws::String GetNameForAccountType(AccountType enumValue)
        {
          switch(enumValue)
          {
          case AccountType::Team:
            return "Team";
          case AccountType::EnterpriseDirectory:
            return "EnterpriseDirectory";
          case AccountType::EnterpriseLWA:
            return "EnterpriseLWA";
          case AccountType::EnterpriseOIDC:
            return "EnterpriseOIDC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountTypeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
