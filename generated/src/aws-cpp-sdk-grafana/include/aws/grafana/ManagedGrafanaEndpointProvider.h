/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/ManagedGrafanaClientConfiguration.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>

namespace Aws {
namespace ManagedGrafana {
namespace Endpoint {
using ManagedGrafanaClientConfiguration = Aws::ManagedGrafana::ManagedGrafanaClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ManagedGrafanaClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MANAGEDGRAFANA_API ManagedGrafanaBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ManagedGrafanaBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ManagedGrafanaClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ManagedGrafanaClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ManagedGrafanaClientConfiguration& config);
};

/**
 * The type for the ManagedGrafana Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ManagedGrafanaEndpointProviderBase =
    EndpointProviderBase<ManagedGrafanaClientConfiguration, ManagedGrafanaBuiltInParameters, ManagedGrafanaClientContextParameters>;

using ManagedGrafanaDefaultEpProviderBase =
    BDDEndpointProvider<ManagedGrafanaClientConfiguration, ManagedGrafanaBuiltInParameters, ManagedGrafanaClientContextParameters>;

}  // namespace Endpoint
}  // namespace ManagedGrafana

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MANAGEDGRAFANA_EXTERN template class AWS_MANAGEDGRAFANA_API Aws::Endpoint::EndpointProviderBase<
    ManagedGrafana::Endpoint::ManagedGrafanaClientConfiguration, ManagedGrafana::Endpoint::ManagedGrafanaBuiltInParameters,
    ManagedGrafana::Endpoint::ManagedGrafanaClientContextParameters>;

AWS_MANAGEDGRAFANA_EXTERN template class AWS_MANAGEDGRAFANA_API Aws::Endpoint::BDDEndpointProvider<
    ManagedGrafana::Endpoint::ManagedGrafanaClientConfiguration, ManagedGrafana::Endpoint::ManagedGrafanaBuiltInParameters,
    ManagedGrafana::Endpoint::ManagedGrafanaClientContextParameters>;
}  // namespace Endpoint

namespace ManagedGrafana {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MANAGEDGRAFANA_API ManagedGrafanaEndpointProvider : public ManagedGrafanaDefaultEpProviderBase {
 public:
  using ManagedGrafanaResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ManagedGrafanaEndpointProvider();

  ~ManagedGrafanaEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ManagedGrafana
}  // namespace Aws
