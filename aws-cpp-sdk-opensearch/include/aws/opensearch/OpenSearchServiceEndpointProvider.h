/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/opensearch/OpenSearchServiceEndpointRules.h>


namespace Aws
{
namespace OpenSearchService
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using OpenSearchServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using OpenSearchServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class OpenSearchServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<OpenSearchServiceEndpointProvider,
                                                                        OpenSearchServiceBuiltInParameters,
                                                                        OpenSearchServiceClientContextParameters>;


class OpenSearchServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using OpenSearchServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    OpenSearchServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::OpenSearchService::OpenSearchServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    OpenSearchServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<OpenSearchServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~OpenSearchServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace OpenSearchService
} // namespace Aws
