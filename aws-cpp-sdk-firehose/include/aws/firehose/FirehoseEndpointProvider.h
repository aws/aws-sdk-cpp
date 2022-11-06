/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/firehose/FirehoseEndpointRules.h>


namespace Aws
{
namespace Firehose
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using FirehoseClientContextParameters = Aws::Endpoint::ClientContextParameters;

using FirehoseClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using FirehoseBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Firehose Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using FirehoseEndpointProviderBase =
    EndpointProviderBase<FirehoseClientConfiguration, FirehoseBuiltInParameters, FirehoseClientContextParameters>;

using FirehoseDefaultEpProviderBase =
    DefaultEndpointProvider<FirehoseClientConfiguration, FirehoseBuiltInParameters, FirehoseClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_FIREHOSE_API FirehoseEndpointProvider : public FirehoseDefaultEpProviderBase
{
public:
    using FirehoseResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    FirehoseEndpointProvider()
      : FirehoseDefaultEpProviderBase(Aws::Firehose::FirehoseEndpointRules::Rules)
    {}

    ~FirehoseEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Firehose
} // namespace Aws
