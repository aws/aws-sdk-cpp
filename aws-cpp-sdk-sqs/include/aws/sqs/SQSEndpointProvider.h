/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sqs/SQSEndpointRules.h>


namespace Aws
{
namespace SQS
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SQSClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SQSBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SQSEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SQSEndpointProvider,
                                                                        SQSBuiltInParameters,
                                                                        SQSClientContextParameters>;


class SQSEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SQSResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SQSEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SQS::SQSEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SQSResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SQSEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SQSEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SQS
} // namespace Aws
