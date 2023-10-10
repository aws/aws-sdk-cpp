/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UserProfileType.h>
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
      namespace UserProfileTypeMapper
      {

        static const int IAM_HASH = HashingUtils::HashString("IAM");
        static const int SSO_HASH = HashingUtils::HashString("SSO");


        UserProfileType GetUserProfileTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_HASH)
          {
            return UserProfileType::IAM;
          }
          else if (hashCode == SSO_HASH)
          {
            return UserProfileType::SSO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserProfileType>(hashCode);
          }

          return UserProfileType::NOT_SET;
        }

        Aws::String GetNameForUserProfileType(UserProfileType enumValue)
        {
          switch(enumValue)
          {
          case UserProfileType::NOT_SET:
            return {};
          case UserProfileType::IAM:
            return "IAM";
          case UserProfileType::SSO:
            return "SSO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserProfileTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
