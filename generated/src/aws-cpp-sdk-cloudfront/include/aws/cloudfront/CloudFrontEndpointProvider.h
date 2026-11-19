/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFrontClientConfiguration.h>
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CloudFront {
namespace Endpoint {
using CloudFrontClientConfiguration = Aws::CloudFront::CloudFrontClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CloudFrontClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLOUDFRONT_API CloudFrontBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CloudFrontBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CloudFrontClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CloudFrontClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CloudFrontClientConfiguration& config);
};

/**
 * The type for the CloudFront Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudFrontEndpointProviderBase =
    EndpointProviderBase<CloudFrontClientConfiguration, CloudFrontBuiltInParameters, CloudFrontClientContextParameters>;

using CloudFrontDefaultEpProviderBase =
    BDDEndpointProvider<CloudFrontClientConfiguration, CloudFrontBuiltInParameters, CloudFrontClientContextParameters>;

}  // namespace Endpoint
}  // namespace CloudFront

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLOUDFRONT_EXTERN template class AWS_CLOUDFRONT_API Aws::Endpoint::EndpointProviderBase<
    CloudFront::Endpoint::CloudFrontClientConfiguration, CloudFront::Endpoint::CloudFrontBuiltInParameters,
    CloudFront::Endpoint::CloudFrontClientContextParameters>;

AWS_CLOUDFRONT_EXTERN template class AWS_CLOUDFRONT_API Aws::Endpoint::BDDEndpointProvider<
    CloudFront::Endpoint::CloudFrontClientConfiguration, CloudFront::Endpoint::CloudFrontBuiltInParameters,
    CloudFront::Endpoint::CloudFrontClientContextParameters>;
}  // namespace Endpoint

namespace CloudFront {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDFRONT_API CloudFrontEndpointProvider : public CloudFrontDefaultEpProviderBase {
 public:
  using CloudFrontResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CloudFrontEndpointProvider();

  ~CloudFrontEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CloudFront
}  // namespace Aws
