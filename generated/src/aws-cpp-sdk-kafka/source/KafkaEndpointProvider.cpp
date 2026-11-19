/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/KafkaEndpointProvider.h>
#include <aws/kafka/internal/KafkaEndpointRules.h>

namespace Aws {
#ifndef AWS_KAFKA_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Kafka::Endpoint::KafkaClientConfiguration, Kafka::Endpoint::KafkaBuiltInParameters,
                                                   Kafka::Endpoint::KafkaClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Kafka::Endpoint::KafkaClientConfiguration, Kafka::Endpoint::KafkaBuiltInParameters,
                                                  Kafka::Endpoint::KafkaClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Kafka {
namespace Endpoint {
KafkaEndpointProvider::KafkaEndpointProvider()
    : KafkaDefaultEpProviderBase(Aws::Kafka::KafkaEndpointRules::GetRulesBlob(), Aws::Kafka::KafkaEndpointRules::RulesBlobSize) {}

void KafkaBuiltInParameters::SetFromClientConfiguration(const KafkaClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const KafkaClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void KafkaBuiltInParameters::SetFromClientConfiguration(const KafkaClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const KafkaClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void KafkaBuiltInParameters::SetServiceSpecificParameters(const KafkaClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Kafka
}  // namespace Aws
