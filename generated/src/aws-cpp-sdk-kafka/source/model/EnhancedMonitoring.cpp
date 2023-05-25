/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/EnhancedMonitoring.h>
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
      namespace EnhancedMonitoringMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int PER_BROKER_HASH = HashingUtils::HashString("PER_BROKER");
        static const int PER_TOPIC_PER_BROKER_HASH = HashingUtils::HashString("PER_TOPIC_PER_BROKER");
        static const int PER_TOPIC_PER_PARTITION_HASH = HashingUtils::HashString("PER_TOPIC_PER_PARTITION");


        EnhancedMonitoring GetEnhancedMonitoringForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return EnhancedMonitoring::DEFAULT;
          }
          else if (hashCode == PER_BROKER_HASH)
          {
            return EnhancedMonitoring::PER_BROKER;
          }
          else if (hashCode == PER_TOPIC_PER_BROKER_HASH)
          {
            return EnhancedMonitoring::PER_TOPIC_PER_BROKER;
          }
          else if (hashCode == PER_TOPIC_PER_PARTITION_HASH)
          {
            return EnhancedMonitoring::PER_TOPIC_PER_PARTITION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnhancedMonitoring>(hashCode);
          }

          return EnhancedMonitoring::NOT_SET;
        }

        Aws::String GetNameForEnhancedMonitoring(EnhancedMonitoring enumValue)
        {
          switch(enumValue)
          {
          case EnhancedMonitoring::DEFAULT:
            return "DEFAULT";
          case EnhancedMonitoring::PER_BROKER:
            return "PER_BROKER";
          case EnhancedMonitoring::PER_TOPIC_PER_BROKER:
            return "PER_TOPIC_PER_BROKER";
          case EnhancedMonitoring::PER_TOPIC_PER_PARTITION:
            return "PER_TOPIC_PER_PARTITION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnhancedMonitoringMapper
    } // namespace Model
  } // namespace Kafka
} // namespace Aws
