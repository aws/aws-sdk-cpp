/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/support-app/SupportAppEndpointRules.h>


namespace Aws
{
namespace SupportApp
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SupportAppClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SupportAppBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SupportAppEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SupportAppEndpointProvider,
                                                                        SupportAppBuiltInParameters,
                                                                        SupportAppClientContextParameters>;


class SupportAppEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SupportAppResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SupportAppEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SupportApp::SupportAppEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SupportAppResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SupportAppEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SupportAppEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SupportApp
} // namespace Aws
