/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/identitystore/IdentityStoreEndpointRules.h>


namespace Aws
{
namespace IdentityStore
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using IdentityStoreClientContextParameters = Aws::Endpoint::ClientContextParameters;
using IdentityStoreBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class IdentityStoreEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<IdentityStoreEndpointProvider,
                                                                        IdentityStoreBuiltInParameters,
                                                                        IdentityStoreClientContextParameters>;


class IdentityStoreEndpointProvider : public DefaultEndpointProviderT
{
public:
    using IdentityStoreResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    IdentityStoreEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::IdentityStore::IdentityStoreEndpointRules::Rules),
        clientConfiguration(config)
    {}

    IdentityStoreResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<IdentityStoreEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~IdentityStoreEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace IdentityStore
} // namespace Aws
