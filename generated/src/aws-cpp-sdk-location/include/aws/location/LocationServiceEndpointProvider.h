/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/LocationServiceClientConfiguration.h>
#include <aws/location/LocationService_EXPORTS.h>

namespace Aws {
namespace LocationService {
namespace Endpoint {
using LocationServiceClientConfiguration = Aws::LocationService::LocationServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LocationServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_LOCATIONSERVICE_API LocationServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~LocationServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const LocationServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const LocationServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const LocationServiceClientConfiguration& config);
};

/**
 * The type for the LocationService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LocationServiceEndpointProviderBase =
    EndpointProviderBase<LocationServiceClientConfiguration, LocationServiceBuiltInParameters, LocationServiceClientContextParameters>;

using LocationServiceDefaultEpProviderBase =
    BDDEndpointProvider<LocationServiceClientConfiguration, LocationServiceBuiltInParameters, LocationServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace LocationService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_LOCATIONSERVICE_EXTERN template class AWS_LOCATIONSERVICE_API Aws::Endpoint::EndpointProviderBase<
    LocationService::Endpoint::LocationServiceClientConfiguration, LocationService::Endpoint::LocationServiceBuiltInParameters,
    LocationService::Endpoint::LocationServiceClientContextParameters>;

AWS_LOCATIONSERVICE_EXTERN template class AWS_LOCATIONSERVICE_API Aws::Endpoint::BDDEndpointProvider<
    LocationService::Endpoint::LocationServiceClientConfiguration, LocationService::Endpoint::LocationServiceBuiltInParameters,
    LocationService::Endpoint::LocationServiceClientContextParameters>;
}  // namespace Endpoint

namespace LocationService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_LOCATIONSERVICE_API LocationServiceEndpointProvider : public LocationServiceDefaultEpProviderBase {
 public:
  using LocationServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LocationServiceEndpointProvider();

  ~LocationServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace LocationService
}  // namespace Aws
