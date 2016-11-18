/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/servicecatalog/model/AccessLevelFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace AccessLevelFilterKeyMapper
      {

        static const int Account_HASH = HashingUtils::HashString("Account");
        static const int Role_HASH = HashingUtils::HashString("Role");
        static const int User_HASH = HashingUtils::HashString("User");


        AccessLevelFilterKey GetAccessLevelFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Account_HASH)
          {
            return AccessLevelFilterKey::Account;
          }
          else if (hashCode == Role_HASH)
          {
            return AccessLevelFilterKey::Role;
          }
          else if (hashCode == User_HASH)
          {
            return AccessLevelFilterKey::User;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessLevelFilterKey>(hashCode);
          }

          return AccessLevelFilterKey::NOT_SET;
        }

        Aws::String GetNameForAccessLevelFilterKey(AccessLevelFilterKey enumValue)
        {
          switch(enumValue)
          {
          case AccessLevelFilterKey::Account:
            return "Account";
          case AccessLevelFilterKey::Role:
            return "Role";
          case AccessLevelFilterKey::User:
            return "User";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AccessLevelFilterKeyMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
