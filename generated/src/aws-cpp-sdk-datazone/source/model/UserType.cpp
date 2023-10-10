/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UserType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace UserTypeMapper
      {

        static const int IAM_USER_HASH = HashingUtils::HashString("IAM_USER");
        static const int IAM_ROLE_HASH = HashingUtils::HashString("IAM_ROLE");
        static const int SSO_USER_HASH = HashingUtils::HashString("SSO_USER");


        UserType GetUserTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_USER_HASH)
          {
            return UserType::IAM_USER;
          }
          else if (hashCode == IAM_ROLE_HASH)
          {
            return UserType::IAM_ROLE;
          }
          else if (hashCode == SSO_USER_HASH)
          {
            return UserType::SSO_USER;
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
          case UserType::NOT_SET:
            return {};
          case UserType::IAM_USER:
            return "IAM_USER";
          case UserType::IAM_ROLE:
            return "IAM_ROLE";
          case UserType::SSO_USER:
            return "SSO_USER";
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
  } // namespace DataZone
} // namespace Aws
