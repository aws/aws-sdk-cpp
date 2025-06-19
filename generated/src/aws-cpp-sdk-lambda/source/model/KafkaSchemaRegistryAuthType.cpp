/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/KafkaSchemaRegistryAuthType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lambda
  {
    namespace Model
    {
      namespace KafkaSchemaRegistryAuthTypeMapper
      {

        static const int BASIC_AUTH_HASH = HashingUtils::HashString("BASIC_AUTH");
        static const int CLIENT_CERTIFICATE_TLS_AUTH_HASH = HashingUtils::HashString("CLIENT_CERTIFICATE_TLS_AUTH");
        static const int SERVER_ROOT_CA_CERTIFICATE_HASH = HashingUtils::HashString("SERVER_ROOT_CA_CERTIFICATE");


        KafkaSchemaRegistryAuthType GetKafkaSchemaRegistryAuthTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASIC_AUTH_HASH)
          {
            return KafkaSchemaRegistryAuthType::BASIC_AUTH;
          }
          else if (hashCode == CLIENT_CERTIFICATE_TLS_AUTH_HASH)
          {
            return KafkaSchemaRegistryAuthType::CLIENT_CERTIFICATE_TLS_AUTH;
          }
          else if (hashCode == SERVER_ROOT_CA_CERTIFICATE_HASH)
          {
            return KafkaSchemaRegistryAuthType::SERVER_ROOT_CA_CERTIFICATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KafkaSchemaRegistryAuthType>(hashCode);
          }

          return KafkaSchemaRegistryAuthType::NOT_SET;
        }

        Aws::String GetNameForKafkaSchemaRegistryAuthType(KafkaSchemaRegistryAuthType enumValue)
        {
          switch(enumValue)
          {
          case KafkaSchemaRegistryAuthType::NOT_SET:
            return {};
          case KafkaSchemaRegistryAuthType::BASIC_AUTH:
            return "BASIC_AUTH";
          case KafkaSchemaRegistryAuthType::CLIENT_CERTIFICATE_TLS_AUTH:
            return "CLIENT_CERTIFICATE_TLS_AUTH";
          case KafkaSchemaRegistryAuthType::SERVER_ROOT_CA_CERTIFICATE:
            return "SERVER_ROOT_CA_CERTIFICATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KafkaSchemaRegistryAuthTypeMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws
