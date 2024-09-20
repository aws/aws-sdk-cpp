/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/DynamoDBEndpointProvider.h>

namespace Aws
{
#ifndef AWS_DYNAMODB_EXPORTS // Except for Windows DLL
namespace Endpoint
{
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DynamoDB::Endpoint::DynamoDBClientConfiguration,
    DynamoDB::Endpoint::DynamoDBBuiltInParameters,
    DynamoDB::Endpoint::DynamoDBClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<DynamoDB::Endpoint::DynamoDBClientConfiguration,
    DynamoDB::Endpoint::DynamoDBBuiltInParameters,
    DynamoDB::Endpoint::DynamoDBClientContextParameters>;
} // namespace Endpoint
#endif

namespace DynamoDB
{
namespace Endpoint
{
  void DynamoDBBuiltInParameters::SetFromClientConfiguration(const DynamoDBClientConfiguration& config)
  {
    SetFromClientConfiguration(static_cast<const DynamoDBClientConfiguration::BaseClientConfigClass&>(config));

    if(!config.accountId.empty()) {
      SetStringParameter("AccountId", config.accountId);
    }
    if(!config.accountIdEndpointMode.empty()) {
      SetStringParameter("AccountIdEndpointMode", config.accountIdEndpointMode);
    }
  }
} // namespace Endpoint
} // namespace DynamoDB
} // namespace Aws
