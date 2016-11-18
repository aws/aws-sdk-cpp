/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int USER_SRP_AUTH_HASH = HashingUtils::HashString("USER_SRP_AUTH");
        static const int REFRESH_TOKEN_AUTH_HASH = HashingUtils::HashString("REFRESH_TOKEN_AUTH");
        static const int REFRESH_TOKEN_HASH = HashingUtils::HashString("REFRESH_TOKEN");
        static const int CUSTOM_AUTH_HASH = HashingUtils::HashString("CUSTOM_AUTH");
        static const int ADMIN_NO_SRP_AUTH_HASH = HashingUtils::HashString("ADMIN_NO_SRP_AUTH");


        AuthFlowType GetAuthFlowTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AuthFlowTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
