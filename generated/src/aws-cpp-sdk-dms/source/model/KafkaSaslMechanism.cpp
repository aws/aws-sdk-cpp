/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/KafkaSaslMechanism.h>
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
      namespace KafkaSaslMechanismMapper
      {

        static constexpr uint32_t scram_sha_512_HASH = ConstExprHashingUtils::HashString("scram-sha-512");
        static constexpr uint32_t plain_HASH = ConstExprHashingUtils::HashString("plain");


        KafkaSaslMechanism GetKafkaSaslMechanismForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == scram_sha_512_HASH)
          {
            return KafkaSaslMechanism::scram_sha_512;
          }
          else if (hashCode == plain_HASH)
          {
            return KafkaSaslMechanism::plain;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KafkaSaslMechanism>(hashCode);
          }

          return KafkaSaslMechanism::NOT_SET;
        }

        Aws::String GetNameForKafkaSaslMechanism(KafkaSaslMechanism enumValue)
        {
          switch(enumValue)
          {
          case KafkaSaslMechanism::NOT_SET:
            return {};
          case KafkaSaslMechanism::scram_sha_512:
            return "scram-sha-512";
          case KafkaSaslMechanism::plain:
            return "plain";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KafkaSaslMechanismMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
