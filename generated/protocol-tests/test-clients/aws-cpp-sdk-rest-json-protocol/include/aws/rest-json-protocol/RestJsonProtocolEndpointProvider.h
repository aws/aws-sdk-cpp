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
#include <aws/rest-json-protocol/RestJsonProtocolEndpointRules.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

namespace Aws {
namespace RestJsonProtocol {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RestJsonProtocolClientContextParameters = Aws::Endpoint::ClientContextParameters;

using RestJsonProtocolClientConfiguration = Aws::Client::GenericClientConfiguration;
using RestJsonProtocolBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the RestJsonProtocol Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RestJsonProtocolEndpointProviderBase =
    EndpointProviderBase<RestJsonProtocolClientConfiguration, RestJsonProtocolBuiltInParameters, RestJsonProtocolClientContextParameters>;

using RestJsonProtocolDefaultEpProviderBase =
    DefaultEndpointProvider<RestJsonProtocolClientConfiguration, RestJsonProtocolBuiltInParameters,
                            RestJsonProtocolClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_RESTJSONPROTOCOL_API RestJsonProtocolEndpointProvider : public RestJsonProtocolDefaultEpProviderBase {
 public:
  using RestJsonProtocolResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RestJsonProtocolEndpointProvider()
      : RestJsonProtocolDefaultEpProviderBase(Aws::RestJsonProtocol::RestJsonProtocolEndpointRules::GetRulesBlob(),
                                              Aws::RestJsonProtocol::RestJsonProtocolEndpointRules::RulesBlobSize) {}

  ~RestJsonProtocolEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace RestJsonProtocol
}  // namespace Aws
