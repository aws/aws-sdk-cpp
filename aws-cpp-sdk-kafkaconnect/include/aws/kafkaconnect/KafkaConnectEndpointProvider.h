/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kafkaconnect/KafkaConnectEndpointRules.h>


namespace Aws
{
namespace KafkaConnect
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using KafkaConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;
using KafkaConnectBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class KafkaConnectEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<KafkaConnectEndpointProvider,
                                                                        KafkaConnectBuiltInParameters,
                                                                        KafkaConnectClientContextParameters>;


class KafkaConnectEndpointProvider : public DefaultEndpointProviderT
{
public:
    using KafkaConnectResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    KafkaConnectEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::KafkaConnect::KafkaConnectEndpointRules::Rules),
        clientConfiguration(config)
    {}

    KafkaConnectResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<KafkaConnectEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~KafkaConnectEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace KafkaConnect
} // namespace Aws
