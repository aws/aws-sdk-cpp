/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/events/CloudWatchEventsEndpointRules.h>


namespace Aws
{
namespace CloudWatchEvents
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CloudWatchEventsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CloudWatchEventsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CloudWatchEventsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CloudWatchEventsEndpointProvider,
                                                                        CloudWatchEventsBuiltInParameters,
                                                                        CloudWatchEventsClientContextParameters>;


class CloudWatchEventsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CloudWatchEventsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CloudWatchEventsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CloudWatchEvents::CloudWatchEventsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CloudWatchEventsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CloudWatchEventsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CloudWatchEventsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CloudWatchEvents
} // namespace Aws
