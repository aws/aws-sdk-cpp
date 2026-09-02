/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/DynamoDBStreamsEndpointProvider.h>
#include <aws/dynamodbstreams/internal/DynamoDBStreamsEndpointRules.h>

namespace Aws {
#ifndef AWS_DYNAMODBSTREAMS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DynamoDBStreams::Endpoint::DynamoDBStreamsClientConfiguration,
                                                   DynamoDBStreams::Endpoint::DynamoDBStreamsBuiltInParameters,
                                                   DynamoDBStreams::Endpoint::DynamoDBStreamsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<DynamoDBStreams::Endpoint::DynamoDBStreamsClientConfiguration,
                                                  DynamoDBStreams::Endpoint::DynamoDBStreamsBuiltInParameters,
                                                  DynamoDBStreams::Endpoint::DynamoDBStreamsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace DynamoDBStreams {
namespace Endpoint {
DynamoDBStreamsEndpointProvider::DynamoDBStreamsEndpointProvider()
    : DynamoDBStreamsDefaultEpProviderBase(Aws::DynamoDBStreams::DynamoDBStreamsEndpointRules::GetRulesBlob(),
                                           Aws::DynamoDBStreams::DynamoDBStreamsEndpointRules::RulesBlobSize) {}

void DynamoDBStreamsBuiltInParameters::SetFromClientConfiguration(const DynamoDBStreamsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DynamoDBStreamsClientConfiguration::BaseClientConfigClass&>(config));
}

void DynamoDBStreamsBuiltInParameters::SetFromClientConfiguration(const DynamoDBStreamsClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DynamoDBStreamsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
}

}  // namespace Endpoint
}  // namespace DynamoDBStreams
}  // namespace Aws
