/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/ForecastServiceClientConfiguration.h>
#include <aws/forecast/ForecastService_EXPORTS.h>

namespace Aws {
namespace ForecastService {
namespace Endpoint {
using ForecastServiceClientConfiguration = Aws::ForecastService::ForecastServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ForecastServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_FORECASTSERVICE_API ForecastServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ForecastServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ForecastServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ForecastServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ForecastServiceClientConfiguration& config);
};

/**
 * The type for the ForecastService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ForecastServiceEndpointProviderBase =
    EndpointProviderBase<ForecastServiceClientConfiguration, ForecastServiceBuiltInParameters, ForecastServiceClientContextParameters>;

using ForecastServiceDefaultEpProviderBase =
    BDDEndpointProvider<ForecastServiceClientConfiguration, ForecastServiceBuiltInParameters, ForecastServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace ForecastService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_FORECASTSERVICE_EXTERN template class AWS_FORECASTSERVICE_API Aws::Endpoint::EndpointProviderBase<
    ForecastService::Endpoint::ForecastServiceClientConfiguration, ForecastService::Endpoint::ForecastServiceBuiltInParameters,
    ForecastService::Endpoint::ForecastServiceClientContextParameters>;

AWS_FORECASTSERVICE_EXTERN template class AWS_FORECASTSERVICE_API Aws::Endpoint::BDDEndpointProvider<
    ForecastService::Endpoint::ForecastServiceClientConfiguration, ForecastService::Endpoint::ForecastServiceBuiltInParameters,
    ForecastService::Endpoint::ForecastServiceClientContextParameters>;
}  // namespace Endpoint

namespace ForecastService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_FORECASTSERVICE_API ForecastServiceEndpointProvider : public ForecastServiceDefaultEpProviderBase {
 public:
  using ForecastServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ForecastServiceEndpointProvider();

  ~ForecastServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ForecastService
}  // namespace Aws
