/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/KafkaVersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Kafka
  {
    namespace Model
    {
      namespace KafkaVersionStatusMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DEPRECATED_HASH = ConstExprHashingUtils::HashString("DEPRECATED");


        KafkaVersionStatus GetKafkaVersionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return KafkaVersionStatus::ACTIVE;
          }
          else if (hashCode == DEPRECATED_HASH)
          {
            return KafkaVersionStatus::DEPRECATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KafkaVersionStatus>(hashCode);
          }

          return KafkaVersionStatus::NOT_SET;
        }

        Aws::String GetNameForKafkaVersionStatus(KafkaVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case KafkaVersionStatus::NOT_SET:
            return {};
          case KafkaVersionStatus::ACTIVE:
            return "ACTIVE";
          case KafkaVersionStatus::DEPRECATED:
            return "DEPRECATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KafkaVersionStatusMapper
    } // namespace Model
  } // namespace Kafka
} // namespace Aws
