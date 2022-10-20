/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/organizations/OrganizationsEndpointRules.h>


namespace Aws
{
namespace Organizations
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using OrganizationsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using OrganizationsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class OrganizationsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<OrganizationsEndpointProvider,
                                                                        OrganizationsBuiltInParameters,
                                                                        OrganizationsClientContextParameters>;


class OrganizationsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using OrganizationsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    OrganizationsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Organizations::OrganizationsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    OrganizationsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<OrganizationsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~OrganizationsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Organizations
} // namespace Aws
