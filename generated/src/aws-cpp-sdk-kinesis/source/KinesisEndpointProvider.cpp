/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/KinesisEndpointProvider.h>
#include <aws/kinesis/internal/KinesisEndpointRules.h>

namespace Aws {
#ifndef AWS_KINESIS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Kinesis::Endpoint::KinesisClientConfiguration,
                                                   Kinesis::Endpoint::KinesisBuiltInParameters,
                                                   Kinesis::Endpoint::KinesisClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Kinesis::Endpoint::KinesisClientConfiguration,
                                                  Kinesis::Endpoint::KinesisBuiltInParameters,
                                                  Kinesis::Endpoint::KinesisClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Kinesis {
namespace Endpoint {
KinesisEndpointProvider::KinesisEndpointProvider()
    : KinesisDefaultEpProviderBase(Aws::Kinesis::KinesisEndpointRules::GetRulesBlob(), Aws::Kinesis::KinesisEndpointRules::RulesBlobSize) {}

void KinesisBuiltInParameters::SetFromClientConfiguration(const KinesisClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const KinesisClientConfiguration::BaseClientConfigClass&>(config));

  if (!config.accountId.empty()) {
    SetStringParameter("AccountId", config.accountId);
  }
  if (!config.accountIdEndpointMode.empty()) {
    SetStringParameter("AccountIdEndpointMode", config.accountIdEndpointMode);
  }
}

}  // namespace Endpoint
}  // namespace Kinesis
}  // namespace Aws
