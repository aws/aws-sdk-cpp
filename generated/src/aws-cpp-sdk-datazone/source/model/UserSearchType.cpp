/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UserSearchType.h>
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
      namespace UserSearchTypeMapper
      {

        static const int SSO_USER_HASH = HashingUtils::HashString("SSO_USER");
        static const int DATAZONE_USER_HASH = HashingUtils::HashString("DATAZONE_USER");
        static const int DATAZONE_SSO_USER_HASH = HashingUtils::HashString("DATAZONE_SSO_USER");
        static const int DATAZONE_IAM_USER_HASH = HashingUtils::HashString("DATAZONE_IAM_USER");


        UserSearchType GetUserSearchTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSO_USER_HASH)
          {
            return UserSearchType::SSO_USER;
          }
          else if (hashCode == DATAZONE_USER_HASH)
          {
            return UserSearchType::DATAZONE_USER;
          }
          else if (hashCode == DATAZONE_SSO_USER_HASH)
          {
            return UserSearchType::DATAZONE_SSO_USER;
          }
          else if (hashCode == DATAZONE_IAM_USER_HASH)
          {
            return UserSearchType::DATAZONE_IAM_USER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserSearchType>(hashCode);
          }

          return UserSearchType::NOT_SET;
        }

        Aws::String GetNameForUserSearchType(UserSearchType enumValue)
        {
          switch(enumValue)
          {
          case UserSearchType::NOT_SET:
            return {};
          case UserSearchType::SSO_USER:
            return "SSO_USER";
          case UserSearchType::DATAZONE_USER:
            return "DATAZONE_USER";
          case UserSearchType::DATAZONE_SSO_USER:
            return "DATAZONE_SSO_USER";
          case UserSearchType::DATAZONE_IAM_USER:
            return "DATAZONE_IAM_USER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserSearchTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
