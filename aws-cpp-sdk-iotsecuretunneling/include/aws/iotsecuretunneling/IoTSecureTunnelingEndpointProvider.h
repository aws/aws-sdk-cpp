/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iotsecuretunneling/IoTSecureTunnelingEndpointRules.h>


namespace Aws
{
namespace IoTSecureTunneling
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using IoTSecureTunnelingClientContextParameters = Aws::Endpoint::ClientContextParameters;
using IoTSecureTunnelingBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class IoTSecureTunnelingEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<IoTSecureTunnelingEndpointProvider,
                                                                        IoTSecureTunnelingBuiltInParameters,
                                                                        IoTSecureTunnelingClientContextParameters>;


class IoTSecureTunnelingEndpointProvider : public DefaultEndpointProviderT
{
public:
    using IoTSecureTunnelingResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    IoTSecureTunnelingEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::IoTSecureTunneling::IoTSecureTunnelingEndpointRules::Rules),
        clientConfiguration(config)
    {}

    IoTSecureTunnelingResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<IoTSecureTunnelingEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~IoTSecureTunnelingEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace IoTSecureTunneling
} // namespace Aws
