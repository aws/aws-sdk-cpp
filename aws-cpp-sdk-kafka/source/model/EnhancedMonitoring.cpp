/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
