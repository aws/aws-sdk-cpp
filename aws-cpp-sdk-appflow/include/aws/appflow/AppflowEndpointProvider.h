/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/appflow/AppflowEndpointRules.h>


namespace Aws
{
namespace Appflow
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AppflowClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AppflowBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AppflowEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AppflowEndpointProvider,
                                                                        AppflowBuiltInParameters,
                                                                        AppflowClientContextParameters>;


class AppflowEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AppflowResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AppflowEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Appflow::AppflowEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AppflowResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AppflowEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AppflowEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Appflow
} // namespace Aws
