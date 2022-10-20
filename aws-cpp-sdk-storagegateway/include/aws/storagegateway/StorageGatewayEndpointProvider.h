/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/storagegateway/StorageGatewayEndpointRules.h>


namespace Aws
{
namespace StorageGateway
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using StorageGatewayClientContextParameters = Aws::Endpoint::ClientContextParameters;
using StorageGatewayBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class StorageGatewayEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<StorageGatewayEndpointProvider,
                                                                        StorageGatewayBuiltInParameters,
                                                                        StorageGatewayClientContextParameters>;


class StorageGatewayEndpointProvider : public DefaultEndpointProviderT
{
public:
    using StorageGatewayResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    StorageGatewayEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::StorageGateway::StorageGatewayEndpointRules::Rules),
        clientConfiguration(config)
    {}

    StorageGatewayResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<StorageGatewayEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~StorageGatewayEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace StorageGateway
} // namespace Aws
