/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsClientConfiguration.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannels_EXPORTS.h>

namespace Aws {
namespace KinesisVideoSignalingChannels {
namespace Endpoint {
using KinesisVideoSignalingChannelsClientConfiguration =
    Aws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using KinesisVideoSignalingChannelsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_KINESISVIDEOSIGNALINGCHANNELS_API KinesisVideoSignalingChannelsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~KinesisVideoSignalingChannelsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const KinesisVideoSignalingChannelsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const KinesisVideoSignalingChannelsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const KinesisVideoSignalingChannelsClientConfiguration& config);
};

/**
 * The type for the KinesisVideoSignalingChannels Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KinesisVideoSignalingChannelsEndpointProviderBase =
    EndpointProviderBase<KinesisVideoSignalingChannelsClientConfiguration, KinesisVideoSignalingChannelsBuiltInParameters,
                         KinesisVideoSignalingChannelsClientContextParameters>;

using KinesisVideoSignalingChannelsDefaultEpProviderBase =
    BDDEndpointProvider<KinesisVideoSignalingChannelsClientConfiguration, KinesisVideoSignalingChannelsBuiltInParameters,
                        KinesisVideoSignalingChannelsClientContextParameters>;

}  // namespace Endpoint
}  // namespace KinesisVideoSignalingChannels

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_KINESISVIDEOSIGNALINGCHANNELS_EXTERN template class AWS_KINESISVIDEOSIGNALINGCHANNELS_API
    Aws::Endpoint::EndpointProviderBase<KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsClientConfiguration,
                                        KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsBuiltInParameters,
                                        KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsClientContextParameters>;

AWS_KINESISVIDEOSIGNALINGCHANNELS_EXTERN template class AWS_KINESISVIDEOSIGNALINGCHANNELS_API
    Aws::Endpoint::BDDEndpointProvider<KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsClientConfiguration,
                                       KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsBuiltInParameters,
                                       KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsClientContextParameters>;
}  // namespace Endpoint

namespace KinesisVideoSignalingChannels {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_KINESISVIDEOSIGNALINGCHANNELS_API KinesisVideoSignalingChannelsEndpointProvider
    : public KinesisVideoSignalingChannelsDefaultEpProviderBase {
 public:
  using KinesisVideoSignalingChannelsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  KinesisVideoSignalingChannelsEndpointProvider();

  ~KinesisVideoSignalingChannelsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace KinesisVideoSignalingChannels
}  // namespace Aws
