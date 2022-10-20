/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/firehose/FirehoseEndpointRules.h>


namespace Aws
{
namespace Firehose
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using FirehoseClientContextParameters = Aws::Endpoint::ClientContextParameters;
using FirehoseBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class FirehoseEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<FirehoseEndpointProvider,
                                                                        FirehoseBuiltInParameters,
                                                                        FirehoseClientContextParameters>;


class FirehoseEndpointProvider : public DefaultEndpointProviderT
{
public:
    using FirehoseResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    FirehoseEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Firehose::FirehoseEndpointRules::Rules),
        clientConfiguration(config)
    {}

    FirehoseResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<FirehoseEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~FirehoseEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Firehose
} // namespace Aws
