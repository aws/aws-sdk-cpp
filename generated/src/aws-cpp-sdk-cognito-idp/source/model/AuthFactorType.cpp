/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AuthFactorType.h>
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
      namespace AuthFactorTypeMapper
      {

        static const int PASSWORD_HASH = HashingUtils::HashString("PASSWORD");
        static const int EMAIL_OTP_HASH = HashingUtils::HashString("EMAIL_OTP");
        static const int SMS_OTP_HASH = HashingUtils::HashString("SMS_OTP");
        static const int WEB_AUTHN_HASH = HashingUtils::HashString("WEB_AUTHN");


        AuthFactorType GetAuthFactorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSWORD_HASH)
          {
            return AuthFactorType::PASSWORD;
          }
          else if (hashCode == EMAIL_OTP_HASH)
          {
            return AuthFactorType::EMAIL_OTP;
          }
          else if (hashCode == SMS_OTP_HASH)
          {
            return AuthFactorType::SMS_OTP;
          }
          else if (hashCode == WEB_AUTHN_HASH)
          {
            return AuthFactorType::WEB_AUTHN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthFactorType>(hashCode);
          }

          return AuthFactorType::NOT_SET;
        }

        Aws::String GetNameForAuthFactorType(AuthFactorType enumValue)
        {
          switch(enumValue)
          {
          case AuthFactorType::NOT_SET:
            return {};
          case AuthFactorType::PASSWORD:
            return "PASSWORD";
          case AuthFactorType::EMAIL_OTP:
            return "EMAIL_OTP";
          case AuthFactorType::SMS_OTP:
            return "SMS_OTP";
          case AuthFactorType::WEB_AUTHN:
            return "WEB_AUTHN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthFactorTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
