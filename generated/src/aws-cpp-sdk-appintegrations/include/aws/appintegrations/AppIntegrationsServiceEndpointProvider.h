/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsServiceClientConfiguration.h>
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AppIntegrationsService {
namespace Endpoint {
using AppIntegrationsServiceClientConfiguration = Aws::AppIntegrationsService::AppIntegrationsServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AppIntegrationsServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APPINTEGRATIONSSERVICE_API AppIntegrationsServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AppIntegrationsServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AppIntegrationsServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AppIntegrationsServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AppIntegrationsServiceClientConfiguration& config);
};

/**
 * The type for the AppIntegrationsService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppIntegrationsServiceEndpointProviderBase =
    EndpointProviderBase<AppIntegrationsServiceClientConfiguration, AppIntegrationsServiceBuiltInParameters,
                         AppIntegrationsServiceClientContextParameters>;

using AppIntegrationsServiceDefaultEpProviderBase =
    BDDEndpointProvider<AppIntegrationsServiceClientConfiguration, AppIntegrationsServiceBuiltInParameters,
                        AppIntegrationsServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace AppIntegrationsService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APPINTEGRATIONSSERVICE_EXTERN template class AWS_APPINTEGRATIONSSERVICE_API
    Aws::Endpoint::EndpointProviderBase<AppIntegrationsService::Endpoint::AppIntegrationsServiceClientConfiguration,
                                        AppIntegrationsService::Endpoint::AppIntegrationsServiceBuiltInParameters,
                                        AppIntegrationsService::Endpoint::AppIntegrationsServiceClientContextParameters>;

AWS_APPINTEGRATIONSSERVICE_EXTERN template class AWS_APPINTEGRATIONSSERVICE_API
    Aws::Endpoint::BDDEndpointProvider<AppIntegrationsService::Endpoint::AppIntegrationsServiceClientConfiguration,
                                       AppIntegrationsService::Endpoint::AppIntegrationsServiceBuiltInParameters,
                                       AppIntegrationsService::Endpoint::AppIntegrationsServiceClientContextParameters>;
}  // namespace Endpoint

namespace AppIntegrationsService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APPINTEGRATIONSSERVICE_API AppIntegrationsServiceEndpointProvider : public AppIntegrationsServiceDefaultEpProviderBase {
 public:
  using AppIntegrationsServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AppIntegrationsServiceEndpointProvider();

  ~AppIntegrationsServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AppIntegrationsService
}  // namespace Aws
