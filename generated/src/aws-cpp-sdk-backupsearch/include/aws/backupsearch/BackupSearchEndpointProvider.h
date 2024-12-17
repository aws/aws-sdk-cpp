/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/backupsearch/BackupSearchEndpointRules.h>


namespace Aws
{
namespace BackupSearch
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using BackupSearchClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BackupSearchClientConfiguration = Aws::Client::GenericClientConfiguration;
using BackupSearchBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the BackupSearch Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BackupSearchEndpointProviderBase =
    EndpointProviderBase<BackupSearchClientConfiguration, BackupSearchBuiltInParameters, BackupSearchClientContextParameters>;

using BackupSearchDefaultEpProviderBase =
    DefaultEndpointProvider<BackupSearchClientConfiguration, BackupSearchBuiltInParameters, BackupSearchClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BACKUPSEARCH_API BackupSearchEndpointProvider : public BackupSearchDefaultEpProviderBase
{
public:
    using BackupSearchResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    BackupSearchEndpointProvider()
      : BackupSearchDefaultEpProviderBase(Aws::BackupSearch::BackupSearchEndpointRules::GetRulesBlob(), Aws::BackupSearch::BackupSearchEndpointRules::RulesBlobSize)
    {}

    ~BackupSearchEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace BackupSearch
} // namespace Aws
