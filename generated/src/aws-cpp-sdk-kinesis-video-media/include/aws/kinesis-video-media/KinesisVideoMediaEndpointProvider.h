/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis-video-media/KinesisVideoMediaClientConfiguration.h>
#include <aws/kinesis-video-media/KinesisVideoMedia_EXPORTS.h>

namespace Aws {
namespace KinesisVideoMedia {
namespace Endpoint {
using KinesisVideoMediaClientConfiguration = Aws::KinesisVideoMedia::KinesisVideoMediaClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using KinesisVideoMediaClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_KINESISVIDEOMEDIA_API KinesisVideoMediaBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~KinesisVideoMediaBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const KinesisVideoMediaClientConfiguration& config);
  virtual void SetFromClientConfiguration(const KinesisVideoMediaClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const KinesisVideoMediaClientConfiguration& config);
};

/**
 * The type for the KinesisVideoMedia Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KinesisVideoMediaEndpointProviderBase = EndpointProviderBase<KinesisVideoMediaClientConfiguration, KinesisVideoMediaBuiltInParameters,
                                                                   KinesisVideoMediaClientContextParameters>;

using KinesisVideoMediaDefaultEpProviderBase =
    BDDEndpointProvider<KinesisVideoMediaClientConfiguration, KinesisVideoMediaBuiltInParameters, KinesisVideoMediaClientContextParameters>;

}  // namespace Endpoint
}  // namespace KinesisVideoMedia

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_KINESISVIDEOMEDIA_EXTERN template class AWS_KINESISVIDEOMEDIA_API Aws::Endpoint::EndpointProviderBase<
    KinesisVideoMedia::Endpoint::KinesisVideoMediaClientConfiguration, KinesisVideoMedia::Endpoint::KinesisVideoMediaBuiltInParameters,
    KinesisVideoMedia::Endpoint::KinesisVideoMediaClientContextParameters>;

AWS_KINESISVIDEOMEDIA_EXTERN template class AWS_KINESISVIDEOMEDIA_API Aws::Endpoint::BDDEndpointProvider<
    KinesisVideoMedia::Endpoint::KinesisVideoMediaClientConfiguration, KinesisVideoMedia::Endpoint::KinesisVideoMediaBuiltInParameters,
    KinesisVideoMedia::Endpoint::KinesisVideoMediaClientContextParameters>;
}  // namespace Endpoint

namespace KinesisVideoMedia {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_KINESISVIDEOMEDIA_API KinesisVideoMediaEndpointProvider : public KinesisVideoMediaDefaultEpProviderBase {
 public:
  using KinesisVideoMediaResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  KinesisVideoMediaEndpointProvider();

  ~KinesisVideoMediaEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace KinesisVideoMedia
}  // namespace Aws
