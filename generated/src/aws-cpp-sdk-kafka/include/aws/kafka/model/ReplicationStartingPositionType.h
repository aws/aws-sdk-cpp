/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>

namespace Aws {
namespace Kafka {
namespace Model {
enum class ReplicationStartingPositionType { NOT_SET, LATEST, EARLIEST };

namespace ReplicationStartingPositionTypeMapper {
AWS_KAFKA_API ReplicationStartingPositionType GetReplicationStartingPositionTypeForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForReplicationStartingPositionType(ReplicationStartingPositionType value);
}  // namespace ReplicationStartingPositionTypeMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
