/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/AuthorizerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApiGatewayV2
  {
    namespace Model
    {
      namespace AuthorizerTypeMapper
      {

        static const int REQUEST_HASH = HashingUtils::HashString("REQUEST");
        static const int JWT_HASH = HashingUtils::HashString("JWT");


        AuthorizerType GetAuthorizerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUEST_HASH)
          {
            return AuthorizerType::REQUEST;
          }
          else if (hashCode == JWT_HASH)
          {
            return AuthorizerType::JWT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthorizerType>(hashCode);
          }

          return AuthorizerType::NOT_SET;
        }

        Aws::String GetNameForAuthorizerType(AuthorizerType enumValue)
        {
          switch(enumValue)
          {
          case AuthorizerType::REQUEST:
            return "REQUEST";
          case AuthorizerType::JWT:
            return "JWT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthorizerTypeMapper
    } // namespace Model
  } // namespace ApiGatewayV2
} // namespace Aws
