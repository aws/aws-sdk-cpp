/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/KafkaSecurityProtocol.h>
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
      namespace KafkaSecurityProtocolMapper
      {

        static const int plaintext_HASH = HashingUtils::HashString("plaintext");
        static const int ssl_authentication_HASH = HashingUtils::HashString("ssl-authentication");
        static const int ssl_encryption_HASH = HashingUtils::HashString("ssl-encryption");
        static const int sasl_ssl_HASH = HashingUtils::HashString("sasl-ssl");


        KafkaSecurityProtocol GetKafkaSecurityProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == plaintext_HASH)
          {
            return KafkaSecurityProtocol::plaintext;
          }
          else if (hashCode == ssl_authentication_HASH)
          {
            return KafkaSecurityProtocol::ssl_authentication;
          }
          else if (hashCode == ssl_encryption_HASH)
          {
            return KafkaSecurityProtocol::ssl_encryption;
          }
          else if (hashCode == sasl_ssl_HASH)
          {
            return KafkaSecurityProtocol::sasl_ssl;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KafkaSecurityProtocol>(hashCode);
          }

          return KafkaSecurityProtocol::NOT_SET;
        }

        Aws::String GetNameForKafkaSecurityProtocol(KafkaSecurityProtocol enumValue)
        {
          switch(enumValue)
          {
          case KafkaSecurityProtocol::NOT_SET:
            return {};
          case KafkaSecurityProtocol::plaintext:
            return "plaintext";
          case KafkaSecurityProtocol::ssl_authentication:
            return "ssl-authentication";
          case KafkaSecurityProtocol::ssl_encryption:
            return "ssl-encryption";
          case KafkaSecurityProtocol::sasl_ssl:
            return "sasl-ssl";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KafkaSecurityProtocolMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
