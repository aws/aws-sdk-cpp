/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/polly/PollyEndpointRules.h>


namespace Aws
{
namespace Polly
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using PollyClientContextParameters = Aws::Endpoint::ClientContextParameters;
using PollyBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class PollyEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<PollyEndpointProvider,
                                                                        PollyBuiltInParameters,
                                                                        PollyClientContextParameters>;


class PollyEndpointProvider : public DefaultEndpointProviderT
{
public:
    using PollyResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    PollyEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Polly::PollyEndpointRules::Rules),
        clientConfiguration(config)
    {}

    PollyResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<PollyEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~PollyEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Polly
} // namespace Aws
