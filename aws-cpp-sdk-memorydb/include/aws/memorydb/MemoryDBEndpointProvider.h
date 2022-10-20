/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/memorydb/MemoryDBEndpointRules.h>


namespace Aws
{
namespace MemoryDB
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MemoryDBClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MemoryDBBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MemoryDBEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MemoryDBEndpointProvider,
                                                                        MemoryDBBuiltInParameters,
                                                                        MemoryDBClientContextParameters>;


class MemoryDBEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MemoryDBResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MemoryDBEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MemoryDB::MemoryDBEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MemoryDBResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MemoryDBEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MemoryDBEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MemoryDB
} // namespace Aws
