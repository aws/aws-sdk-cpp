/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

namespace Aws {
namespace LambdaMicrovms {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LambdaMicrovmsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using LambdaMicrovmsClientConfiguration = Aws::Client::GenericClientConfiguration;
using LambdaMicrovmsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the LambdaMicrovms Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LambdaMicrovmsEndpointProviderBase =
    EndpointProviderBase<LambdaMicrovmsClientConfiguration, LambdaMicrovmsBuiltInParameters, LambdaMicrovmsClientContextParameters>;

using LambdaMicrovmsDefaultEpProviderBase =
    DefaultEndpointProvider<LambdaMicrovmsClientConfiguration, LambdaMicrovmsBuiltInParameters, LambdaMicrovmsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_LAMBDAMICROVMS_API LambdaMicrovmsEndpointProvider : public LambdaMicrovmsDefaultEpProviderBase {
 public:
  using LambdaMicrovmsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LambdaMicrovmsEndpointProvider();

  ~LambdaMicrovmsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace LambdaMicrovms
}  // namespace Aws
