/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cost-optimization-hub/CostOptimizationHubClientConfiguration.h>
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>

namespace Aws {
namespace CostOptimizationHub {
namespace Endpoint {
using CostOptimizationHubClientConfiguration = Aws::CostOptimizationHub::CostOptimizationHubClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CostOptimizationHubClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_COSTOPTIMIZATIONHUB_API CostOptimizationHubBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CostOptimizationHubBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CostOptimizationHubClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CostOptimizationHubClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CostOptimizationHubClientConfiguration& config);
};

/**
 * The type for the CostOptimizationHub Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CostOptimizationHubEndpointProviderBase =
    EndpointProviderBase<CostOptimizationHubClientConfiguration, CostOptimizationHubBuiltInParameters,
                         CostOptimizationHubClientContextParameters>;

using CostOptimizationHubDefaultEpProviderBase =
    BDDEndpointProvider<CostOptimizationHubClientConfiguration, CostOptimizationHubBuiltInParameters,
                        CostOptimizationHubClientContextParameters>;

}  // namespace Endpoint
}  // namespace CostOptimizationHub

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_COSTOPTIMIZATIONHUB_EXTERN template class AWS_COSTOPTIMIZATIONHUB_API
    Aws::Endpoint::EndpointProviderBase<CostOptimizationHub::Endpoint::CostOptimizationHubClientConfiguration,
                                        CostOptimizationHub::Endpoint::CostOptimizationHubBuiltInParameters,
                                        CostOptimizationHub::Endpoint::CostOptimizationHubClientContextParameters>;

AWS_COSTOPTIMIZATIONHUB_EXTERN template class AWS_COSTOPTIMIZATIONHUB_API
    Aws::Endpoint::BDDEndpointProvider<CostOptimizationHub::Endpoint::CostOptimizationHubClientConfiguration,
                                       CostOptimizationHub::Endpoint::CostOptimizationHubBuiltInParameters,
                                       CostOptimizationHub::Endpoint::CostOptimizationHubClientContextParameters>;
}  // namespace Endpoint

namespace CostOptimizationHub {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_COSTOPTIMIZATIONHUB_API CostOptimizationHubEndpointProvider : public CostOptimizationHubDefaultEpProviderBase {
 public:
  using CostOptimizationHubResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CostOptimizationHubEndpointProvider();

  ~CostOptimizationHubEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CostOptimizationHub
}  // namespace Aws
