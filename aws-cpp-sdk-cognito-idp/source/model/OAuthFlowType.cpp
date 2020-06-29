/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/OAuthFlowType.h>
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
      namespace OAuthFlowTypeMapper
      {

        static const int code_HASH = HashingUtils::HashString("code");
        static const int implicit_HASH = HashingUtils::HashString("implicit");
        static const int client_credentials_HASH = HashingUtils::HashString("client_credentials");


        OAuthFlowType GetOAuthFlowTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == code_HASH)
          {
            return OAuthFlowType::code;
          }
          else if (hashCode == implicit_HASH)
          {
            return OAuthFlowType::implicit;
          }
          else if (hashCode == client_credentials_HASH)
          {
            return OAuthFlowType::client_credentials;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OAuthFlowType>(hashCode);
          }

          return OAuthFlowType::NOT_SET;
        }

        Aws::String GetNameForOAuthFlowType(OAuthFlowType enumValue)
        {
          switch(enumValue)
          {
          case OAuthFlowType::code:
            return "code";
          case OAuthFlowType::implicit:
            return "implicit";
          case OAuthFlowType::client_credentials:
            return "client_credentials";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OAuthFlowTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
