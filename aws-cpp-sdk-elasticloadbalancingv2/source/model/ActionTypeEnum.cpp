﻿/*
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

        static const int forward_HASH = HashingUtils::HashString("forward");
        static const int authenticate_oidc_HASH = HashingUtils::HashString("authenticate-oidc");
        static const int authenticate_cognito_HASH = HashingUtils::HashString("authenticate-cognito");
        static const int redirect_HASH = HashingUtils::HashString("redirect");
        static const int fixed_response_HASH = HashingUtils::HashString("fixed-response");


        ActionTypeEnum GetActionTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace ActionTypeEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
