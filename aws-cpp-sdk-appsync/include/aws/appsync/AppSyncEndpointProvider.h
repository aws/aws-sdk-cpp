/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/appsync/AppSyncEndpointRules.h>


namespace Aws
{
namespace AppSync
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AppSyncClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AppSyncBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AppSyncEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AppSyncEndpointProvider,
                                                                        AppSyncBuiltInParameters,
                                                                        AppSyncClientContextParameters>;


class AppSyncEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AppSyncResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AppSyncEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::AppSync::AppSyncEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AppSyncResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AppSyncEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AppSyncEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace AppSync
} // namespace Aws
