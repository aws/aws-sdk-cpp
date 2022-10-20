/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/rolesanywhere/RolesAnywhereEndpointRules.h>


namespace Aws
{
namespace RolesAnywhere
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using RolesAnywhereClientContextParameters = Aws::Endpoint::ClientContextParameters;
using RolesAnywhereBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class RolesAnywhereEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<RolesAnywhereEndpointProvider,
                                                                        RolesAnywhereBuiltInParameters,
                                                                        RolesAnywhereClientContextParameters>;


class RolesAnywhereEndpointProvider : public DefaultEndpointProviderT
{
public:
    using RolesAnywhereResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    RolesAnywhereEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::RolesAnywhere::RolesAnywhereEndpointRules::Rules),
        clientConfiguration(config)
    {}

    RolesAnywhereResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<RolesAnywhereEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~RolesAnywhereEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace RolesAnywhere
} // namespace Aws
