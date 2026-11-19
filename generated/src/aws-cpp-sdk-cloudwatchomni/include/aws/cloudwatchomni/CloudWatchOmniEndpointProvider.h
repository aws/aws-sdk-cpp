/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniClientConfiguration.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Endpoint {
using CloudWatchOmniClientConfiguration = Aws::CloudWatchOmni::CloudWatchOmniClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CloudWatchOmniClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLOUDWATCHOMNI_API CloudWatchOmniBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CloudWatchOmniBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CloudWatchOmniClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CloudWatchOmniClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CloudWatchOmniClientConfiguration& config);
};

/**
 * The type for the CloudWatchOmni Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudWatchOmniEndpointProviderBase =
    EndpointProviderBase<CloudWatchOmniClientConfiguration, CloudWatchOmniBuiltInParameters, CloudWatchOmniClientContextParameters>;

using CloudWatchOmniDefaultEpProviderBase =
    BDDEndpointProvider<CloudWatchOmniClientConfiguration, CloudWatchOmniBuiltInParameters, CloudWatchOmniClientContextParameters>;

}  // namespace Endpoint
}  // namespace CloudWatchOmni

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLOUDWATCHOMNI_EXTERN template class AWS_CLOUDWATCHOMNI_API Aws::Endpoint::EndpointProviderBase<
    CloudWatchOmni::Endpoint::CloudWatchOmniClientConfiguration, CloudWatchOmni::Endpoint::CloudWatchOmniBuiltInParameters,
    CloudWatchOmni::Endpoint::CloudWatchOmniClientContextParameters>;

AWS_CLOUDWATCHOMNI_EXTERN template class AWS_CLOUDWATCHOMNI_API Aws::Endpoint::BDDEndpointProvider<
    CloudWatchOmni::Endpoint::CloudWatchOmniClientConfiguration, CloudWatchOmni::Endpoint::CloudWatchOmniBuiltInParameters,
    CloudWatchOmni::Endpoint::CloudWatchOmniClientContextParameters>;
}  // namespace Endpoint

namespace CloudWatchOmni {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDWATCHOMNI_API CloudWatchOmniEndpointProvider : public CloudWatchOmniDefaultEpProviderBase {
 public:
  using CloudWatchOmniResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CloudWatchOmniEndpointProvider();

  ~CloudWatchOmniEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CloudWatchOmni
}  // namespace Aws
