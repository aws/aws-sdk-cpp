/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/AuthorizerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace APIGateway
  {
    namespace Model
    {
      namespace AuthorizerTypeMapper
      {

        static const int TOKEN_HASH = HashingUtils::HashString("TOKEN");
        static const int REQUEST_HASH = HashingUtils::HashString("REQUEST");
        static const int COGNITO_USER_POOLS_HASH = HashingUtils::HashString("COGNITO_USER_POOLS");


        AuthorizerType GetAuthorizerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TOKEN_HASH)
          {
            return AuthorizerType::TOKEN;
          }
          else if (hashCode == REQUEST_HASH)
          {
            return AuthorizerType::REQUEST;
          }
          else if (hashCode == COGNITO_USER_POOLS_HASH)
          {
            return AuthorizerType::COGNITO_USER_POOLS;
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
          case AuthorizerType::TOKEN:
            return "TOKEN";
          case AuthorizerType::REQUEST:
            return "REQUEST";
          case AuthorizerType::COGNITO_USER_POOLS:
            return "COGNITO_USER_POOLS";
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
  } // namespace APIGateway
} // namespace Aws
