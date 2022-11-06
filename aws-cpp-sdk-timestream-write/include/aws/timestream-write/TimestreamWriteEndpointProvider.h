/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/timestream-write/TimestreamWriteEndpointRules.h>


namespace Aws
{
namespace TimestreamWrite
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using TimestreamWriteClientContextParameters = Aws::Endpoint::ClientContextParameters;

using TimestreamWriteClientConfiguration = Aws::Client::GenericClientConfiguration<true>;
using TimestreamWriteBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the TimestreamWrite Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TimestreamWriteEndpointProviderBase =
    EndpointProviderBase<TimestreamWriteClientConfiguration, TimestreamWriteBuiltInParameters, TimestreamWriteClientContextParameters>;

using TimestreamWriteDefaultEpProviderBase =
    DefaultEndpointProvider<TimestreamWriteClientConfiguration, TimestreamWriteBuiltInParameters, TimestreamWriteClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_TIMESTREAMWRITE_API TimestreamWriteEndpointProvider : public TimestreamWriteDefaultEpProviderBase
{
public:
    using TimestreamWriteResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    TimestreamWriteEndpointProvider()
      : TimestreamWriteDefaultEpProviderBase(Aws::TimestreamWrite::TimestreamWriteEndpointRules::Rules)
    {}

    ~TimestreamWriteEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace TimestreamWrite
} // namespace Aws
