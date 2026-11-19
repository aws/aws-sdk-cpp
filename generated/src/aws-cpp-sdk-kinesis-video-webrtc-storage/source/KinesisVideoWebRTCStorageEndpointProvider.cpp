/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageEndpointProvider.h>
#include <aws/kinesis-video-webrtc-storage/internal/KinesisVideoWebRTCStorageEndpointRules.h>

namespace Aws {
#ifndef AWS_KINESISVIDEOWEBRTCSTORAGE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<KinesisVideoWebRTCStorage::Endpoint::KinesisVideoWebRTCStorageClientConfiguration,
                                                   KinesisVideoWebRTCStorage::Endpoint::KinesisVideoWebRTCStorageBuiltInParameters,
                                                   KinesisVideoWebRTCStorage::Endpoint::KinesisVideoWebRTCStorageClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<KinesisVideoWebRTCStorage::Endpoint::KinesisVideoWebRTCStorageClientConfiguration,
                                                  KinesisVideoWebRTCStorage::Endpoint::KinesisVideoWebRTCStorageBuiltInParameters,
                                                  KinesisVideoWebRTCStorage::Endpoint::KinesisVideoWebRTCStorageClientContextParameters>;
}  // namespace Endpoint
#endif

namespace KinesisVideoWebRTCStorage {
namespace Endpoint {
KinesisVideoWebRTCStorageEndpointProvider::KinesisVideoWebRTCStorageEndpointProvider()
    : KinesisVideoWebRTCStorageDefaultEpProviderBase(
          Aws::KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageEndpointRules::GetRulesBlob(),
          Aws::KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageEndpointRules::RulesBlobSize) {}

void KinesisVideoWebRTCStorageBuiltInParameters::SetFromClientConfiguration(const KinesisVideoWebRTCStorageClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const KinesisVideoWebRTCStorageClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void KinesisVideoWebRTCStorageBuiltInParameters::SetFromClientConfiguration(const KinesisVideoWebRTCStorageClientConfiguration& config,
                                                                            const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const KinesisVideoWebRTCStorageClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void KinesisVideoWebRTCStorageBuiltInParameters::SetServiceSpecificParameters(const KinesisVideoWebRTCStorageClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace KinesisVideoWebRTCStorage
}  // namespace Aws
