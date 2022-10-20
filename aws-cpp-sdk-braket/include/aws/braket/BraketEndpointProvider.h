/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/braket/BraketEndpointRules.h>


namespace Aws
{
namespace Braket
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using BraketClientContextParameters = Aws::Endpoint::ClientContextParameters;
using BraketBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class BraketEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<BraketEndpointProvider,
                                                                        BraketBuiltInParameters,
                                                                        BraketClientContextParameters>;


class BraketEndpointProvider : public DefaultEndpointProviderT
{
public:
    using BraketResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    BraketEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Braket::BraketEndpointRules::Rules),
        clientConfiguration(config)
    {}

    BraketResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<BraketEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~BraketEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Braket
} // namespace Aws
