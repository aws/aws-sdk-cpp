/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/AuthenticationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace AuthenticationTypeMapper
      {

        static const int API_KEY_HASH = HashingUtils::HashString("API_KEY");
        static const int AWS_IAM_HASH = HashingUtils::HashString("AWS_IAM");
        static const int AMAZON_COGNITO_USER_POOLS_HASH = HashingUtils::HashString("AMAZON_COGNITO_USER_POOLS");
        static const int OPENID_CONNECT_HASH = HashingUtils::HashString("OPENID_CONNECT");


        AuthenticationType GetAuthenticationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == API_KEY_HASH)
          {
            return AuthenticationType::API_KEY;
          }
          else if (hashCode == AWS_IAM_HASH)
          {
            return AuthenticationType::AWS_IAM;
          }
          else if (hashCode == AMAZON_COGNITO_USER_POOLS_HASH)
          {
            return AuthenticationType::AMAZON_COGNITO_USER_POOLS;
          }
          else if (hashCode == OPENID_CONNECT_HASH)
          {
            return AuthenticationType::OPENID_CONNECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthenticationType>(hashCode);
          }

          return AuthenticationType::NOT_SET;
        }

        Aws::String GetNameForAuthenticationType(AuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case AuthenticationType::API_KEY:
            return "API_KEY";
          case AuthenticationType::AWS_IAM:
            return "AWS_IAM";
          case AuthenticationType::AMAZON_COGNITO_USER_POOLS:
            return "AMAZON_COGNITO_USER_POOLS";
          case AuthenticationType::OPENID_CONNECT:
            return "OPENID_CONNECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthenticationTypeMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
