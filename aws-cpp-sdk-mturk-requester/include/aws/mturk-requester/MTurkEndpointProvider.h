/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mturk-requester/MTurkEndpointRules.h>


namespace Aws
{
namespace MTurk
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MTurkClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MTurkBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MTurkEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MTurkEndpointProvider,
                                                                        MTurkBuiltInParameters,
                                                                        MTurkClientContextParameters>;


class MTurkEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MTurkResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MTurkEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MTurk::MTurkEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MTurkResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MTurkEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MTurkEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MTurk
} // namespace Aws
