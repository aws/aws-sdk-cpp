/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/bcm-dashboards/BCMDashboardsEndpointRules.h>


namespace Aws
{
namespace BCMDashboards
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using BCMDashboardsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BCMDashboardsClientConfiguration = Aws::Client::GenericClientConfiguration;
using BCMDashboardsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the BCMDashboards Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BCMDashboardsEndpointProviderBase =
    EndpointProviderBase<BCMDashboardsClientConfiguration, BCMDashboardsBuiltInParameters, BCMDashboardsClientContextParameters>;

using BCMDashboardsDefaultEpProviderBase =
    DefaultEndpointProvider<BCMDashboardsClientConfiguration, BCMDashboardsBuiltInParameters, BCMDashboardsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BCMDASHBOARDS_API BCMDashboardsEndpointProvider : public BCMDashboardsDefaultEpProviderBase
{
public:
    using BCMDashboardsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    BCMDashboardsEndpointProvider()
      : BCMDashboardsDefaultEpProviderBase(Aws::BCMDashboards::BCMDashboardsEndpointRules::GetRulesBlob(), Aws::BCMDashboards::BCMDashboardsEndpointRules::RulesBlobSize)
    {}

    ~BCMDashboardsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace BCMDashboards
} // namespace Aws
