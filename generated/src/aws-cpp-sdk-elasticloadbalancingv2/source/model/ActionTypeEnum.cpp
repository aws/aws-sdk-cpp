/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/ActionTypeEnum.h>
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
      namespace ActionTypeEnumMapper
      {

        static constexpr uint32_t forward_HASH = ConstExprHashingUtils::HashString("forward");
        static constexpr uint32_t authenticate_oidc_HASH = ConstExprHashingUtils::HashString("authenticate-oidc");
        static constexpr uint32_t authenticate_cognito_HASH = ConstExprHashingUtils::HashString("authenticate-cognito");
        static constexpr uint32_t redirect_HASH = ConstExprHashingUtils::HashString("redirect");
        static constexpr uint32_t fixed_response_HASH = ConstExprHashingUtils::HashString("fixed-response");


        ActionTypeEnum GetActionTypeEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == forward_HASH)
          {
            return ActionTypeEnum::forward;
          }
          else if (hashCode == authenticate_oidc_HASH)
          {
            return ActionTypeEnum::authenticate_oidc;
          }
          else if (hashCode == authenticate_cognito_HASH)
          {
            return ActionTypeEnum::authenticate_cognito;
          }
          else if (hashCode == redirect_HASH)
          {
            return ActionTypeEnum::redirect;
          }
          else if (hashCode == fixed_response_HASH)
          {
            return ActionTypeEnum::fixed_response;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionTypeEnum>(hashCode);
          }

          return ActionTypeEnum::NOT_SET;
        }

        Aws::String GetNameForActionTypeEnum(ActionTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case ActionTypeEnum::NOT_SET:
            return {};
          case ActionTypeEnum::forward:
            return "forward";
          case ActionTypeEnum::authenticate_oidc:
            return "authenticate-oidc";
          case ActionTypeEnum::authenticate_cognito:
            return "authenticate-cognito";
          case ActionTypeEnum::redirect:
            return "redirect";
          case ActionTypeEnum::fixed_response:
            return "fixed-response";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionTypeEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
