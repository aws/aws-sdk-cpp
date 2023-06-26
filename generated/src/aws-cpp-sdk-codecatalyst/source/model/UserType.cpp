/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/UserType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCatalyst
  {
    namespace Model
    {
      namespace UserTypeMapper
      {

        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int AWS_ACCOUNT_HASH = HashingUtils::HashString("AWS_ACCOUNT");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        UserType GetUserTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return UserType::USER;
          }
          else if (hashCode == AWS_ACCOUNT_HASH)
          {
            return UserType::AWS_ACCOUNT;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return UserType::UNKNOWN;
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
          case UserType::AWS_ACCOUNT:
            return "AWS_ACCOUNT";
          case UserType::UNKNOWN:
            return "UNKNOWN";
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
  } // namespace CodeCatalyst
} // namespace Aws
