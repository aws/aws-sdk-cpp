/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/rum/CloudWatchRUMEndpointRules.h>


namespace Aws
{
namespace CloudWatchRUM
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CloudWatchRUMClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CloudWatchRUMBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CloudWatchRUMEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CloudWatchRUMEndpointProvider,
                                                                        CloudWatchRUMBuiltInParameters,
                                                                        CloudWatchRUMClientContextParameters>;


class CloudWatchRUMEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CloudWatchRUMResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CloudWatchRUMEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CloudWatchRUM::CloudWatchRUMEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CloudWatchRUMResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CloudWatchRUMEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CloudWatchRUMEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CloudWatchRUM
} // namespace Aws
