/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/AuthorizationProviderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkLink
  {
    namespace Model
    {
      namespace AuthorizationProviderTypeMapper
      {

        static const int SAML_HASH = HashingUtils::HashString("SAML");


        AuthorizationProviderType GetAuthorizationProviderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAML_HASH)
          {
            return AuthorizationProviderType::SAML;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthorizationProviderType>(hashCode);
          }

          return AuthorizationProviderType::NOT_SET;
        }

        Aws::String GetNameForAuthorizationProviderType(AuthorizationProviderType enumValue)
        {
          switch(enumValue)
          {
          case AuthorizationProviderType::SAML:
            return "SAML";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthorizationProviderTypeMapper
    } // namespace Model
  } // namespace WorkLink
} // namespace Aws
