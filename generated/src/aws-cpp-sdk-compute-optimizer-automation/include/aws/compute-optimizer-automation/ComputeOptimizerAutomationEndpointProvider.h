/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationClientConfiguration.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Endpoint {
using ComputeOptimizerAutomationClientConfiguration = Aws::ComputeOptimizerAutomation::ComputeOptimizerAutomationClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ComputeOptimizerAutomationClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_COMPUTEOPTIMIZERAUTOMATION_API ComputeOptimizerAutomationBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ComputeOptimizerAutomationBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ComputeOptimizerAutomationClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ComputeOptimizerAutomationClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ComputeOptimizerAutomationClientConfiguration& config);
};

/**
 * The type for the ComputeOptimizerAutomation Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ComputeOptimizerAutomationEndpointProviderBase =
    EndpointProviderBase<ComputeOptimizerAutomationClientConfiguration, ComputeOptimizerAutomationBuiltInParameters,
                         ComputeOptimizerAutomationClientContextParameters>;

using ComputeOptimizerAutomationDefaultEpProviderBase =
    BDDEndpointProvider<ComputeOptimizerAutomationClientConfiguration, ComputeOptimizerAutomationBuiltInParameters,
                        ComputeOptimizerAutomationClientContextParameters>;

}  // namespace Endpoint
}  // namespace ComputeOptimizerAutomation

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_COMPUTEOPTIMIZERAUTOMATION_EXTERN template class AWS_COMPUTEOPTIMIZERAUTOMATION_API
    Aws::Endpoint::EndpointProviderBase<ComputeOptimizerAutomation::Endpoint::ComputeOptimizerAutomationClientConfiguration,
                                        ComputeOptimizerAutomation::Endpoint::ComputeOptimizerAutomationBuiltInParameters,
                                        ComputeOptimizerAutomation::Endpoint::ComputeOptimizerAutomationClientContextParameters>;

AWS_COMPUTEOPTIMIZERAUTOMATION_EXTERN template class AWS_COMPUTEOPTIMIZERAUTOMATION_API
    Aws::Endpoint::BDDEndpointProvider<ComputeOptimizerAutomation::Endpoint::ComputeOptimizerAutomationClientConfiguration,
                                       ComputeOptimizerAutomation::Endpoint::ComputeOptimizerAutomationBuiltInParameters,
                                       ComputeOptimizerAutomation::Endpoint::ComputeOptimizerAutomationClientContextParameters>;
}  // namespace Endpoint

namespace ComputeOptimizerAutomation {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_COMPUTEOPTIMIZERAUTOMATION_API ComputeOptimizerAutomationEndpointProvider
    : public ComputeOptimizerAutomationDefaultEpProviderBase {
 public:
  using ComputeOptimizerAutomationResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ComputeOptimizerAutomationEndpointProvider();

  ~ComputeOptimizerAutomationEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
