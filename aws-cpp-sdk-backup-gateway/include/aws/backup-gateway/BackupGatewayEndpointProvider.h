/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/backup-gateway/BackupGatewayEndpointRules.h>


namespace Aws
{
namespace BackupGateway
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using BackupGatewayClientContextParameters = Aws::Endpoint::ClientContextParameters;
using BackupGatewayBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class BackupGatewayEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<BackupGatewayEndpointProvider,
                                                                        BackupGatewayBuiltInParameters,
                                                                        BackupGatewayClientContextParameters>;


class BackupGatewayEndpointProvider : public DefaultEndpointProviderT
{
public:
    using BackupGatewayResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    BackupGatewayEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::BackupGateway::BackupGatewayEndpointRules::Rules),
        clientConfiguration(config)
    {}

    BackupGatewayResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<BackupGatewayEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~BackupGatewayEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace BackupGateway
} // namespace Aws
