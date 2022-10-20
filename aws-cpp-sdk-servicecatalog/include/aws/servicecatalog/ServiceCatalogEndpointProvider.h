/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/servicecatalog/ServiceCatalogEndpointRules.h>


namespace Aws
{
namespace ServiceCatalog
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ServiceCatalogClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ServiceCatalogBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ServiceCatalogEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ServiceCatalogEndpointProvider,
                                                                        ServiceCatalogBuiltInParameters,
                                                                        ServiceCatalogClientContextParameters>;


class ServiceCatalogEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ServiceCatalogResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ServiceCatalogEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ServiceCatalog::ServiceCatalogEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ServiceCatalogResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ServiceCatalogEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ServiceCatalogEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ServiceCatalog
} // namespace Aws
