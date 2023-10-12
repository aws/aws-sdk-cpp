/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/OAuth2GrantType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace OAuth2GrantTypeMapper
      {

        static constexpr uint32_t CLIENT_CREDENTIALS_HASH = ConstExprHashingUtils::HashString("CLIENT_CREDENTIALS");
        static constexpr uint32_t AUTHORIZATION_CODE_HASH = ConstExprHashingUtils::HashString("AUTHORIZATION_CODE");
        static constexpr uint32_t JWT_BEARER_HASH = ConstExprHashingUtils::HashString("JWT_BEARER");


        OAuth2GrantType GetOAuth2GrantTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLIENT_CREDENTIALS_HASH)
          {
            return OAuth2GrantType::CLIENT_CREDENTIALS;
          }
          else if (hashCode == AUTHORIZATION_CODE_HASH)
          {
            return OAuth2GrantType::AUTHORIZATION_CODE;
          }
          else if (hashCode == JWT_BEARER_HASH)
          {
            return OAuth2GrantType::JWT_BEARER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OAuth2GrantType>(hashCode);
          }

          return OAuth2GrantType::NOT_SET;
        }

        Aws::String GetNameForOAuth2GrantType(OAuth2GrantType enumValue)
        {
          switch(enumValue)
          {
          case OAuth2GrantType::NOT_SET:
            return {};
          case OAuth2GrantType::CLIENT_CREDENTIALS:
            return "CLIENT_CREDENTIALS";
          case OAuth2GrantType::AUTHORIZATION_CODE:
            return "AUTHORIZATION_CODE";
          case OAuth2GrantType::JWT_BEARER:
            return "JWT_BEARER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OAuth2GrantTypeMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
