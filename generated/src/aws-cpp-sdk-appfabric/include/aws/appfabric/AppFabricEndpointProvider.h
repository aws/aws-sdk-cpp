/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabricClientConfiguration.h>
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AppFabric {
namespace Endpoint {
using AppFabricClientConfiguration = Aws::AppFabric::AppFabricClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AppFabricClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APPFABRIC_API AppFabricBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AppFabricBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AppFabricClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AppFabricClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AppFabricClientConfiguration& config);
};

/**
 * The type for the AppFabric Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppFabricEndpointProviderBase =
    EndpointProviderBase<AppFabricClientConfiguration, AppFabricBuiltInParameters, AppFabricClientContextParameters>;

using AppFabricDefaultEpProviderBase =
    BDDEndpointProvider<AppFabricClientConfiguration, AppFabricBuiltInParameters, AppFabricClientContextParameters>;

}  // namespace Endpoint
}  // namespace AppFabric

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APPFABRIC_EXTERN template class AWS_APPFABRIC_API
    Aws::Endpoint::EndpointProviderBase<AppFabric::Endpoint::AppFabricClientConfiguration, AppFabric::Endpoint::AppFabricBuiltInParameters,
                                        AppFabric::Endpoint::AppFabricClientContextParameters>;

AWS_APPFABRIC_EXTERN template class AWS_APPFABRIC_API
    Aws::Endpoint::BDDEndpointProvider<AppFabric::Endpoint::AppFabricClientConfiguration, AppFabric::Endpoint::AppFabricBuiltInParameters,
                                       AppFabric::Endpoint::AppFabricClientContextParameters>;
}  // namespace Endpoint

namespace AppFabric {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APPFABRIC_API AppFabricEndpointProvider : public AppFabricDefaultEpProviderBase {
 public:
  using AppFabricResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AppFabricEndpointProvider();

  ~AppFabricEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AppFabric
}  // namespace Aws
