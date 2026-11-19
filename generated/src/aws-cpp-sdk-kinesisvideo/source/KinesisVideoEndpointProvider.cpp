/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/KinesisVideoEndpointProvider.h>
#include <aws/kinesisvideo/internal/KinesisVideoEndpointRules.h>

namespace Aws {
#ifndef AWS_KINESISVIDEO_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<KinesisVideo::Endpoint::KinesisVideoClientConfiguration,
                                                   KinesisVideo::Endpoint::KinesisVideoBuiltInParameters,
                                                   KinesisVideo::Endpoint::KinesisVideoClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<KinesisVideo::Endpoint::KinesisVideoClientConfiguration,
                                                  KinesisVideo::Endpoint::KinesisVideoBuiltInParameters,
                                                  KinesisVideo::Endpoint::KinesisVideoClientContextParameters>;
}  // namespace Endpoint
#endif

namespace KinesisVideo {
namespace Endpoint {
KinesisVideoEndpointProvider::KinesisVideoEndpointProvider()
    : KinesisVideoDefaultEpProviderBase(Aws::KinesisVideo::KinesisVideoEndpointRules::GetRulesBlob(),
                                        Aws::KinesisVideo::KinesisVideoEndpointRules::RulesBlobSize) {}

void KinesisVideoBuiltInParameters::SetFromClientConfiguration(const KinesisVideoClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const KinesisVideoClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void KinesisVideoBuiltInParameters::SetFromClientConfiguration(const KinesisVideoClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const KinesisVideoClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void KinesisVideoBuiltInParameters::SetServiceSpecificParameters(const KinesisVideoClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace KinesisVideo
}  // namespace Aws
