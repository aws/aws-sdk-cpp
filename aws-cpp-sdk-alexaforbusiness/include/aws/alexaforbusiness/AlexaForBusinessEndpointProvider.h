/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/alexaforbusiness/AlexaForBusinessEndpointRules.h>


namespace Aws
{
namespace AlexaForBusiness
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AlexaForBusinessClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AlexaForBusinessBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AlexaForBusinessEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AlexaForBusinessEndpointProvider,
                                                                        AlexaForBusinessBuiltInParameters,
                                                                        AlexaForBusinessClientContextParameters>;


class AlexaForBusinessEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AlexaForBusinessResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AlexaForBusinessEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::AlexaForBusiness::AlexaForBusinessEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AlexaForBusinessResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AlexaForBusinessEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AlexaForBusinessEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace AlexaForBusiness
} // namespace Aws
