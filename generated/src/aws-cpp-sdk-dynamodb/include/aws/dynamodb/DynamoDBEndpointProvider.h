/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBClientConfiguration.h>
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
using DynamoDBClientConfiguration = Aws::DynamoDB::DynamoDBClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DynamoDBClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DYNAMODB_API DynamoDBBuiltInParameters : public Aws::Endpoint::BuiltInParameters
{
public:
    virtual ~DynamoDBBuiltInParameters(){};
    using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
    virtual void SetFromClientConfiguration(const DynamoDBClientConfiguration& config);
};

/**
 * The type for the DynamoDB Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DynamoDBEndpointProviderBase =
    EndpointProviderBase<DynamoDBClientConfiguration, DynamoDBBuiltInParameters, DynamoDBClientContextParameters>;

using DynamoDBDefaultEpProviderBase =
    DefaultEndpointProvider<DynamoDBClientConfiguration, DynamoDBBuiltInParameters, DynamoDBClientContextParameters>;

} // namespace Endpoint
} // namespace DynamoDB

namespace Endpoint
{
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DYNAMODB_EXTERN template class AWS_DYNAMODB_API
    Aws::Endpoint::EndpointProviderBase<DynamoDB::Endpoint::DynamoDBClientConfiguration, DynamoDB::Endpoint::DynamoDBBuiltInParameters, DynamoDB::Endpoint::DynamoDBClientContextParameters>;

AWS_DYNAMODB_EXTERN template class AWS_DYNAMODB_API
    Aws::Endpoint::DefaultEndpointProvider<DynamoDB::Endpoint::DynamoDBClientConfiguration, DynamoDB::Endpoint::DynamoDBBuiltInParameters, DynamoDB::Endpoint::DynamoDBClientContextParameters>;
} // namespace Endpoint

namespace DynamoDB
{
namespace Endpoint
{
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
