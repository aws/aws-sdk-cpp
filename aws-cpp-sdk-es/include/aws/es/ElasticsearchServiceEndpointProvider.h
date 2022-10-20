/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/es/ElasticsearchServiceEndpointRules.h>


namespace Aws
{
namespace ElasticsearchService
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ElasticsearchServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ElasticsearchServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ElasticsearchServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ElasticsearchServiceEndpointProvider,
                                                                        ElasticsearchServiceBuiltInParameters,
                                                                        ElasticsearchServiceClientContextParameters>;


class ElasticsearchServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ElasticsearchServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ElasticsearchServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ElasticsearchService::ElasticsearchServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ElasticsearchServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ElasticsearchServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ElasticsearchServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ElasticsearchService
} // namespace Aws
