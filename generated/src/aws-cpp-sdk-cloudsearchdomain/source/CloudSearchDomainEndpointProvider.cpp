/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearchdomain/CloudSearchDomainEndpointProvider.h>
#include <aws/cloudsearchdomain/internal/CloudSearchDomainEndpointRules.h>

namespace Aws {
#ifndef AWS_CLOUDSEARCHDOMAIN_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CloudSearchDomain::Endpoint::CloudSearchDomainClientConfiguration,
                                                   CloudSearchDomain::Endpoint::CloudSearchDomainBuiltInParameters,
                                                   CloudSearchDomain::Endpoint::CloudSearchDomainClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CloudSearchDomain::Endpoint::CloudSearchDomainClientConfiguration,
                                                  CloudSearchDomain::Endpoint::CloudSearchDomainBuiltInParameters,
                                                  CloudSearchDomain::Endpoint::CloudSearchDomainClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CloudSearchDomain {
namespace Endpoint {
CloudSearchDomainEndpointProvider::CloudSearchDomainEndpointProvider()
    : CloudSearchDomainDefaultEpProviderBase(Aws::CloudSearchDomain::CloudSearchDomainEndpointRules::GetRulesBlob(),
                                             Aws::CloudSearchDomain::CloudSearchDomainEndpointRules::RulesBlobSize) {}

void CloudSearchDomainBuiltInParameters::SetFromClientConfiguration(const CloudSearchDomainClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CloudSearchDomainClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CloudSearchDomainBuiltInParameters::SetFromClientConfiguration(const CloudSearchDomainClientConfiguration& config,
                                                                    const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CloudSearchDomainClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CloudSearchDomainBuiltInParameters::SetServiceSpecificParameters(const CloudSearchDomainClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CloudSearchDomain
}  // namespace Aws
