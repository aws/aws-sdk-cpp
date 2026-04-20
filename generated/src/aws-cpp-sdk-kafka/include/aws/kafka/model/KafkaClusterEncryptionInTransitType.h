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
enum class KafkaClusterEncryptionInTransitType { NOT_SET, TLS };

namespace KafkaClusterEncryptionInTransitTypeMapper {
AWS_KAFKA_API KafkaClusterEncryptionInTransitType GetKafkaClusterEncryptionInTransitTypeForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForKafkaClusterEncryptionInTransitType(KafkaClusterEncryptionInTransitType value);
}  // namespace KafkaClusterEncryptionInTransitTypeMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
