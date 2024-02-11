/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/SftpAuthenticationMethods.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace SftpAuthenticationMethodsMapper
      {

        static const int PASSWORD_HASH = HashingUtils::HashString("PASSWORD");
        static const int PUBLIC_KEY_HASH = HashingUtils::HashString("PUBLIC_KEY");
        static const int PUBLIC_KEY_OR_PASSWORD_HASH = HashingUtils::HashString("PUBLIC_KEY_OR_PASSWORD");
        static const int PUBLIC_KEY_AND_PASSWORD_HASH = HashingUtils::HashString("PUBLIC_KEY_AND_PASSWORD");


        SftpAuthenticationMethods GetSftpAuthenticationMethodsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSWORD_HASH)
          {
            return SftpAuthenticationMethods::PASSWORD;
          }
          else if (hashCode == PUBLIC_KEY_HASH)
          {
            return SftpAuthenticationMethods::PUBLIC_KEY;
          }
          else if (hashCode == PUBLIC_KEY_OR_PASSWORD_HASH)
          {
            return SftpAuthenticationMethods::PUBLIC_KEY_OR_PASSWORD;
          }
          else if (hashCode == PUBLIC_KEY_AND_PASSWORD_HASH)
          {
            return SftpAuthenticationMethods::PUBLIC_KEY_AND_PASSWORD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SftpAuthenticationMethods>(hashCode);
          }

          return SftpAuthenticationMethods::NOT_SET;
        }

        Aws::String GetNameForSftpAuthenticationMethods(SftpAuthenticationMethods enumValue)
        {
          switch(enumValue)
          {
          case SftpAuthenticationMethods::NOT_SET:
            return {};
          case SftpAuthenticationMethods::PASSWORD:
            return "PASSWORD";
          case SftpAuthenticationMethods::PUBLIC_KEY:
            return "PUBLIC_KEY";
          case SftpAuthenticationMethods::PUBLIC_KEY_OR_PASSWORD:
            return "PUBLIC_KEY_OR_PASSWORD";
          case SftpAuthenticationMethods::PUBLIC_KEY_AND_PASSWORD:
            return "PUBLIC_KEY_AND_PASSWORD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SftpAuthenticationMethodsMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
