/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScalingClientConfiguration.h>
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ApplicationAutoScaling {
namespace Endpoint {
using ApplicationAutoScalingClientConfiguration = Aws::ApplicationAutoScaling::ApplicationAutoScalingClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ApplicationAutoScalingClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APPLICATIONAUTOSCALING_API ApplicationAutoScalingBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ApplicationAutoScalingBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ApplicationAutoScalingClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ApplicationAutoScalingClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ApplicationAutoScalingClientConfiguration& config);
};

/**
 * The type for the ApplicationAutoScaling Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ApplicationAutoScalingEndpointProviderBase =
    EndpointProviderBase<ApplicationAutoScalingClientConfiguration, ApplicationAutoScalingBuiltInParameters,
                         ApplicationAutoScalingClientContextParameters>;

using ApplicationAutoScalingDefaultEpProviderBase =
    BDDEndpointProvider<ApplicationAutoScalingClientConfiguration, ApplicationAutoScalingBuiltInParameters,
                        ApplicationAutoScalingClientContextParameters>;

}  // namespace Endpoint
}  // namespace ApplicationAutoScaling

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APPLICATIONAUTOSCALING_EXTERN template class AWS_APPLICATIONAUTOSCALING_API
    Aws::Endpoint::EndpointProviderBase<ApplicationAutoScaling::Endpoint::ApplicationAutoScalingClientConfiguration,
                                        ApplicationAutoScaling::Endpoint::ApplicationAutoScalingBuiltInParameters,
                                        ApplicationAutoScaling::Endpoint::ApplicationAutoScalingClientContextParameters>;

AWS_APPLICATIONAUTOSCALING_EXTERN template class AWS_APPLICATIONAUTOSCALING_API
    Aws::Endpoint::BDDEndpointProvider<ApplicationAutoScaling::Endpoint::ApplicationAutoScalingClientConfiguration,
                                       ApplicationAutoScaling::Endpoint::ApplicationAutoScalingBuiltInParameters,
                                       ApplicationAutoScaling::Endpoint::ApplicationAutoScalingClientContextParameters>;
}  // namespace Endpoint

namespace ApplicationAutoScaling {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APPLICATIONAUTOSCALING_API ApplicationAutoScalingEndpointProvider : public ApplicationAutoScalingDefaultEpProviderBase {
 public:
  using ApplicationAutoScalingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ApplicationAutoScalingEndpointProvider();

  ~ApplicationAutoScalingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ApplicationAutoScaling
}  // namespace Aws
