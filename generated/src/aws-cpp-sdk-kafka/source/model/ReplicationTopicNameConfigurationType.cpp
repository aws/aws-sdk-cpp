/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ReplicationTopicNameConfigurationType.h>
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
      namespace ReplicationTopicNameConfigurationTypeMapper
      {

        static const int PREFIXED_WITH_SOURCE_CLUSTER_ALIAS_HASH = HashingUtils::HashString("PREFIXED_WITH_SOURCE_CLUSTER_ALIAS");
        static const int IDENTICAL_HASH = HashingUtils::HashString("IDENTICAL");


        ReplicationTopicNameConfigurationType GetReplicationTopicNameConfigurationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PREFIXED_WITH_SOURCE_CLUSTER_ALIAS_HASH)
          {
            return ReplicationTopicNameConfigurationType::PREFIXED_WITH_SOURCE_CLUSTER_ALIAS;
          }
          else if (hashCode == IDENTICAL_HASH)
          {
            return ReplicationTopicNameConfigurationType::IDENTICAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationTopicNameConfigurationType>(hashCode);
          }

          return ReplicationTopicNameConfigurationType::NOT_SET;
        }

        Aws::String GetNameForReplicationTopicNameConfigurationType(ReplicationTopicNameConfigurationType enumValue)
        {
          switch(enumValue)
          {
          case ReplicationTopicNameConfigurationType::NOT_SET:
            return {};
          case ReplicationTopicNameConfigurationType::PREFIXED_WITH_SOURCE_CLUSTER_ALIAS:
            return "PREFIXED_WITH_SOURCE_CLUSTER_ALIAS";
          case ReplicationTopicNameConfigurationType::IDENTICAL:
            return "IDENTICAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationTopicNameConfigurationTypeMapper
    } // namespace Model
  } // namespace Kafka
} // namespace Aws
