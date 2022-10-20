/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/personalize-events/PersonalizeEventsEndpointRules.h>


namespace Aws
{
namespace PersonalizeEvents
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using PersonalizeEventsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using PersonalizeEventsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class PersonalizeEventsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<PersonalizeEventsEndpointProvider,
                                                                        PersonalizeEventsBuiltInParameters,
                                                                        PersonalizeEventsClientContextParameters>;


class PersonalizeEventsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using PersonalizeEventsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    PersonalizeEventsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::PersonalizeEvents::PersonalizeEventsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    PersonalizeEventsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<PersonalizeEventsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~PersonalizeEventsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace PersonalizeEvents
} // namespace Aws
