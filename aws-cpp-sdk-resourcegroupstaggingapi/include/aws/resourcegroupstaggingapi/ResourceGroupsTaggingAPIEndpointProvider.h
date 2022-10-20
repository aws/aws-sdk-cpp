/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIEndpointRules.h>


namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ResourceGroupsTaggingAPIClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ResourceGroupsTaggingAPIBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ResourceGroupsTaggingAPIEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ResourceGroupsTaggingAPIEndpointProvider,
                                                                        ResourceGroupsTaggingAPIBuiltInParameters,
                                                                        ResourceGroupsTaggingAPIClientContextParameters>;


class ResourceGroupsTaggingAPIEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ResourceGroupsTaggingAPIResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ResourceGroupsTaggingAPIEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ResourceGroupsTaggingAPIResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ResourceGroupsTaggingAPIEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ResourceGroupsTaggingAPIEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
