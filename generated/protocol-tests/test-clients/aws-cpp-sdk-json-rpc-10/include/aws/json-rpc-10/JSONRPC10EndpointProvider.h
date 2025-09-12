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
#include <aws/json-rpc-10/JSONRPC10EndpointRules.h>
#include <aws/json-rpc-10/JSONRPC10_EXPORTS.h>

namespace Aws {
namespace JSONRPC10 {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using JSONRPC10ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using JSONRPC10ClientConfiguration = Aws::Client::GenericClientConfiguration;
using JSONRPC10BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the JSONRPC10 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using JSONRPC10EndpointProviderBase =
    EndpointProviderBase<JSONRPC10ClientConfiguration, JSONRPC10BuiltInParameters, JSONRPC10ClientContextParameters>;

using JSONRPC10DefaultEpProviderBase =
    DefaultEndpointProvider<JSONRPC10ClientConfiguration, JSONRPC10BuiltInParameters, JSONRPC10ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_JSONRPC10_API JSONRPC10EndpointProvider : public JSONRPC10DefaultEpProviderBase {
 public:
  using JSONRPC10ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  JSONRPC10EndpointProvider()
      : JSONRPC10DefaultEpProviderBase(Aws::JSONRPC10::JSONRPC10EndpointRules::GetRulesBlob(),
                                       Aws::JSONRPC10::JSONRPC10EndpointRules::RulesBlobSize) {}

  ~JSONRPC10EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace JSONRPC10
}  // namespace Aws
