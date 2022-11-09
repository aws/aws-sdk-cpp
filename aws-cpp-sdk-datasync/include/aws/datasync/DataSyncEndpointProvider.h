/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/datasync/DataSyncEndpointRules.h>


namespace Aws
{
namespace DataSync
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DataSyncClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DataSyncClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using DataSyncBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the DataSync Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DataSyncEndpointProviderBase =
    EndpointProviderBase<DataSyncClientConfiguration, DataSyncBuiltInParameters, DataSyncClientContextParameters>;

using DataSyncDefaultEpProviderBase =
    DefaultEndpointProvider<DataSyncClientConfiguration, DataSyncBuiltInParameters, DataSyncClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DATASYNC_API DataSyncEndpointProvider : public DataSyncDefaultEpProviderBase
{
public:
    using DataSyncResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DataSyncEndpointProvider()
      : DataSyncDefaultEpProviderBase(Aws::DataSync::DataSyncEndpointRules::Rules)
    {}

    ~DataSyncEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace DataSync
} // namespace Aws
