/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sns/SNSEndpointRules.h>


namespace Aws
{
namespace SNS
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SNSClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SNSBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SNSEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SNSEndpointProvider,
                                                                        SNSBuiltInParameters,
                                                                        SNSClientContextParameters>;


class SNSEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SNSResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SNSEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SNS::SNSEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SNSResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SNSEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SNSEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SNS
} // namespace Aws
