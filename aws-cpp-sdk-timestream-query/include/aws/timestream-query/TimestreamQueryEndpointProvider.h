/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/timestream-query/TimestreamQueryEndpointRules.h>


namespace Aws
{
namespace TimestreamQuery
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using TimestreamQueryClientContextParameters = Aws::Endpoint::ClientContextParameters;

using TimestreamQueryClientConfiguration = Aws::Client::GenericClientConfiguration<true>;
using TimestreamQueryBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the TimestreamQuery Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TimestreamQueryEndpointProviderBase =
    EndpointProviderBase<TimestreamQueryClientConfiguration, TimestreamQueryBuiltInParameters, TimestreamQueryClientContextParameters>;

using TimestreamQueryDefaultEpProviderBase =
    DefaultEndpointProvider<TimestreamQueryClientConfiguration, TimestreamQueryBuiltInParameters, TimestreamQueryClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_TIMESTREAMQUERY_API TimestreamQueryEndpointProvider : public TimestreamQueryDefaultEpProviderBase
{
public:
    using TimestreamQueryResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    TimestreamQueryEndpointProvider()
      : TimestreamQueryDefaultEpProviderBase(Aws::TimestreamQuery::TimestreamQueryEndpointRules::Rules)
    {}

    ~TimestreamQueryEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace TimestreamQuery
} // namespace Aws
