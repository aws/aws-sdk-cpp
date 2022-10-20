/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/qldb-session/QLDBSessionEndpointRules.h>


namespace Aws
{
namespace QLDBSession
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using QLDBSessionClientContextParameters = Aws::Endpoint::ClientContextParameters;
using QLDBSessionBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class QLDBSessionEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<QLDBSessionEndpointProvider,
                                                                        QLDBSessionBuiltInParameters,
                                                                        QLDBSessionClientContextParameters>;


class QLDBSessionEndpointProvider : public DefaultEndpointProviderT
{
public:
    using QLDBSessionResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    QLDBSessionEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::QLDBSession::QLDBSessionEndpointRules::Rules),
        clientConfiguration(config)
    {}

    QLDBSessionResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<QLDBSessionEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~QLDBSessionEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace QLDBSession
} // namespace Aws
