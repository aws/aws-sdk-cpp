/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mobile/MobileEndpointRules.h>


namespace Aws
{
namespace Mobile
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MobileClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MobileBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MobileEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MobileEndpointProvider,
                                                                        MobileBuiltInParameters,
                                                                        MobileClientContextParameters>;


class MobileEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MobileResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MobileEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Mobile::MobileEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MobileResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MobileEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MobileEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Mobile
} // namespace Aws
