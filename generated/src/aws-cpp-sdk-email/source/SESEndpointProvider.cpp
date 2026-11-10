/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/SESEndpointProvider.h>
#include <aws/email/internal/SESEndpointRules.h>

namespace Aws {
#ifndef AWS_SES_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SES::Endpoint::SESClientConfiguration, SES::Endpoint::SESBuiltInParameters,
                                                   SES::Endpoint::SESClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SES::Endpoint::SESClientConfiguration, SES::Endpoint::SESBuiltInParameters,
                                                  SES::Endpoint::SESClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SES {
namespace Endpoint {
SESEndpointProvider::SESEndpointProvider()
    : SESDefaultEpProviderBase(Aws::SES::SESEndpointRules::GetRulesBlob(), Aws::SES::SESEndpointRules::RulesBlobSize) {}

void SESBuiltInParameters::SetFromClientConfiguration(const SESClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SESClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SESBuiltInParameters::SetFromClientConfiguration(const SESClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SESClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SESBuiltInParameters::SetServiceSpecificParameters(const SESClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SES
}  // namespace Aws
