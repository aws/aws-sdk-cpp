/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/m2/MainframeModernizationEndpointRules.h>


namespace Aws
{
namespace MainframeModernization
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MainframeModernizationClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MainframeModernizationBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MainframeModernizationEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MainframeModernizationEndpointProvider,
                                                                        MainframeModernizationBuiltInParameters,
                                                                        MainframeModernizationClientContextParameters>;


class MainframeModernizationEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MainframeModernizationResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MainframeModernizationEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MainframeModernization::MainframeModernizationEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MainframeModernizationResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MainframeModernizationEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MainframeModernizationEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MainframeModernization
} // namespace Aws
