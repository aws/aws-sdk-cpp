/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecastquery/ForecastQueryServiceClientConfiguration.h>
#include <aws/forecastquery/ForecastQueryService_EXPORTS.h>

namespace Aws {
namespace ForecastQueryService {
namespace Endpoint {
using ForecastQueryServiceClientConfiguration = Aws::ForecastQueryService::ForecastQueryServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ForecastQueryServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_FORECASTQUERYSERVICE_API ForecastQueryServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ForecastQueryServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ForecastQueryServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ForecastQueryServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ForecastQueryServiceClientConfiguration& config);
};

/**
 * The type for the ForecastQueryService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ForecastQueryServiceEndpointProviderBase =
    EndpointProviderBase<ForecastQueryServiceClientConfiguration, ForecastQueryServiceBuiltInParameters,
                         ForecastQueryServiceClientContextParameters>;

using ForecastQueryServiceDefaultEpProviderBase =
    BDDEndpointProvider<ForecastQueryServiceClientConfiguration, ForecastQueryServiceBuiltInParameters,
                        ForecastQueryServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace ForecastQueryService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_FORECASTQUERYSERVICE_EXTERN template class AWS_FORECASTQUERYSERVICE_API
    Aws::Endpoint::EndpointProviderBase<ForecastQueryService::Endpoint::ForecastQueryServiceClientConfiguration,
                                        ForecastQueryService::Endpoint::ForecastQueryServiceBuiltInParameters,
                                        ForecastQueryService::Endpoint::ForecastQueryServiceClientContextParameters>;

AWS_FORECASTQUERYSERVICE_EXTERN template class AWS_FORECASTQUERYSERVICE_API
    Aws::Endpoint::BDDEndpointProvider<ForecastQueryService::Endpoint::ForecastQueryServiceClientConfiguration,
                                       ForecastQueryService::Endpoint::ForecastQueryServiceBuiltInParameters,
                                       ForecastQueryService::Endpoint::ForecastQueryServiceClientContextParameters>;
}  // namespace Endpoint

namespace ForecastQueryService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_FORECASTQUERYSERVICE_API ForecastQueryServiceEndpointProvider : public ForecastQueryServiceDefaultEpProviderBase {
 public:
  using ForecastQueryServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ForecastQueryServiceEndpointProvider();

  ~ForecastQueryServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ForecastQueryService
}  // namespace Aws
