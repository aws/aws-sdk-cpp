/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AuthorizerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCoreControl
  {
    namespace Model
    {
      namespace AuthorizerTypeMapper
      {

        static const int CUSTOM_JWT_HASH = HashingUtils::HashString("CUSTOM_JWT");


        AuthorizerType GetAuthorizerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOM_JWT_HASH)
          {
            return AuthorizerType::CUSTOM_JWT;
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
          case AuthorizerType::NOT_SET:
            return {};
          case AuthorizerType::CUSTOM_JWT:
            return "CUSTOM_JWT";
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
  } // namespace BedrockAgentCoreControl
} // namespace Aws
