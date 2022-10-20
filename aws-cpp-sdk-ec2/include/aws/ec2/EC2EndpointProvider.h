/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ec2/EC2EndpointRules.h>


namespace Aws
{
namespace EC2
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using EC2ClientContextParameters = Aws::Endpoint::ClientContextParameters;
using EC2BuiltInParameters = Aws::Endpoint::ClientContextParameters;
class EC2EndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<EC2EndpointProvider,
                                                                        EC2BuiltInParameters,
                                                                        EC2ClientContextParameters>;


class EC2EndpointProvider : public DefaultEndpointProviderT
{
public:
    using EC2ResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    EC2EndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::EC2::EC2EndpointRules::Rules),
        clientConfiguration(config)
    {}

    EC2ResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<EC2EndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~EC2EndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace EC2
} // namespace Aws
