/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/memorydb/MemoryDBEndpointRules.h>


namespace Aws
{
namespace MemoryDB
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MemoryDBClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MemoryDBClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MemoryDBBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MemoryDB Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MemoryDBEndpointProviderBase =
    EndpointProviderBase<MemoryDBClientConfiguration, MemoryDBBuiltInParameters, MemoryDBClientContextParameters>;

using MemoryDBDefaultEpProviderBase =
    DefaultEndpointProvider<MemoryDBClientConfiguration, MemoryDBBuiltInParameters, MemoryDBClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MEMORYDB_API MemoryDBEndpointProvider : public MemoryDBDefaultEpProviderBase
{
public:
    using MemoryDBResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MemoryDBEndpointProvider()
      : MemoryDBDefaultEpProviderBase(Aws::MemoryDB::MemoryDBEndpointRules::Rules)
    {}

    ~MemoryDBEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MemoryDB
} // namespace Aws
