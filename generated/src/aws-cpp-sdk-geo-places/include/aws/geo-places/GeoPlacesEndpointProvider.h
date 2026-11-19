/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/GeoPlacesClientConfiguration.h>
#include <aws/geo-places/GeoPlaces_EXPORTS.h>

namespace Aws {
namespace GeoPlaces {
namespace Endpoint {
using GeoPlacesClientConfiguration = Aws::GeoPlaces::GeoPlacesClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using GeoPlacesClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_GEOPLACES_API GeoPlacesBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~GeoPlacesBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const GeoPlacesClientConfiguration& config);
  virtual void SetFromClientConfiguration(const GeoPlacesClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const GeoPlacesClientConfiguration& config);
};

/**
 * The type for the GeoPlaces Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GeoPlacesEndpointProviderBase =
    EndpointProviderBase<GeoPlacesClientConfiguration, GeoPlacesBuiltInParameters, GeoPlacesClientContextParameters>;

using GeoPlacesDefaultEpProviderBase =
    BDDEndpointProvider<GeoPlacesClientConfiguration, GeoPlacesBuiltInParameters, GeoPlacesClientContextParameters>;

}  // namespace Endpoint
}  // namespace GeoPlaces

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_GEOPLACES_EXTERN template class AWS_GEOPLACES_API
    Aws::Endpoint::EndpointProviderBase<GeoPlaces::Endpoint::GeoPlacesClientConfiguration, GeoPlaces::Endpoint::GeoPlacesBuiltInParameters,
                                        GeoPlaces::Endpoint::GeoPlacesClientContextParameters>;

AWS_GEOPLACES_EXTERN template class AWS_GEOPLACES_API
    Aws::Endpoint::BDDEndpointProvider<GeoPlaces::Endpoint::GeoPlacesClientConfiguration, GeoPlaces::Endpoint::GeoPlacesBuiltInParameters,
                                       GeoPlaces::Endpoint::GeoPlacesClientContextParameters>;
}  // namespace Endpoint

namespace GeoPlaces {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_GEOPLACES_API GeoPlacesEndpointProvider : public GeoPlacesDefaultEpProviderBase {
 public:
  using GeoPlacesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  GeoPlacesEndpointProvider();

  ~GeoPlacesEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace GeoPlaces
}  // namespace Aws
