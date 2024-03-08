/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/UserType.h>
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
      namespace UserTypeMapper
      {

        static const int SSO_USER_HASH = HashingUtils::HashString("SSO_USER");
        static const int SSO_GROUP_HASH = HashingUtils::HashString("SSO_GROUP");


        UserType GetUserTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSO_USER_HASH)
          {
            return UserType::SSO_USER;
          }
          else if (hashCode == SSO_GROUP_HASH)
          {
            return UserType::SSO_GROUP;
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
          case UserType::SSO_USER:
            return "SSO_USER";
          case UserType::SSO_GROUP:
            return "SSO_GROUP";
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
  } // namespace ManagedGrafana
} // namespace Aws
