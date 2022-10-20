/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/inspector2/Inspector2EndpointRules.h>


namespace Aws
{
namespace Inspector2
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using Inspector2ClientContextParameters = Aws::Endpoint::ClientContextParameters;
using Inspector2BuiltInParameters = Aws::Endpoint::ClientContextParameters;
class Inspector2EndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<Inspector2EndpointProvider,
                                                                        Inspector2BuiltInParameters,
                                                                        Inspector2ClientContextParameters>;


class Inspector2EndpointProvider : public DefaultEndpointProviderT
{
public:
    using Inspector2ResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    Inspector2EndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Inspector2::Inspector2EndpointRules::Rules),
        clientConfiguration(config)
    {}

    Inspector2ResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<Inspector2EndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~Inspector2EndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Inspector2
} // namespace Aws
