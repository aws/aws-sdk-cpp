/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kinesisanalytics/KinesisAnalyticsEndpointRules.h>


namespace Aws
{
namespace KinesisAnalytics
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using KinesisAnalyticsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using KinesisAnalyticsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class KinesisAnalyticsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<KinesisAnalyticsEndpointProvider,
                                                                        KinesisAnalyticsBuiltInParameters,
                                                                        KinesisAnalyticsClientContextParameters>;


class KinesisAnalyticsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using KinesisAnalyticsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    KinesisAnalyticsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::KinesisAnalytics::KinesisAnalyticsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    KinesisAnalyticsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<KinesisAnalyticsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~KinesisAnalyticsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace KinesisAnalytics
} // namespace Aws
