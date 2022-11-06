/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/grafana/ManagedGrafanaEndpointRules.h>


namespace Aws
{
namespace ManagedGrafana
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ManagedGrafanaClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ManagedGrafanaClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ManagedGrafanaBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ManagedGrafana Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ManagedGrafanaEndpointProviderBase =
    EndpointProviderBase<ManagedGrafanaClientConfiguration, ManagedGrafanaBuiltInParameters, ManagedGrafanaClientContextParameters>;

using ManagedGrafanaDefaultEpProviderBase =
    DefaultEndpointProvider<ManagedGrafanaClientConfiguration, ManagedGrafanaBuiltInParameters, ManagedGrafanaClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MANAGEDGRAFANA_API ManagedGrafanaEndpointProvider : public ManagedGrafanaDefaultEpProviderBase
{
public:
    using ManagedGrafanaResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ManagedGrafanaEndpointProvider()
      : ManagedGrafanaDefaultEpProviderBase(Aws::ManagedGrafana::ManagedGrafanaEndpointRules::Rules)
    {}

    ~ManagedGrafanaEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ManagedGrafana
} // namespace Aws
