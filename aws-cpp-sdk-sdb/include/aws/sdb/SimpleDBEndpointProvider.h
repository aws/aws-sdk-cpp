/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sdb/SimpleDBEndpointRules.h>


namespace Aws
{
namespace SimpleDB
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SimpleDBClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SimpleDBClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SimpleDBBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SimpleDB Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SimpleDBEndpointProviderBase =
    EndpointProviderBase<SimpleDBClientConfiguration, SimpleDBBuiltInParameters, SimpleDBClientContextParameters>;

using SimpleDBDefaultEpProviderBase =
    DefaultEndpointProvider<SimpleDBClientConfiguration, SimpleDBBuiltInParameters, SimpleDBClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SIMPLEDB_API SimpleDBEndpointProvider : public SimpleDBDefaultEpProviderBase
{
public:
    using SimpleDBResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SimpleDBEndpointProvider()
      : SimpleDBDefaultEpProviderBase(Aws::SimpleDB::SimpleDBEndpointRules::Rules)
    {}

    ~SimpleDBEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SimpleDB
} // namespace Aws
