/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UserIdentityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace UserIdentityTypeMapper
      {

        static const int AssumedRole_HASH = HashingUtils::HashString("AssumedRole");
        static const int IAMUser_HASH = HashingUtils::HashString("IAMUser");
        static const int FederatedUser_HASH = HashingUtils::HashString("FederatedUser");
        static const int Root_HASH = HashingUtils::HashString("Root");
        static const int AWSAccount_HASH = HashingUtils::HashString("AWSAccount");
        static const int AWSService_HASH = HashingUtils::HashString("AWSService");


        UserIdentityType GetUserIdentityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AssumedRole_HASH)
          {
            return UserIdentityType::AssumedRole;
          }
          else if (hashCode == IAMUser_HASH)
          {
            return UserIdentityType::IAMUser;
          }
          else if (hashCode == FederatedUser_HASH)
          {
            return UserIdentityType::FederatedUser;
          }
          else if (hashCode == Root_HASH)
          {
            return UserIdentityType::Root;
          }
          else if (hashCode == AWSAccount_HASH)
          {
            return UserIdentityType::AWSAccount;
          }
          else if (hashCode == AWSService_HASH)
          {
            return UserIdentityType::AWSService;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserIdentityType>(hashCode);
          }

          return UserIdentityType::NOT_SET;
        }

        Aws::String GetNameForUserIdentityType(UserIdentityType enumValue)
        {
          switch(enumValue)
          {
          case UserIdentityType::AssumedRole:
            return "AssumedRole";
          case UserIdentityType::IAMUser:
            return "IAMUser";
          case UserIdentityType::FederatedUser:
            return "FederatedUser";
          case UserIdentityType::Root:
            return "Root";
          case UserIdentityType::AWSAccount:
            return "AWSAccount";
          case UserIdentityType::AWSService:
            return "AWSService";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserIdentityTypeMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
