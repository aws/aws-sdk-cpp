/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/GeoRoutesClientConfiguration.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

namespace Aws {
namespace GeoRoutes {
namespace Endpoint {
using GeoRoutesClientConfiguration = Aws::GeoRoutes::GeoRoutesClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using GeoRoutesClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_GEOROUTES_API GeoRoutesBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~GeoRoutesBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const GeoRoutesClientConfiguration& config);
  virtual void SetFromClientConfiguration(const GeoRoutesClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const GeoRoutesClientConfiguration& config);
};

/**
 * The type for the GeoRoutes Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GeoRoutesEndpointProviderBase =
    EndpointProviderBase<GeoRoutesClientConfiguration, GeoRoutesBuiltInParameters, GeoRoutesClientContextParameters>;

using GeoRoutesDefaultEpProviderBase =
    BDDEndpointProvider<GeoRoutesClientConfiguration, GeoRoutesBuiltInParameters, GeoRoutesClientContextParameters>;

}  // namespace Endpoint
}  // namespace GeoRoutes

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_GEOROUTES_EXTERN template class AWS_GEOROUTES_API
    Aws::Endpoint::EndpointProviderBase<GeoRoutes::Endpoint::GeoRoutesClientConfiguration, GeoRoutes::Endpoint::GeoRoutesBuiltInParameters,
                                        GeoRoutes::Endpoint::GeoRoutesClientContextParameters>;

AWS_GEOROUTES_EXTERN template class AWS_GEOROUTES_API
    Aws::Endpoint::BDDEndpointProvider<GeoRoutes::Endpoint::GeoRoutesClientConfiguration, GeoRoutes::Endpoint::GeoRoutesBuiltInParameters,
                                       GeoRoutes::Endpoint::GeoRoutesClientContextParameters>;
}  // namespace Endpoint

namespace GeoRoutes {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_GEOROUTES_API GeoRoutesEndpointProvider : public GeoRoutesDefaultEpProviderBase {
 public:
  using GeoRoutesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  GeoRoutesEndpointProvider();

  ~GeoRoutesEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace GeoRoutes
}  // namespace Aws
