/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/backupstorage/BackupStorageEndpointRules.h>


namespace Aws
{
namespace BackupStorage
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using BackupStorageClientContextParameters = Aws::Endpoint::ClientContextParameters;
using BackupStorageBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class BackupStorageEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<BackupStorageEndpointProvider,
                                                                        BackupStorageBuiltInParameters,
                                                                        BackupStorageClientContextParameters>;


class BackupStorageEndpointProvider : public DefaultEndpointProviderT
{
public:
    using BackupStorageResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    BackupStorageEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::BackupStorage::BackupStorageEndpointRules::Rules),
        clientConfiguration(config)
    {}

    BackupStorageResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<BackupStorageEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~BackupStorageEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace BackupStorage
} // namespace Aws
