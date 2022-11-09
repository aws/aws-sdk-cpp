/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/servicediscovery/ServiceDiscoveryEndpointRules.h>


namespace Aws
{
namespace ServiceDiscovery
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ServiceDiscoveryClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ServiceDiscoveryClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ServiceDiscoveryBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ServiceDiscovery Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ServiceDiscoveryEndpointProviderBase =
    EndpointProviderBase<ServiceDiscoveryClientConfiguration, ServiceDiscoveryBuiltInParameters, ServiceDiscoveryClientContextParameters>;

using ServiceDiscoveryDefaultEpProviderBase =
    DefaultEndpointProvider<ServiceDiscoveryClientConfiguration, ServiceDiscoveryBuiltInParameters, ServiceDiscoveryClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SERVICEDISCOVERY_API ServiceDiscoveryEndpointProvider : public ServiceDiscoveryDefaultEpProviderBase
{
public:
    using ServiceDiscoveryResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ServiceDiscoveryEndpointProvider()
      : ServiceDiscoveryDefaultEpProviderBase(Aws::ServiceDiscovery::ServiceDiscoveryEndpointRules::Rules)
    {}

    ~ServiceDiscoveryEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ServiceDiscovery
} // namespace Aws
