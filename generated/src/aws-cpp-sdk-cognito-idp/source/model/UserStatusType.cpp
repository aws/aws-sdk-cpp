/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UserStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace UserStatusTypeMapper
      {

        static constexpr uint32_t UNCONFIRMED_HASH = ConstExprHashingUtils::HashString("UNCONFIRMED");
        static constexpr uint32_t CONFIRMED_HASH = ConstExprHashingUtils::HashString("CONFIRMED");
        static constexpr uint32_t ARCHIVED_HASH = ConstExprHashingUtils::HashString("ARCHIVED");
        static constexpr uint32_t COMPROMISED_HASH = ConstExprHashingUtils::HashString("COMPROMISED");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");
        static constexpr uint32_t RESET_REQUIRED_HASH = ConstExprHashingUtils::HashString("RESET_REQUIRED");
        static constexpr uint32_t FORCE_CHANGE_PASSWORD_HASH = ConstExprHashingUtils::HashString("FORCE_CHANGE_PASSWORD");


        UserStatusType GetUserStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNCONFIRMED_HASH)
          {
            return UserStatusType::UNCONFIRMED;
          }
          else if (hashCode == CONFIRMED_HASH)
          {
            return UserStatusType::CONFIRMED;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return UserStatusType::ARCHIVED;
          }
          else if (hashCode == COMPROMISED_HASH)
          {
            return UserStatusType::COMPROMISED;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return UserStatusType::UNKNOWN;
          }
          else if (hashCode == RESET_REQUIRED_HASH)
          {
            return UserStatusType::RESET_REQUIRED;
          }
          else if (hashCode == FORCE_CHANGE_PASSWORD_HASH)
          {
            return UserStatusType::FORCE_CHANGE_PASSWORD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserStatusType>(hashCode);
          }

          return UserStatusType::NOT_SET;
        }

        Aws::String GetNameForUserStatusType(UserStatusType enumValue)
        {
          switch(enumValue)
          {
          case UserStatusType::NOT_SET:
            return {};
          case UserStatusType::UNCONFIRMED:
            return "UNCONFIRMED";
          case UserStatusType::CONFIRMED:
            return "CONFIRMED";
          case UserStatusType::ARCHIVED:
            return "ARCHIVED";
          case UserStatusType::COMPROMISED:
            return "COMPROMISED";
          case UserStatusType::UNKNOWN:
            return "UNKNOWN";
          case UserStatusType::RESET_REQUIRED:
            return "RESET_REQUIRED";
          case UserStatusType::FORCE_CHANGE_PASSWORD:
            return "FORCE_CHANGE_PASSWORD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserStatusTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
