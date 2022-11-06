/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ce/CostExplorerEndpointRules.h>


namespace Aws
{
namespace CostExplorer
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CostExplorerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CostExplorerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CostExplorerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CostExplorer Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CostExplorerEndpointProviderBase =
    EndpointProviderBase<CostExplorerClientConfiguration, CostExplorerBuiltInParameters, CostExplorerClientContextParameters>;

using CostExplorerDefaultEpProviderBase =
    DefaultEndpointProvider<CostExplorerClientConfiguration, CostExplorerBuiltInParameters, CostExplorerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_COSTEXPLORER_API CostExplorerEndpointProvider : public CostExplorerDefaultEpProviderBase
{
public:
    using CostExplorerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CostExplorerEndpointProvider()
      : CostExplorerDefaultEpProviderBase(Aws::CostExplorer::CostExplorerEndpointRules::Rules)
    {}

    ~CostExplorerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CostExplorer
} // namespace Aws
