/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/managedblockchain/ManagedBlockchainEndpointRules.h>


namespace Aws
{
namespace ManagedBlockchain
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ManagedBlockchainClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ManagedBlockchainBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ManagedBlockchainEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ManagedBlockchainEndpointProvider,
                                                                        ManagedBlockchainBuiltInParameters,
                                                                        ManagedBlockchainClientContextParameters>;


class ManagedBlockchainEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ManagedBlockchainResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ManagedBlockchainEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ManagedBlockchain::ManagedBlockchainEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ManagedBlockchainResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ManagedBlockchainEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ManagedBlockchainEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ManagedBlockchain
} // namespace Aws
