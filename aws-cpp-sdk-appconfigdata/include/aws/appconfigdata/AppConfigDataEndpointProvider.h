/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/appconfigdata/AppConfigDataEndpointRules.h>


namespace Aws
{
namespace AppConfigData
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AppConfigDataClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AppConfigDataBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AppConfigDataEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AppConfigDataEndpointProvider,
                                                                        AppConfigDataBuiltInParameters,
                                                                        AppConfigDataClientContextParameters>;


class AppConfigDataEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AppConfigDataResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AppConfigDataEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::AppConfigData::AppConfigDataEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AppConfigDataResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AppConfigDataEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AppConfigDataEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace AppConfigData
} // namespace Aws
