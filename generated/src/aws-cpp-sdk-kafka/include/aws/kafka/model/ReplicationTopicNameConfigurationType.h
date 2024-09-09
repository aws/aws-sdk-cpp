/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Kafka
{
namespace Model
{
  enum class ReplicationTopicNameConfigurationType
  {
    NOT_SET,
    PREFIXED_WITH_SOURCE_CLUSTER_ALIAS,
    IDENTICAL
  };

namespace ReplicationTopicNameConfigurationTypeMapper
{
AWS_KAFKA_API ReplicationTopicNameConfigurationType GetReplicationTopicNameConfigurationTypeForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForReplicationTopicNameConfigurationType(ReplicationTopicNameConfigurationType value);
} // namespace ReplicationTopicNameConfigurationTypeMapper
} // namespace Model
} // namespace Kafka
} // namespace Aws
