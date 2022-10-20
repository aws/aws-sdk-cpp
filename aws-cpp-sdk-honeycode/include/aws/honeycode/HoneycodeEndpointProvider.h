/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/honeycode/HoneycodeEndpointRules.h>


namespace Aws
{
namespace Honeycode
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using HoneycodeClientContextParameters = Aws::Endpoint::ClientContextParameters;
using HoneycodeBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class HoneycodeEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<HoneycodeEndpointProvider,
                                                                        HoneycodeBuiltInParameters,
                                                                        HoneycodeClientContextParameters>;


class HoneycodeEndpointProvider : public DefaultEndpointProviderT
{
public:
    using HoneycodeResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    HoneycodeEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Honeycode::HoneycodeEndpointRules::Rules),
        clientConfiguration(config)
    {}

    HoneycodeResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<HoneycodeEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~HoneycodeEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Honeycode
} // namespace Aws
