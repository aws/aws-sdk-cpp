/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/resource-groups/ResourceGroupsEndpointRules.h>


namespace Aws
{
namespace ResourceGroups
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ResourceGroupsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ResourceGroupsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ResourceGroupsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ResourceGroupsEndpointProvider,
                                                                        ResourceGroupsBuiltInParameters,
                                                                        ResourceGroupsClientContextParameters>;


class ResourceGroupsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ResourceGroupsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ResourceGroupsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ResourceGroups::ResourceGroupsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ResourceGroupsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ResourceGroupsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ResourceGroupsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ResourceGroups
} // namespace Aws
