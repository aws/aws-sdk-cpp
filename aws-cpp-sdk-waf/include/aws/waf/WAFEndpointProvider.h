/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/waf/WAFEndpointRules.h>


namespace Aws
{
namespace WAF
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using WAFClientContextParameters = Aws::Endpoint::ClientContextParameters;
using WAFBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class WAFEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<WAFEndpointProvider,
                                                                        WAFBuiltInParameters,
                                                                        WAFClientContextParameters>;


class WAFEndpointProvider : public DefaultEndpointProviderT
{
public:
    using WAFResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    WAFEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::WAF::WAFEndpointRules::Rules),
        clientConfiguration(config)
    {}

    WAFResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<WAFEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~WAFEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace WAF
} // namespace Aws
