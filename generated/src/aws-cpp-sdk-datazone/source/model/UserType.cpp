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

        static constexpr uint32_t IAM_USER_HASH = ConstExprHashingUtils::HashString("IAM_USER");
        static constexpr uint32_t IAM_ROLE_HASH = ConstExprHashingUtils::HashString("IAM_ROLE");
        static constexpr uint32_t SSO_USER_HASH = ConstExprHashingUtils::HashString("SSO_USER");


        UserType GetUserTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
