/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ExplicitAuthFlowsType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace ExplicitAuthFlowsTypeMapper
      {

        static const int ADMIN_NO_SRP_AUTH_HASH = HashingUtils::HashString("ADMIN_NO_SRP_AUTH");
        static const int CUSTOM_AUTH_FLOW_ONLY_HASH = HashingUtils::HashString("CUSTOM_AUTH_FLOW_ONLY");
        static const int USER_PASSWORD_AUTH_HASH = HashingUtils::HashString("USER_PASSWORD_AUTH");
        static const int ALLOW_ADMIN_USER_PASSWORD_AUTH_HASH = HashingUtils::HashString("ALLOW_ADMIN_USER_PASSWORD_AUTH");
        static const int ALLOW_CUSTOM_AUTH_HASH = HashingUtils::HashString("ALLOW_CUSTOM_AUTH");
        static const int ALLOW_USER_PASSWORD_AUTH_HASH = HashingUtils::HashString("ALLOW_USER_PASSWORD_AUTH");
        static const int ALLOW_USER_SRP_AUTH_HASH = HashingUtils::HashString("ALLOW_USER_SRP_AUTH");
        static const int ALLOW_REFRESH_TOKEN_AUTH_HASH = HashingUtils::HashString("ALLOW_REFRESH_TOKEN_AUTH");


        ExplicitAuthFlowsType GetExplicitAuthFlowsTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADMIN_NO_SRP_AUTH_HASH)
          {
            return ExplicitAuthFlowsType::ADMIN_NO_SRP_AUTH;
          }
          else if (hashCode == CUSTOM_AUTH_FLOW_ONLY_HASH)
          {
            return ExplicitAuthFlowsType::CUSTOM_AUTH_FLOW_ONLY;
          }
          else if (hashCode == USER_PASSWORD_AUTH_HASH)
          {
            return ExplicitAuthFlowsType::USER_PASSWORD_AUTH;
          }
          else if (hashCode == ALLOW_ADMIN_USER_PASSWORD_AUTH_HASH)
          {
            return ExplicitAuthFlowsType::ALLOW_ADMIN_USER_PASSWORD_AUTH;
          }
          else if (hashCode == ALLOW_CUSTOM_AUTH_HASH)
          {
            return ExplicitAuthFlowsType::ALLOW_CUSTOM_AUTH;
          }
          else if (hashCode == ALLOW_USER_PASSWORD_AUTH_HASH)
          {
            return ExplicitAuthFlowsType::ALLOW_USER_PASSWORD_AUTH;
          }
          else if (hashCode == ALLOW_USER_SRP_AUTH_HASH)
          {
            return ExplicitAuthFlowsType::ALLOW_USER_SRP_AUTH;
          }
          else if (hashCode == ALLOW_REFRESH_TOKEN_AUTH_HASH)
          {
            return ExplicitAuthFlowsType::ALLOW_REFRESH_TOKEN_AUTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExplicitAuthFlowsType>(hashCode);
          }

          return ExplicitAuthFlowsType::NOT_SET;
        }

        Aws::String GetNameForExplicitAuthFlowsType(ExplicitAuthFlowsType enumValue)
        {
          switch(enumValue)
          {
          case ExplicitAuthFlowsType::ADMIN_NO_SRP_AUTH:
            return "ADMIN_NO_SRP_AUTH";
          case ExplicitAuthFlowsType::CUSTOM_AUTH_FLOW_ONLY:
            return "CUSTOM_AUTH_FLOW_ONLY";
          case ExplicitAuthFlowsType::USER_PASSWORD_AUTH:
            return "USER_PASSWORD_AUTH";
          case ExplicitAuthFlowsType::ALLOW_ADMIN_USER_PASSWORD_AUTH:
            return "ALLOW_ADMIN_USER_PASSWORD_AUTH";
          case ExplicitAuthFlowsType::ALLOW_CUSTOM_AUTH:
            return "ALLOW_CUSTOM_AUTH";
          case ExplicitAuthFlowsType::ALLOW_USER_PASSWORD_AUTH:
            return "ALLOW_USER_PASSWORD_AUTH";
          case ExplicitAuthFlowsType::ALLOW_USER_SRP_AUTH:
            return "ALLOW_USER_SRP_AUTH";
          case ExplicitAuthFlowsType::ALLOW_REFRESH_TOKEN_AUTH:
            return "ALLOW_REFRESH_TOKEN_AUTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExplicitAuthFlowsTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
