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
  enum class ReplicatorState
  {
    NOT_SET,
    RUNNING,
    CREATING,
    UPDATING,
    DELETING,
    FAILED
  };

namespace ReplicatorStateMapper
{
AWS_KAFKA_API ReplicatorState GetReplicatorStateForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForReplicatorState(ReplicatorState value);
} // namespace ReplicatorStateMapper
} // namespace Model
} // namespace Kafka
} // namespace Aws
