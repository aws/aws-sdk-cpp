/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/AuthorizationType.h>
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
      namespace AuthorizationTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int AWS_IAM_HASH = HashingUtils::HashString("AWS_IAM");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int JWT_HASH = HashingUtils::HashString("JWT");


        AuthorizationType GetAuthorizationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return AuthorizationType::NONE;
          }
          else if (hashCode == AWS_IAM_HASH)
          {
            return AuthorizationType::AWS_IAM;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return AuthorizationType::CUSTOM;
          }
          else if (hashCode == JWT_HASH)
          {
            return AuthorizationType::JWT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthorizationType>(hashCode);
          }

          return AuthorizationType::NOT_SET;
        }

        Aws::String GetNameForAuthorizationType(AuthorizationType enumValue)
        {
          switch(enumValue)
          {
          case AuthorizationType::NONE:
            return "NONE";
          case AuthorizationType::AWS_IAM:
            return "AWS_IAM";
          case AuthorizationType::CUSTOM:
            return "CUSTOM";
          case AuthorizationType::JWT:
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

      } // namespace AuthorizationTypeMapper
    } // namespace Model
  } // namespace ApiGatewayV2
} // namespace Aws
