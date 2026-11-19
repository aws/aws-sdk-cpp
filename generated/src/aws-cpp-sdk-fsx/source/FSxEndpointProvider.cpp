/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/FSxEndpointProvider.h>
#include <aws/fsx/internal/FSxEndpointRules.h>

namespace Aws {
#ifndef AWS_FSX_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<FSx::Endpoint::FSxClientConfiguration, FSx::Endpoint::FSxBuiltInParameters,
                                                   FSx::Endpoint::FSxClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<FSx::Endpoint::FSxClientConfiguration, FSx::Endpoint::FSxBuiltInParameters,
                                                  FSx::Endpoint::FSxClientContextParameters>;
}  // namespace Endpoint
#endif

namespace FSx {
namespace Endpoint {
FSxEndpointProvider::FSxEndpointProvider()
    : FSxDefaultEpProviderBase(Aws::FSx::FSxEndpointRules::GetRulesBlob(), Aws::FSx::FSxEndpointRules::RulesBlobSize) {}

void FSxBuiltInParameters::SetFromClientConfiguration(const FSxClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const FSxClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void FSxBuiltInParameters::SetFromClientConfiguration(const FSxClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const FSxClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void FSxBuiltInParameters::SetServiceSpecificParameters(const FSxClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace FSx
}  // namespace Aws
