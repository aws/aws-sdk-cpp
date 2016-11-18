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
        static const int COGNITO_USER_POOLS_HASH = HashingUtils::HashString("COGNITO_USER_POOLS");


        AuthorizerType GetAuthorizerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TOKEN_HASH)
          {
            return AuthorizerType::TOKEN;
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
          case AuthorizerType::COGNITO_USER_POOLS:
            return "COGNITO_USER_POOLS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AuthorizerTypeMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
