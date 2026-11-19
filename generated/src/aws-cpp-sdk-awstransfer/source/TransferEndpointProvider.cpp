/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/TransferEndpointProvider.h>
#include <aws/awstransfer/internal/TransferEndpointRules.h>

namespace Aws {
#ifndef AWS_TRANSFER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Transfer::Endpoint::TransferClientConfiguration,
                                                   Transfer::Endpoint::TransferBuiltInParameters,
                                                   Transfer::Endpoint::TransferClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Transfer::Endpoint::TransferClientConfiguration,
                                                  Transfer::Endpoint::TransferBuiltInParameters,
                                                  Transfer::Endpoint::TransferClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Transfer {
namespace Endpoint {
TransferEndpointProvider::TransferEndpointProvider()
    : TransferDefaultEpProviderBase(Aws::Transfer::TransferEndpointRules::GetRulesBlob(),
                                    Aws::Transfer::TransferEndpointRules::RulesBlobSize) {}

void TransferBuiltInParameters::SetFromClientConfiguration(const TransferClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const TransferClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void TransferBuiltInParameters::SetFromClientConfiguration(const TransferClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const TransferClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void TransferBuiltInParameters::SetServiceSpecificParameters(const TransferClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Transfer
}  // namespace Aws
