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
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTests_EXPORTS.h>

namespace Aws {
namespace RpcV2CborCorpusTests {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RpcV2CborCorpusTestsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using RpcV2CborCorpusTestsClientConfiguration = Aws::Client::GenericClientConfiguration;
using RpcV2CborCorpusTestsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the RpcV2CborCorpusTests Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RpcV2CborCorpusTestsEndpointProviderBase =
    EndpointProviderBase<RpcV2CborCorpusTestsClientConfiguration, RpcV2CborCorpusTestsBuiltInParameters,
                         RpcV2CborCorpusTestsClientContextParameters>;

using RpcV2CborCorpusTestsDefaultEpProviderBase =
    DefaultEndpointProvider<RpcV2CborCorpusTestsClientConfiguration, RpcV2CborCorpusTestsBuiltInParameters,
                            RpcV2CborCorpusTestsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_RPCV2CBORCORPUSTESTS_API RpcV2CborCorpusTestsEndpointProvider : public RpcV2CborCorpusTestsDefaultEpProviderBase {
 public:
  using RpcV2CborCorpusTestsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RpcV2CborCorpusTestsEndpointProvider();

  ~RpcV2CborCorpusTestsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws
