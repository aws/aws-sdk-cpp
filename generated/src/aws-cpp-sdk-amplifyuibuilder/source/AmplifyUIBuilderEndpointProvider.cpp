/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/AmplifyUIBuilderEndpointProvider.h>
#include <aws/amplifyuibuilder/internal/AmplifyUIBuilderEndpointRules.h>

namespace Aws {
#ifndef AWS_AMPLIFYUIBUILDER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AmplifyUIBuilder::Endpoint::AmplifyUIBuilderClientConfiguration,
                                                   AmplifyUIBuilder::Endpoint::AmplifyUIBuilderBuiltInParameters,
                                                   AmplifyUIBuilder::Endpoint::AmplifyUIBuilderClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AmplifyUIBuilder::Endpoint::AmplifyUIBuilderClientConfiguration,
                                                  AmplifyUIBuilder::Endpoint::AmplifyUIBuilderBuiltInParameters,
                                                  AmplifyUIBuilder::Endpoint::AmplifyUIBuilderClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AmplifyUIBuilder {
namespace Endpoint {
AmplifyUIBuilderEndpointProvider::AmplifyUIBuilderEndpointProvider()
    : AmplifyUIBuilderDefaultEpProviderBase(Aws::AmplifyUIBuilder::AmplifyUIBuilderEndpointRules::GetRulesBlob(),
                                            Aws::AmplifyUIBuilder::AmplifyUIBuilderEndpointRules::RulesBlobSize) {}

void AmplifyUIBuilderBuiltInParameters::SetFromClientConfiguration(const AmplifyUIBuilderClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AmplifyUIBuilderClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AmplifyUIBuilderBuiltInParameters::SetFromClientConfiguration(const AmplifyUIBuilderClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AmplifyUIBuilderClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AmplifyUIBuilderBuiltInParameters::SetServiceSpecificParameters(const AmplifyUIBuilderClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AmplifyUIBuilder
}  // namespace Aws
