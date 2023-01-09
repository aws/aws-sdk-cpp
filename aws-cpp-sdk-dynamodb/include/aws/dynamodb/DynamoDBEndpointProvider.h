/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/dynamodb/DynamoDBEndpointRules.h>


namespace Aws
{
namespace DynamoDB
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DynamoDBClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DynamoDBClientConfiguration = Aws::Client::GenericClientConfiguration<true>;
using DynamoDBBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the DynamoDB Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DynamoDBEndpointProviderBase =
    EndpointProviderBase<DynamoDBClientConfiguration, DynamoDBBuiltInParameters, DynamoDBClientContextParameters>;

using DynamoDBDefaultEpProviderBase =
    DefaultEndpointProvider<DynamoDBClientConfiguration, DynamoDBBuiltInParameters, DynamoDBClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DYNAMODB_API DynamoDBEndpointProvider : public DynamoDBDefaultEpProviderBase
{
public:
    using DynamoDBResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DynamoDBEndpointProvider()
      : DynamoDBDefaultEpProviderBase(Aws::DynamoDB::DynamoDBEndpointRules::GetRulesBlob(), Aws::DynamoDB::DynamoDBEndpointRules::RulesBlobSize)
    {}

    ~DynamoDBEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace DynamoDB
} // namespace Aws
