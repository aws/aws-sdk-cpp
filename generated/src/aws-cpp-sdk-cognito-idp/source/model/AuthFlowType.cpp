/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AuthFlowType.h>
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
      namespace AuthFlowTypeMapper
      {

        static constexpr uint32_t USER_SRP_AUTH_HASH = ConstExprHashingUtils::HashString("USER_SRP_AUTH");
        static constexpr uint32_t REFRESH_TOKEN_AUTH_HASH = ConstExprHashingUtils::HashString("REFRESH_TOKEN_AUTH");
        static constexpr uint32_t REFRESH_TOKEN_HASH = ConstExprHashingUtils::HashString("REFRESH_TOKEN");
        static constexpr uint32_t CUSTOM_AUTH_HASH = ConstExprHashingUtils::HashString("CUSTOM_AUTH");
        static constexpr uint32_t ADMIN_NO_SRP_AUTH_HASH = ConstExprHashingUtils::HashString("ADMIN_NO_SRP_AUTH");
        static constexpr uint32_t USER_PASSWORD_AUTH_HASH = ConstExprHashingUtils::HashString("USER_PASSWORD_AUTH");
        static constexpr uint32_t ADMIN_USER_PASSWORD_AUTH_HASH = ConstExprHashingUtils::HashString("ADMIN_USER_PASSWORD_AUTH");


        AuthFlowType GetAuthFlowTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_SRP_AUTH_HASH)
          {
            return AuthFlowType::USER_SRP_AUTH;
          }
          else if (hashCode == REFRESH_TOKEN_AUTH_HASH)
          {
            return AuthFlowType::REFRESH_TOKEN_AUTH;
          }
          else if (hashCode == REFRESH_TOKEN_HASH)
          {
            return AuthFlowType::REFRESH_TOKEN;
          }
          else if (hashCode == CUSTOM_AUTH_HASH)
          {
            return AuthFlowType::CUSTOM_AUTH;
          }
          else if (hashCode == ADMIN_NO_SRP_AUTH_HASH)
          {
            return AuthFlowType::ADMIN_NO_SRP_AUTH;
          }
          else if (hashCode == USER_PASSWORD_AUTH_HASH)
          {
            return AuthFlowType::USER_PASSWORD_AUTH;
          }
          else if (hashCode == ADMIN_USER_PASSWORD_AUTH_HASH)
          {
            return AuthFlowType::ADMIN_USER_PASSWORD_AUTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthFlowType>(hashCode);
          }

          return AuthFlowType::NOT_SET;
        }

        Aws::String GetNameForAuthFlowType(AuthFlowType enumValue)
        {
          switch(enumValue)
          {
          case AuthFlowType::NOT_SET:
            return {};
          case AuthFlowType::USER_SRP_AUTH:
            return "USER_SRP_AUTH";
          case AuthFlowType::REFRESH_TOKEN_AUTH:
            return "REFRESH_TOKEN_AUTH";
          case AuthFlowType::REFRESH_TOKEN:
            return "REFRESH_TOKEN";
          case AuthFlowType::CUSTOM_AUTH:
            return "CUSTOM_AUTH";
          case AuthFlowType::ADMIN_NO_SRP_AUTH:
            return "ADMIN_NO_SRP_AUTH";
          case AuthFlowType::USER_PASSWORD_AUTH:
            return "USER_PASSWORD_AUTH";
          case AuthFlowType::ADMIN_USER_PASSWORD_AUTH:
            return "ADMIN_USER_PASSWORD_AUTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthFlowTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
