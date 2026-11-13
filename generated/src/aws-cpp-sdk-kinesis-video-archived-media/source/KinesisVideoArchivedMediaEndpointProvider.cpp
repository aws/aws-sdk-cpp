/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaEndpointProvider.h>
#include <aws/kinesis-video-archived-media/internal/KinesisVideoArchivedMediaEndpointRules.h>

namespace Aws {
#ifndef AWS_KINESISVIDEOARCHIVEDMEDIA_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<KinesisVideoArchivedMedia::Endpoint::KinesisVideoArchivedMediaClientConfiguration,
                                                   KinesisVideoArchivedMedia::Endpoint::KinesisVideoArchivedMediaBuiltInParameters,
                                                   KinesisVideoArchivedMedia::Endpoint::KinesisVideoArchivedMediaClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<KinesisVideoArchivedMedia::Endpoint::KinesisVideoArchivedMediaClientConfiguration,
                                                  KinesisVideoArchivedMedia::Endpoint::KinesisVideoArchivedMediaBuiltInParameters,
                                                  KinesisVideoArchivedMedia::Endpoint::KinesisVideoArchivedMediaClientContextParameters>;
}  // namespace Endpoint
#endif

namespace KinesisVideoArchivedMedia {
namespace Endpoint {
KinesisVideoArchivedMediaEndpointProvider::KinesisVideoArchivedMediaEndpointProvider()
    : KinesisVideoArchivedMediaDefaultEpProviderBase(
          Aws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaEndpointRules::GetRulesBlob(),
          Aws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaEndpointRules::RulesBlobSize) {}

void KinesisVideoArchivedMediaBuiltInParameters::SetFromClientConfiguration(const KinesisVideoArchivedMediaClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const KinesisVideoArchivedMediaClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void KinesisVideoArchivedMediaBuiltInParameters::SetFromClientConfiguration(const KinesisVideoArchivedMediaClientConfiguration& config,
                                                                            const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const KinesisVideoArchivedMediaClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void KinesisVideoArchivedMediaBuiltInParameters::SetServiceSpecificParameters(const KinesisVideoArchivedMediaClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace KinesisVideoArchivedMedia
}  // namespace Aws
