/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/Macie2EndpointProvider.h>
#include <aws/macie2/internal/Macie2EndpointRules.h>

namespace Aws {
#ifndef AWS_MACIE2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Macie2::Endpoint::Macie2ClientConfiguration, Macie2::Endpoint::Macie2BuiltInParameters,
                                                   Macie2::Endpoint::Macie2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Macie2::Endpoint::Macie2ClientConfiguration, Macie2::Endpoint::Macie2BuiltInParameters,
                                                  Macie2::Endpoint::Macie2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Macie2 {
namespace Endpoint {
Macie2EndpointProvider::Macie2EndpointProvider()
    : Macie2DefaultEpProviderBase(Aws::Macie2::Macie2EndpointRules::GetRulesBlob(), Aws::Macie2::Macie2EndpointRules::RulesBlobSize) {}

void Macie2BuiltInParameters::SetFromClientConfiguration(const Macie2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const Macie2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void Macie2BuiltInParameters::SetFromClientConfiguration(const Macie2ClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const Macie2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void Macie2BuiltInParameters::SetServiceSpecificParameters(const Macie2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Macie2
}  // namespace Aws
