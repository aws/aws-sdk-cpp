/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect-contact-lens/ConnectContactLensEndpointProvider.h>
#include <aws/connect-contact-lens/internal/ConnectContactLensEndpointRules.h>

namespace Aws {
#ifndef AWS_CONNECTCONTACTLENS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ConnectContactLens::Endpoint::ConnectContactLensClientConfiguration,
                                                   ConnectContactLens::Endpoint::ConnectContactLensBuiltInParameters,
                                                   ConnectContactLens::Endpoint::ConnectContactLensClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ConnectContactLens::Endpoint::ConnectContactLensClientConfiguration,
                                                  ConnectContactLens::Endpoint::ConnectContactLensBuiltInParameters,
                                                  ConnectContactLens::Endpoint::ConnectContactLensClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ConnectContactLens {
namespace Endpoint {
ConnectContactLensEndpointProvider::ConnectContactLensEndpointProvider()
    : ConnectContactLensDefaultEpProviderBase(Aws::ConnectContactLens::ConnectContactLensEndpointRules::GetRulesBlob(),
                                              Aws::ConnectContactLens::ConnectContactLensEndpointRules::RulesBlobSize) {}

void ConnectContactLensBuiltInParameters::SetFromClientConfiguration(const ConnectContactLensClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ConnectContactLensClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ConnectContactLensBuiltInParameters::SetFromClientConfiguration(const ConnectContactLensClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ConnectContactLensClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ConnectContactLensBuiltInParameters::SetServiceSpecificParameters(const ConnectContactLensClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ConnectContactLens
}  // namespace Aws
