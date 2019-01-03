/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
