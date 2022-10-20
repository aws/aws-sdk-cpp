/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/monitoring/CloudWatchEndpointRules.h>


namespace Aws
{
namespace CloudWatch
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CloudWatchClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CloudWatchBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CloudWatchEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CloudWatchEndpointProvider,
                                                                        CloudWatchBuiltInParameters,
                                                                        CloudWatchClientContextParameters>;


class CloudWatchEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CloudWatchResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CloudWatchEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CloudWatch::CloudWatchEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CloudWatchResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CloudWatchEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CloudWatchEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CloudWatch
} // namespace Aws
