/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfilerClientConfiguration.h>
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ApplicationCostProfiler {
namespace Endpoint {
using ApplicationCostProfilerClientConfiguration = Aws::ApplicationCostProfiler::ApplicationCostProfilerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ApplicationCostProfilerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APPLICATIONCOSTPROFILER_API ApplicationCostProfilerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ApplicationCostProfilerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ApplicationCostProfilerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ApplicationCostProfilerClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ApplicationCostProfilerClientConfiguration& config);
};

/**
 * The type for the ApplicationCostProfiler Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ApplicationCostProfilerEndpointProviderBase =
    EndpointProviderBase<ApplicationCostProfilerClientConfiguration, ApplicationCostProfilerBuiltInParameters,
                         ApplicationCostProfilerClientContextParameters>;

using ApplicationCostProfilerDefaultEpProviderBase =
    BDDEndpointProvider<ApplicationCostProfilerClientConfiguration, ApplicationCostProfilerBuiltInParameters,
                        ApplicationCostProfilerClientContextParameters>;

}  // namespace Endpoint
}  // namespace ApplicationCostProfiler

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APPLICATIONCOSTPROFILER_EXTERN template class AWS_APPLICATIONCOSTPROFILER_API
    Aws::Endpoint::EndpointProviderBase<ApplicationCostProfiler::Endpoint::ApplicationCostProfilerClientConfiguration,
                                        ApplicationCostProfiler::Endpoint::ApplicationCostProfilerBuiltInParameters,
                                        ApplicationCostProfiler::Endpoint::ApplicationCostProfilerClientContextParameters>;

AWS_APPLICATIONCOSTPROFILER_EXTERN template class AWS_APPLICATIONCOSTPROFILER_API
    Aws::Endpoint::BDDEndpointProvider<ApplicationCostProfiler::Endpoint::ApplicationCostProfilerClientConfiguration,
                                       ApplicationCostProfiler::Endpoint::ApplicationCostProfilerBuiltInParameters,
                                       ApplicationCostProfiler::Endpoint::ApplicationCostProfilerClientContextParameters>;
}  // namespace Endpoint

namespace ApplicationCostProfiler {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APPLICATIONCOSTPROFILER_API ApplicationCostProfilerEndpointProvider : public ApplicationCostProfilerDefaultEpProviderBase {
 public:
  using ApplicationCostProfilerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ApplicationCostProfilerEndpointProvider();

  ~ApplicationCostProfilerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ApplicationCostProfiler
}  // namespace Aws
