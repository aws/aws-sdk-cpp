/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/waf-regional/WAFRegionalEndpointRules.h>


namespace Aws
{
namespace WAFRegional
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using WAFRegionalClientContextParameters = Aws::Endpoint::ClientContextParameters;
using WAFRegionalBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class WAFRegionalEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<WAFRegionalEndpointProvider,
                                                                        WAFRegionalBuiltInParameters,
                                                                        WAFRegionalClientContextParameters>;


class WAFRegionalEndpointProvider : public DefaultEndpointProviderT
{
public:
    using WAFRegionalResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    WAFRegionalEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::WAFRegional::WAFRegionalEndpointRules::Rules),
        clientConfiguration(config)
    {}

    WAFRegionalResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<WAFRegionalEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~WAFRegionalEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace WAFRegional
} // namespace Aws
