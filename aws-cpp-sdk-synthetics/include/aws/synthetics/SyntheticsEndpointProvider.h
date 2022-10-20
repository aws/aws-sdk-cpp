/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/synthetics/SyntheticsEndpointRules.h>


namespace Aws
{
namespace Synthetics
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SyntheticsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SyntheticsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SyntheticsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SyntheticsEndpointProvider,
                                                                        SyntheticsBuiltInParameters,
                                                                        SyntheticsClientContextParameters>;


class SyntheticsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SyntheticsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SyntheticsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Synthetics::SyntheticsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SyntheticsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SyntheticsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SyntheticsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Synthetics
} // namespace Aws
