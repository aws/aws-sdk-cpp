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
enum class KafkaClusterSaslScramMechanism { NOT_SET, SHA256, SHA512 };

namespace KafkaClusterSaslScramMechanismMapper {
AWS_KAFKA_API KafkaClusterSaslScramMechanism GetKafkaClusterSaslScramMechanismForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForKafkaClusterSaslScramMechanism(KafkaClusterSaslScramMechanism value);
}  // namespace KafkaClusterSaslScramMechanismMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
