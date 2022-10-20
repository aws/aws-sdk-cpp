/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mq/MQEndpointRules.h>


namespace Aws
{
namespace MQ
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MQClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MQBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MQEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MQEndpointProvider,
                                                                        MQBuiltInParameters,
                                                                        MQClientContextParameters>;


class MQEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MQResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MQEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MQ::MQEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MQResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MQEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MQEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MQ
} // namespace Aws
