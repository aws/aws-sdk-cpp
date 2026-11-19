/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboardsClientConfiguration.h>
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace BCMDashboards {
namespace Endpoint {
using BCMDashboardsClientConfiguration = Aws::BCMDashboards::BCMDashboardsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BCMDashboardsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BCMDASHBOARDS_API BCMDashboardsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BCMDashboardsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BCMDashboardsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const BCMDashboardsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const BCMDashboardsClientConfiguration& config);
};

/**
 * The type for the BCMDashboards Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BCMDashboardsEndpointProviderBase =
    EndpointProviderBase<BCMDashboardsClientConfiguration, BCMDashboardsBuiltInParameters, BCMDashboardsClientContextParameters>;

using BCMDashboardsDefaultEpProviderBase =
    BDDEndpointProvider<BCMDashboardsClientConfiguration, BCMDashboardsBuiltInParameters, BCMDashboardsClientContextParameters>;

}  // namespace Endpoint
}  // namespace BCMDashboards

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BCMDASHBOARDS_EXTERN template class AWS_BCMDASHBOARDS_API Aws::Endpoint::EndpointProviderBase<
    BCMDashboards::Endpoint::BCMDashboardsClientConfiguration, BCMDashboards::Endpoint::BCMDashboardsBuiltInParameters,
    BCMDashboards::Endpoint::BCMDashboardsClientContextParameters>;

AWS_BCMDASHBOARDS_EXTERN template class AWS_BCMDASHBOARDS_API Aws::Endpoint::BDDEndpointProvider<
    BCMDashboards::Endpoint::BCMDashboardsClientConfiguration, BCMDashboards::Endpoint::BCMDashboardsBuiltInParameters,
    BCMDashboards::Endpoint::BCMDashboardsClientContextParameters>;
}  // namespace Endpoint

namespace BCMDashboards {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BCMDASHBOARDS_API BCMDashboardsEndpointProvider : public BCMDashboardsDefaultEpProviderBase {
 public:
  using BCMDashboardsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BCMDashboardsEndpointProvider();

  ~BCMDashboardsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace BCMDashboards
}  // namespace Aws
