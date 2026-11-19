/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScalingClientConfiguration.h>
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AutoScaling {
namespace Endpoint {
using AutoScalingClientConfiguration = Aws::AutoScaling::AutoScalingClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AutoScalingClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_AUTOSCALING_API AutoScalingBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AutoScalingBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AutoScalingClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AutoScalingClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AutoScalingClientConfiguration& config);
};

/**
 * The type for the AutoScaling Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AutoScalingEndpointProviderBase =
    EndpointProviderBase<AutoScalingClientConfiguration, AutoScalingBuiltInParameters, AutoScalingClientContextParameters>;

using AutoScalingDefaultEpProviderBase =
    BDDEndpointProvider<AutoScalingClientConfiguration, AutoScalingBuiltInParameters, AutoScalingClientContextParameters>;

}  // namespace Endpoint
}  // namespace AutoScaling

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_AUTOSCALING_EXTERN template class AWS_AUTOSCALING_API Aws::Endpoint::EndpointProviderBase<
    AutoScaling::Endpoint::AutoScalingClientConfiguration, AutoScaling::Endpoint::AutoScalingBuiltInParameters,
    AutoScaling::Endpoint::AutoScalingClientContextParameters>;

AWS_AUTOSCALING_EXTERN template class AWS_AUTOSCALING_API Aws::Endpoint::BDDEndpointProvider<
    AutoScaling::Endpoint::AutoScalingClientConfiguration, AutoScaling::Endpoint::AutoScalingBuiltInParameters,
    AutoScaling::Endpoint::AutoScalingClientContextParameters>;
}  // namespace Endpoint

namespace AutoScaling {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_AUTOSCALING_API AutoScalingEndpointProvider : public AutoScalingDefaultEpProviderBase {
 public:
  using AutoScalingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AutoScalingEndpointProvider();

  ~AutoScalingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AutoScaling
}  // namespace Aws
