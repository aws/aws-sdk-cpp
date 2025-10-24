﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/GeoRoutesEndpointRules.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

namespace Aws {
namespace GeoRoutes {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using GeoRoutesClientContextParameters = Aws::Endpoint::ClientContextParameters;

using GeoRoutesClientConfiguration = Aws::Client::GenericClientConfiguration;
using GeoRoutesBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the GeoRoutes Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GeoRoutesEndpointProviderBase =
    EndpointProviderBase<GeoRoutesClientConfiguration, GeoRoutesBuiltInParameters, GeoRoutesClientContextParameters>;

using GeoRoutesDefaultEpProviderBase =
    DefaultEndpointProvider<GeoRoutesClientConfiguration, GeoRoutesBuiltInParameters, GeoRoutesClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_GEOROUTES_API GeoRoutesEndpointProvider : public GeoRoutesDefaultEpProviderBase {
 public:
  using GeoRoutesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  GeoRoutesEndpointProvider()
      : GeoRoutesDefaultEpProviderBase(Aws::GeoRoutes::GeoRoutesEndpointRules::GetRulesBlob(),
                                       Aws::GeoRoutes::GeoRoutesEndpointRules::RulesBlobSize) {}

  ~GeoRoutesEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace GeoRoutes
}  // namespace Aws
