/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/KafkaEndpointProvider.h>
#include <aws/kafka/internal/KafkaEndpointRules.h>

namespace Aws {
namespace Kafka {
namespace Endpoint {
KafkaEndpointProvider::KafkaEndpointProvider()
    : KafkaDefaultEpProviderBase(Aws::Kafka::KafkaEndpointRules::GetRulesBlob(), Aws::Kafka::KafkaEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Kafka
}  // namespace Aws
