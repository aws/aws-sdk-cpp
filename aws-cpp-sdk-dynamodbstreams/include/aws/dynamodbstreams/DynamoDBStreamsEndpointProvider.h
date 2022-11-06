/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/dynamodbstreams/DynamoDBStreamsEndpointRules.h>


namespace Aws
{
namespace DynamoDBStreams
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DynamoDBStreamsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DynamoDBStreamsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using DynamoDBStreamsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the DynamoDBStreams Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DynamoDBStreamsEndpointProviderBase =
    EndpointProviderBase<DynamoDBStreamsClientConfiguration, DynamoDBStreamsBuiltInParameters, DynamoDBStreamsClientContextParameters>;

using DynamoDBStreamsDefaultEpProviderBase =
    DefaultEndpointProvider<DynamoDBStreamsClientConfiguration, DynamoDBStreamsBuiltInParameters, DynamoDBStreamsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DYNAMODBSTREAMS_API DynamoDBStreamsEndpointProvider : public DynamoDBStreamsDefaultEpProviderBase
{
public:
    using DynamoDBStreamsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DynamoDBStreamsEndpointProvider()
      : DynamoDBStreamsDefaultEpProviderBase(Aws::DynamoDBStreams::DynamoDBStreamsEndpointRules::Rules)
    {}

    ~DynamoDBStreamsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace DynamoDBStreams
} // namespace Aws
