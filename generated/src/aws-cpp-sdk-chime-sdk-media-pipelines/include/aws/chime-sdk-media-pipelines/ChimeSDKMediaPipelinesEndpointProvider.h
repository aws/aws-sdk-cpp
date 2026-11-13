/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesClientConfiguration.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ChimeSDKMediaPipelines {
namespace Endpoint {
using ChimeSDKMediaPipelinesClientConfiguration = Aws::ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ChimeSDKMediaPipelinesClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CHIMESDKMEDIAPIPELINES_API ChimeSDKMediaPipelinesBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ChimeSDKMediaPipelinesBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ChimeSDKMediaPipelinesClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ChimeSDKMediaPipelinesClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ChimeSDKMediaPipelinesClientConfiguration& config);
};

/**
 * The type for the ChimeSDKMediaPipelines Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ChimeSDKMediaPipelinesEndpointProviderBase =
    EndpointProviderBase<ChimeSDKMediaPipelinesClientConfiguration, ChimeSDKMediaPipelinesBuiltInParameters,
                         ChimeSDKMediaPipelinesClientContextParameters>;

using ChimeSDKMediaPipelinesDefaultEpProviderBase =
    BDDEndpointProvider<ChimeSDKMediaPipelinesClientConfiguration, ChimeSDKMediaPipelinesBuiltInParameters,
                        ChimeSDKMediaPipelinesClientContextParameters>;

}  // namespace Endpoint
}  // namespace ChimeSDKMediaPipelines

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CHIMESDKMEDIAPIPELINES_EXTERN template class AWS_CHIMESDKMEDIAPIPELINES_API
    Aws::Endpoint::EndpointProviderBase<ChimeSDKMediaPipelines::Endpoint::ChimeSDKMediaPipelinesClientConfiguration,
                                        ChimeSDKMediaPipelines::Endpoint::ChimeSDKMediaPipelinesBuiltInParameters,
                                        ChimeSDKMediaPipelines::Endpoint::ChimeSDKMediaPipelinesClientContextParameters>;

AWS_CHIMESDKMEDIAPIPELINES_EXTERN template class AWS_CHIMESDKMEDIAPIPELINES_API
    Aws::Endpoint::BDDEndpointProvider<ChimeSDKMediaPipelines::Endpoint::ChimeSDKMediaPipelinesClientConfiguration,
                                       ChimeSDKMediaPipelines::Endpoint::ChimeSDKMediaPipelinesBuiltInParameters,
                                       ChimeSDKMediaPipelines::Endpoint::ChimeSDKMediaPipelinesClientContextParameters>;
}  // namespace Endpoint

namespace ChimeSDKMediaPipelines {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CHIMESDKMEDIAPIPELINES_API ChimeSDKMediaPipelinesEndpointProvider : public ChimeSDKMediaPipelinesDefaultEpProviderBase {
 public:
  using ChimeSDKMediaPipelinesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ChimeSDKMediaPipelinesEndpointProvider();

  ~ChimeSDKMediaPipelinesEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ChimeSDKMediaPipelines
}  // namespace Aws
