/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/qldb/QLDBEndpointRules.h>


namespace Aws
{
namespace QLDB
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using QLDBClientContextParameters = Aws::Endpoint::ClientContextParameters;

using QLDBClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using QLDBBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the QLDB Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using QLDBEndpointProviderBase =
    EndpointProviderBase<QLDBClientConfiguration, QLDBBuiltInParameters, QLDBClientContextParameters>;

using QLDBDefaultEpProviderBase =
    DefaultEndpointProvider<QLDBClientConfiguration, QLDBBuiltInParameters, QLDBClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_QLDB_API QLDBEndpointProvider : public QLDBDefaultEpProviderBase
{
public:
    using QLDBResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    QLDBEndpointProvider()
      : QLDBDefaultEpProviderBase(Aws::QLDB::QLDBEndpointRules::Rules)
    {}

    ~QLDBEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace QLDB
} // namespace Aws
