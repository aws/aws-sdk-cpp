/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/TokenEndpointAuthenticationScheme.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTManagedIntegrations
  {
    namespace Model
    {
      namespace TokenEndpointAuthenticationSchemeMapper
      {

        static const int HTTP_BASIC_HASH = HashingUtils::HashString("HTTP_BASIC");
        static const int REQUEST_BODY_CREDENTIALS_HASH = HashingUtils::HashString("REQUEST_BODY_CREDENTIALS");


        TokenEndpointAuthenticationScheme GetTokenEndpointAuthenticationSchemeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_BASIC_HASH)
          {
            return TokenEndpointAuthenticationScheme::HTTP_BASIC;
          }
          else if (hashCode == REQUEST_BODY_CREDENTIALS_HASH)
          {
            return TokenEndpointAuthenticationScheme::REQUEST_BODY_CREDENTIALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TokenEndpointAuthenticationScheme>(hashCode);
          }

          return TokenEndpointAuthenticationScheme::NOT_SET;
        }

        Aws::String GetNameForTokenEndpointAuthenticationScheme(TokenEndpointAuthenticationScheme enumValue)
        {
          switch(enumValue)
          {
          case TokenEndpointAuthenticationScheme::NOT_SET:
            return {};
          case TokenEndpointAuthenticationScheme::HTTP_BASIC:
            return "HTTP_BASIC";
          case TokenEndpointAuthenticationScheme::REQUEST_BODY_CREDENTIALS:
            return "REQUEST_BODY_CREDENTIALS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TokenEndpointAuthenticationSchemeMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
