/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-instance-connect/EC2InstanceConnect_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ec2-instance-connect/EC2InstanceConnectEndpointRules.h>


namespace Aws
{
namespace EC2InstanceConnect
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using EC2InstanceConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;
using EC2InstanceConnectBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class EC2InstanceConnectEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<EC2InstanceConnectEndpointProvider,
                                                                        EC2InstanceConnectBuiltInParameters,
                                                                        EC2InstanceConnectClientContextParameters>;


class EC2InstanceConnectEndpointProvider : public DefaultEndpointProviderT
{
public:
    using EC2InstanceConnectResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    EC2InstanceConnectEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::EC2InstanceConnect::EC2InstanceConnectEndpointRules::Rules),
        clientConfiguration(config)
    {}

    EC2InstanceConnectResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<EC2InstanceConnectEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~EC2InstanceConnectEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace EC2InstanceConnect
} // namespace Aws
