/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using BackupClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BackupClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using BackupBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Backup Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BackupEndpointProviderBase =
    EndpointProviderBase<BackupClientConfiguration, BackupBuiltInParameters, BackupClientContextParameters>;

using BackupDefaultEpProviderBase =
    DefaultEndpointProvider<BackupClientConfiguration, BackupBuiltInParameters, BackupClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BACKUP_API BackupEndpointProvider : public BackupDefaultEpProviderBase
{
public:
    using BackupResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    BackupEndpointProvider()
      : BackupDefaultEpProviderBase(Aws::Backup::BackupEndpointRules::Rules)
    {}

    ~BackupEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Backup
} // namespace Aws
