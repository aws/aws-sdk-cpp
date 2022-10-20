/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/qldb/QLDBEndpointRules.h>


namespace Aws
{
namespace QLDB
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using QLDBClientContextParameters = Aws::Endpoint::ClientContextParameters;
using QLDBBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class QLDBEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<QLDBEndpointProvider,
                                                                        QLDBBuiltInParameters,
                                                                        QLDBClientContextParameters>;


class QLDBEndpointProvider : public DefaultEndpointProviderT
{
public:
    using QLDBResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    QLDBEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::QLDB::QLDBEndpointRules::Rules),
        clientConfiguration(config)
    {}

    QLDBResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<QLDBEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~QLDBEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace QLDB
} // namespace Aws
