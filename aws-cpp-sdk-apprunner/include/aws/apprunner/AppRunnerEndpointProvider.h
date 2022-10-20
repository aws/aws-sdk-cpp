/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/apprunner/AppRunnerEndpointRules.h>


namespace Aws
{
namespace AppRunner
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AppRunnerClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AppRunnerBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AppRunnerEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AppRunnerEndpointProvider,
                                                                        AppRunnerBuiltInParameters,
                                                                        AppRunnerClientContextParameters>;


class AppRunnerEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AppRunnerResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AppRunnerEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::AppRunner::AppRunnerEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AppRunnerResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AppRunnerEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AppRunnerEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace AppRunner
} // namespace Aws
