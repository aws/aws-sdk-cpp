/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisvideo/KinesisVideoClientConfiguration.h>
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>

namespace Aws {
namespace KinesisVideo {
namespace Endpoint {
using KinesisVideoClientConfiguration = Aws::KinesisVideo::KinesisVideoClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using KinesisVideoClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_KINESISVIDEO_API KinesisVideoBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~KinesisVideoBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const KinesisVideoClientConfiguration& config);
  virtual void SetFromClientConfiguration(const KinesisVideoClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const KinesisVideoClientConfiguration& config);
};

/**
 * The type for the KinesisVideo Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KinesisVideoEndpointProviderBase =
    EndpointProviderBase<KinesisVideoClientConfiguration, KinesisVideoBuiltInParameters, KinesisVideoClientContextParameters>;

using KinesisVideoDefaultEpProviderBase =
    BDDEndpointProvider<KinesisVideoClientConfiguration, KinesisVideoBuiltInParameters, KinesisVideoClientContextParameters>;

}  // namespace Endpoint
}  // namespace KinesisVideo

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_KINESISVIDEO_EXTERN template class AWS_KINESISVIDEO_API Aws::Endpoint::EndpointProviderBase<
    KinesisVideo::Endpoint::KinesisVideoClientConfiguration, KinesisVideo::Endpoint::KinesisVideoBuiltInParameters,
    KinesisVideo::Endpoint::KinesisVideoClientContextParameters>;

AWS_KINESISVIDEO_EXTERN template class AWS_KINESISVIDEO_API Aws::Endpoint::BDDEndpointProvider<
    KinesisVideo::Endpoint::KinesisVideoClientConfiguration, KinesisVideo::Endpoint::KinesisVideoBuiltInParameters,
    KinesisVideo::Endpoint::KinesisVideoClientContextParameters>;
}  // namespace Endpoint

namespace KinesisVideo {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_KINESISVIDEO_API KinesisVideoEndpointProvider : public KinesisVideoDefaultEpProviderBase {
 public:
  using KinesisVideoResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  KinesisVideoEndpointProvider();

  ~KinesisVideoEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace KinesisVideo
}  // namespace Aws
