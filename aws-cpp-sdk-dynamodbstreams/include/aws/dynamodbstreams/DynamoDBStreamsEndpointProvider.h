/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/dynamodbstreams/DynamoDBStreamsEndpointRules.h>


namespace Aws
{
namespace DynamoDBStreams
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using DynamoDBStreamsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using DynamoDBStreamsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class DynamoDBStreamsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<DynamoDBStreamsEndpointProvider,
                                                                        DynamoDBStreamsBuiltInParameters,
                                                                        DynamoDBStreamsClientContextParameters>;


class DynamoDBStreamsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using DynamoDBStreamsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    DynamoDBStreamsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::DynamoDBStreams::DynamoDBStreamsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    DynamoDBStreamsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<DynamoDBStreamsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~DynamoDBStreamsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace DynamoDBStreams
} // namespace Aws
