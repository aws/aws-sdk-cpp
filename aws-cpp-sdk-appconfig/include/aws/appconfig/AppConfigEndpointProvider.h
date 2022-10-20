/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/appconfig/AppConfigEndpointRules.h>


namespace Aws
{
namespace AppConfig
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AppConfigClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AppConfigBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AppConfigEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AppConfigEndpointProvider,
                                                                        AppConfigBuiltInParameters,
                                                                        AppConfigClientContextParameters>;


class AppConfigEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AppConfigResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AppConfigEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::AppConfig::AppConfigEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AppConfigResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AppConfigEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AppConfigEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace AppConfig
} // namespace Aws
