/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/backup/BackupEndpointRules.h>


namespace Aws
{
namespace Backup
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using BackupClientContextParameters = Aws::Endpoint::ClientContextParameters;
using BackupBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class BackupEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<BackupEndpointProvider,
                                                                        BackupBuiltInParameters,
                                                                        BackupClientContextParameters>;


class BackupEndpointProvider : public DefaultEndpointProviderT
{
public:
    using BackupResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    BackupEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Backup::BackupEndpointRules::Rules),
        clientConfiguration(config)
    {}

    BackupResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<BackupEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~BackupEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Backup
} // namespace Aws
