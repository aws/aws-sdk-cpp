/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/ACMPCAEndpointProvider.h>
#include <aws/acm-pca/internal/ACMPCAEndpointRules.h>

namespace Aws {
#ifndef AWS_ACMPCA_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ACMPCA::Endpoint::ACMPCAClientConfiguration, ACMPCA::Endpoint::ACMPCABuiltInParameters,
                                                   ACMPCA::Endpoint::ACMPCAClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ACMPCA::Endpoint::ACMPCAClientConfiguration, ACMPCA::Endpoint::ACMPCABuiltInParameters,
                                                  ACMPCA::Endpoint::ACMPCAClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ACMPCA {
namespace Endpoint {
ACMPCAEndpointProvider::ACMPCAEndpointProvider()
    : ACMPCADefaultEpProviderBase(Aws::ACMPCA::ACMPCAEndpointRules::GetRulesBlob(), Aws::ACMPCA::ACMPCAEndpointRules::RulesBlobSize) {}

void ACMPCABuiltInParameters::SetFromClientConfiguration(const ACMPCAClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ACMPCAClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ACMPCABuiltInParameters::SetFromClientConfiguration(const ACMPCAClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ACMPCAClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ACMPCABuiltInParameters::SetServiceSpecificParameters(const ACMPCAClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ACMPCA
}  // namespace Aws
