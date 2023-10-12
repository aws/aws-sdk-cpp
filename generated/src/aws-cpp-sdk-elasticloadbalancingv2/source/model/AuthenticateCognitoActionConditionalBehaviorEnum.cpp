/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/AuthenticateCognitoActionConditionalBehaviorEnum.h>
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
      namespace AuthenticateCognitoActionConditionalBehaviorEnumMapper
      {

        static constexpr uint32_t deny_HASH = ConstExprHashingUtils::HashString("deny");
        static constexpr uint32_t allow_HASH = ConstExprHashingUtils::HashString("allow");
        static constexpr uint32_t authenticate_HASH = ConstExprHashingUtils::HashString("authenticate");


        AuthenticateCognitoActionConditionalBehaviorEnum GetAuthenticateCognitoActionConditionalBehaviorEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == deny_HASH)
          {
            return AuthenticateCognitoActionConditionalBehaviorEnum::deny;
          }
          else if (hashCode == allow_HASH)
          {
            return AuthenticateCognitoActionConditionalBehaviorEnum::allow;
          }
          else if (hashCode == authenticate_HASH)
          {
            return AuthenticateCognitoActionConditionalBehaviorEnum::authenticate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthenticateCognitoActionConditionalBehaviorEnum>(hashCode);
          }

          return AuthenticateCognitoActionConditionalBehaviorEnum::NOT_SET;
        }

        Aws::String GetNameForAuthenticateCognitoActionConditionalBehaviorEnum(AuthenticateCognitoActionConditionalBehaviorEnum enumValue)
        {
          switch(enumValue)
          {
          case AuthenticateCognitoActionConditionalBehaviorEnum::NOT_SET:
            return {};
          case AuthenticateCognitoActionConditionalBehaviorEnum::deny:
            return "deny";
          case AuthenticateCognitoActionConditionalBehaviorEnum::allow:
            return "allow";
          case AuthenticateCognitoActionConditionalBehaviorEnum::authenticate:
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

      } // namespace AuthenticateCognitoActionConditionalBehaviorEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
