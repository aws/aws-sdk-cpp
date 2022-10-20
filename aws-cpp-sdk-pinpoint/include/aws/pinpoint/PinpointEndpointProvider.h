/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/pinpoint/PinpointEndpointRules.h>


namespace Aws
{
namespace Pinpoint
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using PinpointClientContextParameters = Aws::Endpoint::ClientContextParameters;
using PinpointBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class PinpointEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<PinpointEndpointProvider,
                                                                        PinpointBuiltInParameters,
                                                                        PinpointClientContextParameters>;


class PinpointEndpointProvider : public DefaultEndpointProviderT
{
public:
    using PinpointResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    PinpointEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Pinpoint::PinpointEndpointRules::Rules),
        clientConfiguration(config)
    {}

    PinpointResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<PinpointEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~PinpointEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Pinpoint
} // namespace Aws
