/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kafka/KafkaEndpointRules.h>


namespace Aws
{
namespace Kafka
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using KafkaClientContextParameters = Aws::Endpoint::ClientContextParameters;
using KafkaBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class KafkaEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<KafkaEndpointProvider,
                                                                        KafkaBuiltInParameters,
                                                                        KafkaClientContextParameters>;


class KafkaEndpointProvider : public DefaultEndpointProviderT
{
public:
    using KafkaResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    KafkaEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Kafka::KafkaEndpointRules::Rules),
        clientConfiguration(config)
    {}

    KafkaResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<KafkaEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~KafkaEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Kafka
} // namespace Aws
