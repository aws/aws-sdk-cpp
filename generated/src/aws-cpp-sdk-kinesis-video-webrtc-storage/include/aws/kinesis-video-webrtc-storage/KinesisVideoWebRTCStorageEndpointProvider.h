/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageClientConfiguration.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorage_EXPORTS.h>

namespace Aws {
namespace KinesisVideoWebRTCStorage {
namespace Endpoint {
using KinesisVideoWebRTCStorageClientConfiguration = Aws::KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using KinesisVideoWebRTCStorageClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_KINESISVIDEOWEBRTCSTORAGE_API KinesisVideoWebRTCStorageBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~KinesisVideoWebRTCStorageBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const KinesisVideoWebRTCStorageClientConfiguration& config);
  virtual void SetFromClientConfiguration(const KinesisVideoWebRTCStorageClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const KinesisVideoWebRTCStorageClientConfiguration& config);
};

/**
 * The type for the KinesisVideoWebRTCStorage Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KinesisVideoWebRTCStorageEndpointProviderBase =
    EndpointProviderBase<KinesisVideoWebRTCStorageClientConfiguration, KinesisVideoWebRTCStorageBuiltInParameters,
                         KinesisVideoWebRTCStorageClientContextParameters>;

using KinesisVideoWebRTCStorageDefaultEpProviderBase =
    BDDEndpointProvider<KinesisVideoWebRTCStorageClientConfiguration, KinesisVideoWebRTCStorageBuiltInParameters,
                        KinesisVideoWebRTCStorageClientContextParameters>;

}  // namespace Endpoint
}  // namespace KinesisVideoWebRTCStorage

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_KINESISVIDEOWEBRTCSTORAGE_EXTERN template class AWS_KINESISVIDEOWEBRTCSTORAGE_API
    Aws::Endpoint::EndpointProviderBase<KinesisVideoWebRTCStorage::Endpoint::KinesisVideoWebRTCStorageClientConfiguration,
                                        KinesisVideoWebRTCStorage::Endpoint::KinesisVideoWebRTCStorageBuiltInParameters,
                                        KinesisVideoWebRTCStorage::Endpoint::KinesisVideoWebRTCStorageClientContextParameters>;

AWS_KINESISVIDEOWEBRTCSTORAGE_EXTERN template class AWS_KINESISVIDEOWEBRTCSTORAGE_API
    Aws::Endpoint::BDDEndpointProvider<KinesisVideoWebRTCStorage::Endpoint::KinesisVideoWebRTCStorageClientConfiguration,
                                       KinesisVideoWebRTCStorage::Endpoint::KinesisVideoWebRTCStorageBuiltInParameters,
                                       KinesisVideoWebRTCStorage::Endpoint::KinesisVideoWebRTCStorageClientContextParameters>;
}  // namespace Endpoint

namespace KinesisVideoWebRTCStorage {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_KINESISVIDEOWEBRTCSTORAGE_API KinesisVideoWebRTCStorageEndpointProvider : public KinesisVideoWebRTCStorageDefaultEpProviderBase {
 public:
  using KinesisVideoWebRTCStorageResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  KinesisVideoWebRTCStorageEndpointProvider();

  ~KinesisVideoWebRTCStorageEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace KinesisVideoWebRTCStorage
}  // namespace Aws
