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
  enum class ClusterState
  {
    NOT_SET,
    ACTIVE,
    CREATING,
    DELETING,
    FAILED,
    MAINTENANCE,
    REBOOTING_BROKER,
    UPDATING
  };

namespace ClusterStateMapper
{
AWS_KAFKA_API ClusterState GetClusterStateForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForClusterState(ClusterState value);
} // namespace ClusterStateMapper
} // namespace Model
} // namespace Kafka
} // namespace Aws
