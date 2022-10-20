/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/wafv2/WAFV2EndpointRules.h>


namespace Aws
{
namespace WAFV2
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using WAFV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;
using WAFV2BuiltInParameters = Aws::Endpoint::ClientContextParameters;
class WAFV2EndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<WAFV2EndpointProvider,
                                                                        WAFV2BuiltInParameters,
                                                                        WAFV2ClientContextParameters>;


class WAFV2EndpointProvider : public DefaultEndpointProviderT
{
public:
    using WAFV2ResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    WAFV2EndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::WAFV2::WAFV2EndpointRules::Rules),
        clientConfiguration(config)
    {}

    WAFV2ResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<WAFV2EndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~WAFV2EndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace WAFV2
} // namespace Aws
