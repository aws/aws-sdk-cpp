/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-media/KinesisVideoMediaEndpointProvider.h>
#include <aws/kinesis-video-media/internal/KinesisVideoMediaEndpointRules.h>

namespace Aws {
#ifndef AWS_KINESISVIDEOMEDIA_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<KinesisVideoMedia::Endpoint::KinesisVideoMediaClientConfiguration,
                                                   KinesisVideoMedia::Endpoint::KinesisVideoMediaBuiltInParameters,
                                                   KinesisVideoMedia::Endpoint::KinesisVideoMediaClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<KinesisVideoMedia::Endpoint::KinesisVideoMediaClientConfiguration,
                                                  KinesisVideoMedia::Endpoint::KinesisVideoMediaBuiltInParameters,
                                                  KinesisVideoMedia::Endpoint::KinesisVideoMediaClientContextParameters>;
}  // namespace Endpoint
#endif

namespace KinesisVideoMedia {
namespace Endpoint {
KinesisVideoMediaEndpointProvider::KinesisVideoMediaEndpointProvider()
    : KinesisVideoMediaDefaultEpProviderBase(Aws::KinesisVideoMedia::KinesisVideoMediaEndpointRules::GetRulesBlob(),
                                             Aws::KinesisVideoMedia::KinesisVideoMediaEndpointRules::RulesBlobSize) {}

void KinesisVideoMediaBuiltInParameters::SetFromClientConfiguration(const KinesisVideoMediaClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const KinesisVideoMediaClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void KinesisVideoMediaBuiltInParameters::SetFromClientConfiguration(const KinesisVideoMediaClientConfiguration& config,
                                                                    const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const KinesisVideoMediaClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void KinesisVideoMediaBuiltInParameters::SetServiceSpecificParameters(const KinesisVideoMediaClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace KinesisVideoMedia
}  // namespace Aws
