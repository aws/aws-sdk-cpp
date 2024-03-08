/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/OAuthScopesElement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyBackend
  {
    namespace Model
    {
      namespace OAuthScopesElementMapper
      {

        static const int PHONE_HASH = HashingUtils::HashString("PHONE");
        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
        static const int OPENID_HASH = HashingUtils::HashString("OPENID");
        static const int PROFILE_HASH = HashingUtils::HashString("PROFILE");
        static const int AWS_COGNITO_SIGNIN_USER_ADMIN_HASH = HashingUtils::HashString("AWS_COGNITO_SIGNIN_USER_ADMIN");


        OAuthScopesElement GetOAuthScopesElementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PHONE_HASH)
          {
            return OAuthScopesElement::PHONE;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return OAuthScopesElement::EMAIL;
          }
          else if (hashCode == OPENID_HASH)
          {
            return OAuthScopesElement::OPENID;
          }
          else if (hashCode == PROFILE_HASH)
          {
            return OAuthScopesElement::PROFILE;
          }
          else if (hashCode == AWS_COGNITO_SIGNIN_USER_ADMIN_HASH)
          {
            return OAuthScopesElement::AWS_COGNITO_SIGNIN_USER_ADMIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OAuthScopesElement>(hashCode);
          }

          return OAuthScopesElement::NOT_SET;
        }

        Aws::String GetNameForOAuthScopesElement(OAuthScopesElement enumValue)
        {
          switch(enumValue)
          {
          case OAuthScopesElement::NOT_SET:
            return {};
          case OAuthScopesElement::PHONE:
            return "PHONE";
          case OAuthScopesElement::EMAIL:
            return "EMAIL";
          case OAuthScopesElement::OPENID:
            return "OPENID";
          case OAuthScopesElement::PROFILE:
            return "PROFILE";
          case OAuthScopesElement::AWS_COGNITO_SIGNIN_USER_ADMIN:
            return "AWS_COGNITO_SIGNIN_USER_ADMIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OAuthScopesElementMapper
    } // namespace Model
  } // namespace AmplifyBackend
} // namespace Aws
