/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AuthenticationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace AuthenticationTypeMapper
      {

        static const int CUSTOM_AUTH_X509_HASH = HashingUtils::HashString("CUSTOM_AUTH_X509");
        static const int CUSTOM_AUTH_HASH = HashingUtils::HashString("CUSTOM_AUTH");
        static const int AWS_X509_HASH = HashingUtils::HashString("AWS_X509");
        static const int AWS_SIGV4_HASH = HashingUtils::HashString("AWS_SIGV4");
        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");


        AuthenticationType GetAuthenticationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOM_AUTH_X509_HASH)
          {
            return AuthenticationType::CUSTOM_AUTH_X509;
          }
          else if (hashCode == CUSTOM_AUTH_HASH)
          {
            return AuthenticationType::CUSTOM_AUTH;
          }
          else if (hashCode == AWS_X509_HASH)
          {
            return AuthenticationType::AWS_X509;
          }
          else if (hashCode == AWS_SIGV4_HASH)
          {
            return AuthenticationType::AWS_SIGV4;
          }
          else if (hashCode == DEFAULT_HASH)
          {
            return AuthenticationType::DEFAULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthenticationType>(hashCode);
          }

          return AuthenticationType::NOT_SET;
        }

        Aws::String GetNameForAuthenticationType(AuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case AuthenticationType::NOT_SET:
            return {};
          case AuthenticationType::CUSTOM_AUTH_X509:
            return "CUSTOM_AUTH_X509";
          case AuthenticationType::CUSTOM_AUTH:
            return "CUSTOM_AUTH";
          case AuthenticationType::AWS_X509:
            return "AWS_X509";
          case AuthenticationType::AWS_SIGV4:
            return "AWS_SIGV4";
          case AuthenticationType::DEFAULT:
            return "DEFAULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthenticationTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
