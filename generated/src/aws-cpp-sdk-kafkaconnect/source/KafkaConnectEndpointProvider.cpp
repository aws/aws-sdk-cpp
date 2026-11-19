/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/KafkaConnectEndpointProvider.h>
#include <aws/kafkaconnect/internal/KafkaConnectEndpointRules.h>

namespace Aws {
#ifndef AWS_KAFKACONNECT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<KafkaConnect::Endpoint::KafkaConnectClientConfiguration,
                                                   KafkaConnect::Endpoint::KafkaConnectBuiltInParameters,
                                                   KafkaConnect::Endpoint::KafkaConnectClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<KafkaConnect::Endpoint::KafkaConnectClientConfiguration,
                                                  KafkaConnect::Endpoint::KafkaConnectBuiltInParameters,
                                                  KafkaConnect::Endpoint::KafkaConnectClientContextParameters>;
}  // namespace Endpoint
#endif

namespace KafkaConnect {
namespace Endpoint {
KafkaConnectEndpointProvider::KafkaConnectEndpointProvider()
    : KafkaConnectDefaultEpProviderBase(Aws::KafkaConnect::KafkaConnectEndpointRules::GetRulesBlob(),
                                        Aws::KafkaConnect::KafkaConnectEndpointRules::RulesBlobSize) {}

void KafkaConnectBuiltInParameters::SetFromClientConfiguration(const KafkaConnectClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const KafkaConnectClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void KafkaConnectBuiltInParameters::SetFromClientConfiguration(const KafkaConnectClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const KafkaConnectClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void KafkaConnectBuiltInParameters::SetServiceSpecificParameters(const KafkaConnectClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace KafkaConnect
}  // namespace Aws
