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

#include <aws/workdocs/model/UserType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace UserTypeMapper
      {

        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int ADMIN_HASH = HashingUtils::HashString("ADMIN");
        static const int POWERUSER_HASH = HashingUtils::HashString("POWERUSER");
        static const int MINIMALUSER_HASH = HashingUtils::HashString("MINIMALUSER");
        static const int WORKSPACESUSER_HASH = HashingUtils::HashString("WORKSPACESUSER");


        UserType GetUserTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return UserType::USER;
          }
          else if (hashCode == ADMIN_HASH)
          {
            return UserType::ADMIN;
          }
          else if (hashCode == POWERUSER_HASH)
          {
            return UserType::POWERUSER;
          }
          else if (hashCode == MINIMALUSER_HASH)
          {
            return UserType::MINIMALUSER;
          }
          else if (hashCode == WORKSPACESUSER_HASH)
          {
            return UserType::WORKSPACESUSER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserType>(hashCode);
          }

          return UserType::NOT_SET;
        }

        Aws::String GetNameForUserType(UserType enumValue)
        {
          switch(enumValue)
          {
          case UserType::USER:
            return "USER";
          case UserType::ADMIN:
            return "ADMIN";
          case UserType::POWERUSER:
            return "POWERUSER";
          case UserType::MINIMALUSER:
            return "MINIMALUSER";
          case UserType::WORKSPACESUSER:
            return "WORKSPACESUSER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
