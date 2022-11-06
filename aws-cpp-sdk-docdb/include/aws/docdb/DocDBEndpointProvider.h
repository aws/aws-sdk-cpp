/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/docdb/DocDBEndpointRules.h>


namespace Aws
{
namespace DocDB
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DocDBClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DocDBClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using DocDBBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the DocDB Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DocDBEndpointProviderBase =
    EndpointProviderBase<DocDBClientConfiguration, DocDBBuiltInParameters, DocDBClientContextParameters>;

using DocDBDefaultEpProviderBase =
    DefaultEndpointProvider<DocDBClientConfiguration, DocDBBuiltInParameters, DocDBClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DOCDB_API DocDBEndpointProvider : public DocDBDefaultEpProviderBase
{
public:
    using DocDBResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DocDBEndpointProvider()
      : DocDBDefaultEpProviderBase(Aws::DocDB::DocDBEndpointRules::Rules)
    {}

    ~DocDBEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace DocDB
} // namespace Aws
