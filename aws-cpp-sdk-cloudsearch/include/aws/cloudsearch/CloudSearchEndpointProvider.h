/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cloudsearch/CloudSearchEndpointRules.h>


namespace Aws
{
namespace CloudSearch
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CloudSearchClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CloudSearchBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CloudSearchEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CloudSearchEndpointProvider,
                                                                        CloudSearchBuiltInParameters,
                                                                        CloudSearchClientContextParameters>;


class CloudSearchEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CloudSearchResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CloudSearchEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CloudSearch::CloudSearchEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CloudSearchResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CloudSearchEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CloudSearchEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CloudSearch
} // namespace Aws
