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

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");


        KafkaVersionStatus GetKafkaVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
