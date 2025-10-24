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
#include <aws/discovery/ApplicationDiscoveryServiceEndpointRules.h>
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>

namespace Aws {
namespace ApplicationDiscoveryService {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ApplicationDiscoveryServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ApplicationDiscoveryServiceClientConfiguration = Aws::Client::GenericClientConfiguration;
using ApplicationDiscoveryServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ApplicationDiscoveryService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ApplicationDiscoveryServiceEndpointProviderBase =
    EndpointProviderBase<ApplicationDiscoveryServiceClientConfiguration, ApplicationDiscoveryServiceBuiltInParameters,
                         ApplicationDiscoveryServiceClientContextParameters>;

using ApplicationDiscoveryServiceDefaultEpProviderBase =
    DefaultEndpointProvider<ApplicationDiscoveryServiceClientConfiguration, ApplicationDiscoveryServiceBuiltInParameters,
                            ApplicationDiscoveryServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APPLICATIONDISCOVERYSERVICE_API ApplicationDiscoveryServiceEndpointProvider
    : public ApplicationDiscoveryServiceDefaultEpProviderBase {
 public:
  using ApplicationDiscoveryServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ApplicationDiscoveryServiceEndpointProvider()
      : ApplicationDiscoveryServiceDefaultEpProviderBase(
            Aws::ApplicationDiscoveryService::ApplicationDiscoveryServiceEndpointRules::GetRulesBlob(),
            Aws::ApplicationDiscoveryService::ApplicationDiscoveryServiceEndpointRules::RulesBlobSize) {}

  ~ApplicationDiscoveryServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ApplicationDiscoveryService
}  // namespace Aws
