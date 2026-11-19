/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-maps/GeoMapsClientConfiguration.h>
#include <aws/geo-maps/GeoMaps_EXPORTS.h>

namespace Aws {
namespace GeoMaps {
namespace Endpoint {
using GeoMapsClientConfiguration = Aws::GeoMaps::GeoMapsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using GeoMapsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_GEOMAPS_API GeoMapsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~GeoMapsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const GeoMapsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const GeoMapsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const GeoMapsClientConfiguration& config);
};

/**
 * The type for the GeoMaps Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GeoMapsEndpointProviderBase =
    EndpointProviderBase<GeoMapsClientConfiguration, GeoMapsBuiltInParameters, GeoMapsClientContextParameters>;

using GeoMapsDefaultEpProviderBase =
    BDDEndpointProvider<GeoMapsClientConfiguration, GeoMapsBuiltInParameters, GeoMapsClientContextParameters>;

}  // namespace Endpoint
}  // namespace GeoMaps

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_GEOMAPS_EXTERN template class AWS_GEOMAPS_API
    Aws::Endpoint::EndpointProviderBase<GeoMaps::Endpoint::GeoMapsClientConfiguration, GeoMaps::Endpoint::GeoMapsBuiltInParameters,
                                        GeoMaps::Endpoint::GeoMapsClientContextParameters>;

AWS_GEOMAPS_EXTERN template class AWS_GEOMAPS_API
    Aws::Endpoint::BDDEndpointProvider<GeoMaps::Endpoint::GeoMapsClientConfiguration, GeoMaps::Endpoint::GeoMapsBuiltInParameters,
                                       GeoMaps::Endpoint::GeoMapsClientContextParameters>;
}  // namespace Endpoint

namespace GeoMaps {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_GEOMAPS_API GeoMapsEndpointProvider : public GeoMapsDefaultEpProviderBase {
 public:
  using GeoMapsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  GeoMapsEndpointProvider();

  ~GeoMapsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace GeoMaps
}  // namespace Aws
