/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/servicecatalog-appregistry/AppRegistryEndpointRules.h>


namespace Aws
{
namespace AppRegistry
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AppRegistryClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AppRegistryBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AppRegistryEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AppRegistryEndpointProvider,
                                                                        AppRegistryBuiltInParameters,
                                                                        AppRegistryClientContextParameters>;


class AppRegistryEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AppRegistryResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AppRegistryEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::AppRegistry::AppRegistryEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AppRegistryResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AppRegistryEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AppRegistryEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace AppRegistry
} // namespace Aws
