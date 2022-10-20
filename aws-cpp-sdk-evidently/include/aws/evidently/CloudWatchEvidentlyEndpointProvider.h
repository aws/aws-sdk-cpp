/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/evidently/CloudWatchEvidentlyEndpointRules.h>


namespace Aws
{
namespace CloudWatchEvidently
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CloudWatchEvidentlyClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CloudWatchEvidentlyBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CloudWatchEvidentlyEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CloudWatchEvidentlyEndpointProvider,
                                                                        CloudWatchEvidentlyBuiltInParameters,
                                                                        CloudWatchEvidentlyClientContextParameters>;


class CloudWatchEvidentlyEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CloudWatchEvidentlyResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CloudWatchEvidentlyEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CloudWatchEvidently::CloudWatchEvidentlyEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CloudWatchEvidentlyResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CloudWatchEvidentlyEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CloudWatchEvidentlyEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CloudWatchEvidently
} // namespace Aws
