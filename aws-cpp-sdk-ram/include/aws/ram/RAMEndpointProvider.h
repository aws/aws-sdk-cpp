/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ram/RAMEndpointRules.h>


namespace Aws
{
namespace RAM
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using RAMClientContextParameters = Aws::Endpoint::ClientContextParameters;
using RAMBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class RAMEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<RAMEndpointProvider,
                                                                        RAMBuiltInParameters,
                                                                        RAMClientContextParameters>;


class RAMEndpointProvider : public DefaultEndpointProviderT
{
public:
    using RAMResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    RAMEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::RAM::RAMEndpointRules::Rules),
        clientConfiguration(config)
    {}

    RAMResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<RAMEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~RAMEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace RAM
} // namespace Aws
