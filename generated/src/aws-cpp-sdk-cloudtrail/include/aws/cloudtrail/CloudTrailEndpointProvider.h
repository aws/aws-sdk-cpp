/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrailClientConfiguration.h>
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CloudTrail {
namespace Endpoint {
using CloudTrailClientConfiguration = Aws::CloudTrail::CloudTrailClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CloudTrailClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLOUDTRAIL_API CloudTrailBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CloudTrailBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CloudTrailClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CloudTrailClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CloudTrailClientConfiguration& config);
};

/**
 * The type for the CloudTrail Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudTrailEndpointProviderBase =
    EndpointProviderBase<CloudTrailClientConfiguration, CloudTrailBuiltInParameters, CloudTrailClientContextParameters>;

using CloudTrailDefaultEpProviderBase =
    BDDEndpointProvider<CloudTrailClientConfiguration, CloudTrailBuiltInParameters, CloudTrailClientContextParameters>;

}  // namespace Endpoint
}  // namespace CloudTrail

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLOUDTRAIL_EXTERN template class AWS_CLOUDTRAIL_API Aws::Endpoint::EndpointProviderBase<
    CloudTrail::Endpoint::CloudTrailClientConfiguration, CloudTrail::Endpoint::CloudTrailBuiltInParameters,
    CloudTrail::Endpoint::CloudTrailClientContextParameters>;

AWS_CLOUDTRAIL_EXTERN template class AWS_CLOUDTRAIL_API Aws::Endpoint::BDDEndpointProvider<
    CloudTrail::Endpoint::CloudTrailClientConfiguration, CloudTrail::Endpoint::CloudTrailBuiltInParameters,
    CloudTrail::Endpoint::CloudTrailClientContextParameters>;
}  // namespace Endpoint

namespace CloudTrail {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDTRAIL_API CloudTrailEndpointProvider : public CloudTrailDefaultEpProviderBase {
 public:
  using CloudTrailResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CloudTrailEndpointProvider();

  ~CloudTrailEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CloudTrail
}  // namespace Aws
