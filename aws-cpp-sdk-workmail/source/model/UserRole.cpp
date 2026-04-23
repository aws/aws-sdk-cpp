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

#include <aws/workmail/model/UserRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkMail
  {
    namespace Model
    {
      namespace UserRoleMapper
      {

        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");
        static const int SYSTEM_USER_HASH = HashingUtils::HashString("SYSTEM_USER");


        UserRole GetUserRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return UserRole::USER;
          }
          else if (hashCode == RESOURCE_HASH)
          {
            return UserRole::RESOURCE;
          }
          else if (hashCode == SYSTEM_USER_HASH)
          {
            return UserRole::SYSTEM_USER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserRole>(hashCode);
          }

          return UserRole::NOT_SET;
        }

        Aws::String GetNameForUserRole(UserRole enumValue)
        {
          switch(enumValue)
          {
          case UserRole::USER:
            return "USER";
          case UserRole::RESOURCE:
            return "RESOURCE";
          case UserRole::SYSTEM_USER:
            return "SYSTEM_USER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserRoleMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws
