/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2EndpointRules.h>


namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using KinesisAnalyticsV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;
using KinesisAnalyticsV2BuiltInParameters = Aws::Endpoint::ClientContextParameters;
class KinesisAnalyticsV2EndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<KinesisAnalyticsV2EndpointProvider,
                                                                        KinesisAnalyticsV2BuiltInParameters,
                                                                        KinesisAnalyticsV2ClientContextParameters>;


class KinesisAnalyticsV2EndpointProvider : public DefaultEndpointProviderT
{
public:
    using KinesisAnalyticsV2ResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    KinesisAnalyticsV2EndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::KinesisAnalyticsV2::KinesisAnalyticsV2EndpointRules::Rules),
        clientConfiguration(config)
    {}

    KinesisAnalyticsV2ResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<KinesisAnalyticsV2EndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~KinesisAnalyticsV2EndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace KinesisAnalyticsV2
} // namespace Aws
