/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/KafkaClusterEncryptionInTransitType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KafkaConnect
  {
    namespace Model
    {
      namespace KafkaClusterEncryptionInTransitTypeMapper
      {

        static const int PLAINTEXT_HASH = HashingUtils::HashString("PLAINTEXT");
        static const int TLS_HASH = HashingUtils::HashString("TLS");


        KafkaClusterEncryptionInTransitType GetKafkaClusterEncryptionInTransitTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PLAINTEXT_HASH)
          {
            return KafkaClusterEncryptionInTransitType::PLAINTEXT;
          }
          else if (hashCode == TLS_HASH)
          {
            return KafkaClusterEncryptionInTransitType::TLS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KafkaClusterEncryptionInTransitType>(hashCode);
          }

          return KafkaClusterEncryptionInTransitType::NOT_SET;
        }

        Aws::String GetNameForKafkaClusterEncryptionInTransitType(KafkaClusterEncryptionInTransitType enumValue)
        {
          switch(enumValue)
          {
          case KafkaClusterEncryptionInTransitType::NOT_SET:
            return {};
          case KafkaClusterEncryptionInTransitType::PLAINTEXT:
            return "PLAINTEXT";
          case KafkaClusterEncryptionInTransitType::TLS:
            return "TLS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KafkaClusterEncryptionInTransitTypeMapper
    } // namespace Model
  } // namespace KafkaConnect
} // namespace Aws
