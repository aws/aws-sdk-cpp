/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
