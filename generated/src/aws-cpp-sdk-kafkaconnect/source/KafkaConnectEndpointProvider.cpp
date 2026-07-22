/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/KafkaConnectEndpointProvider.h>
#include <aws/kafkaconnect/internal/KafkaConnectEndpointRules.h>

namespace Aws {
namespace KafkaConnect {
namespace Endpoint {
KafkaConnectEndpointProvider::KafkaConnectEndpointProvider()
    : KafkaConnectDefaultEpProviderBase(Aws::KafkaConnect::KafkaConnectEndpointRules::GetRulesBlob(),
                                        Aws::KafkaConnect::KafkaConnectEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace KafkaConnect
}  // namespace Aws
