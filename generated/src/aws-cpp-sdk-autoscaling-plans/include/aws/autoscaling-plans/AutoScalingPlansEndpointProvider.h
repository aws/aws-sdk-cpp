/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlansClientConfiguration.h>
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AutoScalingPlans {
namespace Endpoint {
using AutoScalingPlansClientConfiguration = Aws::AutoScalingPlans::AutoScalingPlansClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AutoScalingPlansClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_AUTOSCALINGPLANS_API AutoScalingPlansBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AutoScalingPlansBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AutoScalingPlansClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AutoScalingPlansClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AutoScalingPlansClientConfiguration& config);
};

/**
 * The type for the AutoScalingPlans Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AutoScalingPlansEndpointProviderBase =
    EndpointProviderBase<AutoScalingPlansClientConfiguration, AutoScalingPlansBuiltInParameters, AutoScalingPlansClientContextParameters>;

using AutoScalingPlansDefaultEpProviderBase =
    BDDEndpointProvider<AutoScalingPlansClientConfiguration, AutoScalingPlansBuiltInParameters, AutoScalingPlansClientContextParameters>;

}  // namespace Endpoint
}  // namespace AutoScalingPlans

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_AUTOSCALINGPLANS_EXTERN template class AWS_AUTOSCALINGPLANS_API Aws::Endpoint::EndpointProviderBase<
    AutoScalingPlans::Endpoint::AutoScalingPlansClientConfiguration, AutoScalingPlans::Endpoint::AutoScalingPlansBuiltInParameters,
    AutoScalingPlans::Endpoint::AutoScalingPlansClientContextParameters>;

AWS_AUTOSCALINGPLANS_EXTERN template class AWS_AUTOSCALINGPLANS_API Aws::Endpoint::BDDEndpointProvider<
    AutoScalingPlans::Endpoint::AutoScalingPlansClientConfiguration, AutoScalingPlans::Endpoint::AutoScalingPlansBuiltInParameters,
    AutoScalingPlans::Endpoint::AutoScalingPlansClientContextParameters>;
}  // namespace Endpoint

namespace AutoScalingPlans {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_AUTOSCALINGPLANS_API AutoScalingPlansEndpointProvider : public AutoScalingPlansDefaultEpProviderBase {
 public:
  using AutoScalingPlansResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AutoScalingPlansEndpointProvider();

  ~AutoScalingPlansEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AutoScalingPlans
}  // namespace Aws
