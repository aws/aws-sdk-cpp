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
#include <aws/lambda-core/LambdaCoreEndpointRules.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>

namespace Aws {
namespace LambdaCore {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LambdaCoreClientContextParameters = Aws::Endpoint::ClientContextParameters;

using LambdaCoreClientConfiguration = Aws::Client::GenericClientConfiguration;
using LambdaCoreBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the LambdaCore Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LambdaCoreEndpointProviderBase =
    EndpointProviderBase<LambdaCoreClientConfiguration, LambdaCoreBuiltInParameters, LambdaCoreClientContextParameters>;

using LambdaCoreDefaultEpProviderBase =
    DefaultEndpointProvider<LambdaCoreClientConfiguration, LambdaCoreBuiltInParameters, LambdaCoreClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_LAMBDACORE_API LambdaCoreEndpointProvider : public LambdaCoreDefaultEpProviderBase {
 public:
  using LambdaCoreResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LambdaCoreEndpointProvider()
      : LambdaCoreDefaultEpProviderBase(Aws::LambdaCore::LambdaCoreEndpointRules::GetRulesBlob(),
                                        Aws::LambdaCore::LambdaCoreEndpointRules::RulesBlobSize) {}

  ~LambdaCoreEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace LambdaCore
}  // namespace Aws
