/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/discovery/ApplicationDiscoveryServiceClientConfiguration.h>
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>

namespace Aws {
namespace ApplicationDiscoveryService {
namespace Endpoint {
using ApplicationDiscoveryServiceClientConfiguration = Aws::ApplicationDiscoveryService::ApplicationDiscoveryServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ApplicationDiscoveryServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APPLICATIONDISCOVERYSERVICE_API ApplicationDiscoveryServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ApplicationDiscoveryServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ApplicationDiscoveryServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ApplicationDiscoveryServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ApplicationDiscoveryServiceClientConfiguration& config);
};

/**
 * The type for the ApplicationDiscoveryService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ApplicationDiscoveryServiceEndpointProviderBase =
    EndpointProviderBase<ApplicationDiscoveryServiceClientConfiguration, ApplicationDiscoveryServiceBuiltInParameters,
                         ApplicationDiscoveryServiceClientContextParameters>;

using ApplicationDiscoveryServiceDefaultEpProviderBase =
    BDDEndpointProvider<ApplicationDiscoveryServiceClientConfiguration, ApplicationDiscoveryServiceBuiltInParameters,
                        ApplicationDiscoveryServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace ApplicationDiscoveryService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APPLICATIONDISCOVERYSERVICE_EXTERN template class AWS_APPLICATIONDISCOVERYSERVICE_API
    Aws::Endpoint::EndpointProviderBase<ApplicationDiscoveryService::Endpoint::ApplicationDiscoveryServiceClientConfiguration,
                                        ApplicationDiscoveryService::Endpoint::ApplicationDiscoveryServiceBuiltInParameters,
                                        ApplicationDiscoveryService::Endpoint::ApplicationDiscoveryServiceClientContextParameters>;

AWS_APPLICATIONDISCOVERYSERVICE_EXTERN template class AWS_APPLICATIONDISCOVERYSERVICE_API
    Aws::Endpoint::BDDEndpointProvider<ApplicationDiscoveryService::Endpoint::ApplicationDiscoveryServiceClientConfiguration,
                                       ApplicationDiscoveryService::Endpoint::ApplicationDiscoveryServiceBuiltInParameters,
                                       ApplicationDiscoveryService::Endpoint::ApplicationDiscoveryServiceClientContextParameters>;
}  // namespace Endpoint

namespace ApplicationDiscoveryService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APPLICATIONDISCOVERYSERVICE_API ApplicationDiscoveryServiceEndpointProvider
    : public ApplicationDiscoveryServiceDefaultEpProviderBase {
 public:
  using ApplicationDiscoveryServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ApplicationDiscoveryServiceEndpointProvider();

  ~ApplicationDiscoveryServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ApplicationDiscoveryService
}  // namespace Aws
