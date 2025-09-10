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
#include <aws/json-protocol/JsonProtocolEndpointRules.h>
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>

namespace Aws {
namespace JsonProtocol {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using JsonProtocolClientContextParameters = Aws::Endpoint::ClientContextParameters;

using JsonProtocolClientConfiguration = Aws::Client::GenericClientConfiguration;
using JsonProtocolBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the JsonProtocol Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using JsonProtocolEndpointProviderBase =
    EndpointProviderBase<JsonProtocolClientConfiguration, JsonProtocolBuiltInParameters, JsonProtocolClientContextParameters>;

using JsonProtocolDefaultEpProviderBase =
    DefaultEndpointProvider<JsonProtocolClientConfiguration, JsonProtocolBuiltInParameters, JsonProtocolClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_JSONPROTOCOL_API JsonProtocolEndpointProvider : public JsonProtocolDefaultEpProviderBase {
 public:
  using JsonProtocolResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  JsonProtocolEndpointProvider()
      : JsonProtocolDefaultEpProviderBase(Aws::JsonProtocol::JsonProtocolEndpointRules::GetRulesBlob(),
                                          Aws::JsonProtocol::JsonProtocolEndpointRules::RulesBlobSize) {}

  ~JsonProtocolEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace JsonProtocol
}  // namespace Aws
