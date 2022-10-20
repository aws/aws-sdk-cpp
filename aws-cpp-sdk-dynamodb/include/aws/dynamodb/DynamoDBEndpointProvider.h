/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/dynamodb/DynamoDBEndpointRules.h>


namespace Aws
{
namespace DynamoDB
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using DynamoDBClientContextParameters = Aws::Endpoint::ClientContextParameters;
using DynamoDBBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class DynamoDBEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<DynamoDBEndpointProvider,
                                                                        DynamoDBBuiltInParameters,
                                                                        DynamoDBClientContextParameters>;


class DynamoDBEndpointProvider : public DefaultEndpointProviderT
{
public:
    using DynamoDBResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    DynamoDBEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::DynamoDB::DynamoDBEndpointRules::Rules),
        clientConfiguration(config)
    {}

    DynamoDBResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<DynamoDBEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~DynamoDBEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace DynamoDB
} // namespace Aws
