/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector-scan/InspectorscanEndpointProvider.h>
#include <aws/inspector-scan/internal/InspectorscanEndpointRules.h>

namespace Aws {
#ifndef AWS_INSPECTORSCAN_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<inspectorscan::Endpoint::InspectorscanClientConfiguration,
                                                   inspectorscan::Endpoint::InspectorscanBuiltInParameters,
                                                   inspectorscan::Endpoint::InspectorscanClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<inspectorscan::Endpoint::InspectorscanClientConfiguration,
                                                  inspectorscan::Endpoint::InspectorscanBuiltInParameters,
                                                  inspectorscan::Endpoint::InspectorscanClientContextParameters>;
}  // namespace Endpoint
#endif

namespace inspectorscan {
namespace Endpoint {
InspectorscanEndpointProvider::InspectorscanEndpointProvider()
    : InspectorscanDefaultEpProviderBase(Aws::inspectorscan::InspectorscanEndpointRules::GetRulesBlob(),
                                         Aws::inspectorscan::InspectorscanEndpointRules::RulesBlobSize) {}

void InspectorscanBuiltInParameters::SetFromClientConfiguration(const InspectorscanClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const InspectorscanClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void InspectorscanBuiltInParameters::SetFromClientConfiguration(const InspectorscanClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const InspectorscanClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void InspectorscanBuiltInParameters::SetServiceSpecificParameters(const InspectorscanClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace inspectorscan
}  // namespace Aws
