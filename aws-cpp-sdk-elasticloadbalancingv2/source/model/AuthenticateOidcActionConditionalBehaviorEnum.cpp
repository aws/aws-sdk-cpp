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

#include <aws/elasticloadbalancingv2/model/AuthenticateOidcActionConditionalBehaviorEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticLoadBalancingv2
  {
    namespace Model
    {
      namespace AuthenticateOidcActionConditionalBehaviorEnumMapper
      {

        static const int deny_HASH = HashingUtils::HashString("deny");
        static const int allow_HASH = HashingUtils::HashString("allow");
        static const int authenticate_HASH = HashingUtils::HashString("authenticate");


        AuthenticateOidcActionConditionalBehaviorEnum GetAuthenticateOidcActionConditionalBehaviorEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == deny_HASH)
          {
            return AuthenticateOidcActionConditionalBehaviorEnum::deny;
          }
          else if (hashCode == allow_HASH)
          {
            return AuthenticateOidcActionConditionalBehaviorEnum::allow;
          }
          else if (hashCode == authenticate_HASH)
          {
            return AuthenticateOidcActionConditionalBehaviorEnum::authenticate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthenticateOidcActionConditionalBehaviorEnum>(hashCode);
          }

          return AuthenticateOidcActionConditionalBehaviorEnum::NOT_SET;
        }

        Aws::String GetNameForAuthenticateOidcActionConditionalBehaviorEnum(AuthenticateOidcActionConditionalBehaviorEnum enumValue)
        {
          switch(enumValue)
          {
          case AuthenticateOidcActionConditionalBehaviorEnum::deny:
            return "deny";
          case AuthenticateOidcActionConditionalBehaviorEnum::allow:
            return "allow";
          case AuthenticateOidcActionConditionalBehaviorEnum::authenticate:
            return "authenticate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthenticateOidcActionConditionalBehaviorEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
