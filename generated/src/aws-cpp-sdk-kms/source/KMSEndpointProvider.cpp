/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/KMSEndpointProvider.h>
#include <aws/kms/internal/KMSEndpointRules.h>

namespace Aws {
#ifndef AWS_KMS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<KMS::Endpoint::KMSClientConfiguration, KMS::Endpoint::KMSBuiltInParameters,
                                                   KMS::Endpoint::KMSClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<KMS::Endpoint::KMSClientConfiguration, KMS::Endpoint::KMSBuiltInParameters,
                                                  KMS::Endpoint::KMSClientContextParameters>;
}  // namespace Endpoint
#endif

namespace KMS {
namespace Endpoint {
KMSEndpointProvider::KMSEndpointProvider()
    : KMSDefaultEpProviderBase(Aws::KMS::KMSEndpointRules::GetRulesBlob(), Aws::KMS::KMSEndpointRules::RulesBlobSize) {}

void KMSBuiltInParameters::SetFromClientConfiguration(const KMSClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const KMSClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void KMSBuiltInParameters::SetFromClientConfiguration(const KMSClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const KMSClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void KMSBuiltInParameters::SetServiceSpecificParameters(const KMSClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace KMS
}  // namespace Aws
