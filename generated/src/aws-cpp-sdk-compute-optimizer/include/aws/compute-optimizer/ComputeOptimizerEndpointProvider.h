/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizerClientConfiguration.h>
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ComputeOptimizer {
namespace Endpoint {
using ComputeOptimizerClientConfiguration = Aws::ComputeOptimizer::ComputeOptimizerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ComputeOptimizerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_COMPUTEOPTIMIZER_API ComputeOptimizerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ComputeOptimizerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ComputeOptimizerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ComputeOptimizerClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ComputeOptimizerClientConfiguration& config);
};

/**
 * The type for the ComputeOptimizer Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ComputeOptimizerEndpointProviderBase =
    EndpointProviderBase<ComputeOptimizerClientConfiguration, ComputeOptimizerBuiltInParameters, ComputeOptimizerClientContextParameters>;

using ComputeOptimizerDefaultEpProviderBase =
    BDDEndpointProvider<ComputeOptimizerClientConfiguration, ComputeOptimizerBuiltInParameters, ComputeOptimizerClientContextParameters>;

}  // namespace Endpoint
}  // namespace ComputeOptimizer

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_COMPUTEOPTIMIZER_EXTERN template class AWS_COMPUTEOPTIMIZER_API Aws::Endpoint::EndpointProviderBase<
    ComputeOptimizer::Endpoint::ComputeOptimizerClientConfiguration, ComputeOptimizer::Endpoint::ComputeOptimizerBuiltInParameters,
    ComputeOptimizer::Endpoint::ComputeOptimizerClientContextParameters>;

AWS_COMPUTEOPTIMIZER_EXTERN template class AWS_COMPUTEOPTIMIZER_API Aws::Endpoint::BDDEndpointProvider<
    ComputeOptimizer::Endpoint::ComputeOptimizerClientConfiguration, ComputeOptimizer::Endpoint::ComputeOptimizerBuiltInParameters,
    ComputeOptimizer::Endpoint::ComputeOptimizerClientContextParameters>;
}  // namespace Endpoint

namespace ComputeOptimizer {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_COMPUTEOPTIMIZER_API ComputeOptimizerEndpointProvider : public ComputeOptimizerDefaultEpProviderBase {
 public:
  using ComputeOptimizerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ComputeOptimizerEndpointProvider();

  ~ComputeOptimizerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ComputeOptimizer
}  // namespace Aws
