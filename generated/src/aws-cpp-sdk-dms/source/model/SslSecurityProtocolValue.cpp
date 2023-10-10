/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/SslSecurityProtocolValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace SslSecurityProtocolValueMapper
      {

        static const int plaintext_HASH = HashingUtils::HashString("plaintext");
        static const int ssl_encryption_HASH = HashingUtils::HashString("ssl-encryption");


        SslSecurityProtocolValue GetSslSecurityProtocolValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == plaintext_HASH)
          {
            return SslSecurityProtocolValue::plaintext;
          }
          else if (hashCode == ssl_encryption_HASH)
          {
            return SslSecurityProtocolValue::ssl_encryption;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SslSecurityProtocolValue>(hashCode);
          }

          return SslSecurityProtocolValue::NOT_SET;
        }

        Aws::String GetNameForSslSecurityProtocolValue(SslSecurityProtocolValue enumValue)
        {
          switch(enumValue)
          {
          case SslSecurityProtocolValue::NOT_SET:
            return {};
          case SslSecurityProtocolValue::plaintext:
            return "plaintext";
          case SslSecurityProtocolValue::ssl_encryption:
            return "ssl-encryption";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SslSecurityProtocolValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
