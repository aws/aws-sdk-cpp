/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodbstreams/DynamoDBStreamsClientConfiguration.h>
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>

namespace Aws {
namespace DynamoDBStreams {
namespace Endpoint {
using DynamoDBStreamsClientConfiguration = Aws::DynamoDBStreams::DynamoDBStreamsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DynamoDBStreamsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DYNAMODBSTREAMS_API DynamoDBStreamsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DynamoDBStreamsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DynamoDBStreamsClientConfiguration& config);
};

/**
 * The type for the DynamoDBStreams Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DynamoDBStreamsEndpointProviderBase =
    EndpointProviderBase<DynamoDBStreamsClientConfiguration, DynamoDBStreamsBuiltInParameters, DynamoDBStreamsClientContextParameters>;

using DynamoDBStreamsDefaultEpProviderBase =
    DefaultEndpointProvider<DynamoDBStreamsClientConfiguration, DynamoDBStreamsBuiltInParameters, DynamoDBStreamsClientContextParameters>;

}  // namespace Endpoint
}  // namespace DynamoDBStreams

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DYNAMODBSTREAMS_EXTERN template class AWS_DYNAMODBSTREAMS_API Aws::Endpoint::EndpointProviderBase<
    DynamoDBStreams::Endpoint::DynamoDBStreamsClientConfiguration, DynamoDBStreams::Endpoint::DynamoDBStreamsBuiltInParameters,
    DynamoDBStreams::Endpoint::DynamoDBStreamsClientContextParameters>;

AWS_DYNAMODBSTREAMS_EXTERN template class AWS_DYNAMODBSTREAMS_API Aws::Endpoint::DefaultEndpointProvider<
    DynamoDBStreams::Endpoint::DynamoDBStreamsClientConfiguration, DynamoDBStreams::Endpoint::DynamoDBStreamsBuiltInParameters,
    DynamoDBStreams::Endpoint::DynamoDBStreamsClientContextParameters>;
}  // namespace Endpoint

namespace DynamoDBStreams {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DYNAMODBSTREAMS_API DynamoDBStreamsEndpointProvider : public DynamoDBStreamsDefaultEpProviderBase {
 public:
  using DynamoDBStreamsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DynamoDBStreamsEndpointProvider();

  ~DynamoDBStreamsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DynamoDBStreams
}  // namespace Aws
