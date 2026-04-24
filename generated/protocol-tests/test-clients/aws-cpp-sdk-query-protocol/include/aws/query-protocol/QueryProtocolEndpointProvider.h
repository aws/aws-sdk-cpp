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
#include <aws/query-protocol/QueryProtocolEndpointRules.h>
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>

namespace Aws {
namespace QueryProtocol {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using QueryProtocolClientContextParameters = Aws::Endpoint::ClientContextParameters;

using QueryProtocolClientConfiguration = Aws::Client::GenericClientConfiguration;
using QueryProtocolBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the QueryProtocol Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using QueryProtocolEndpointProviderBase =
    EndpointProviderBase<QueryProtocolClientConfiguration, QueryProtocolBuiltInParameters, QueryProtocolClientContextParameters>;

using QueryProtocolDefaultEpProviderBase =
    DefaultEndpointProvider<QueryProtocolClientConfiguration, QueryProtocolBuiltInParameters, QueryProtocolClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_QUERYPROTOCOL_API QueryProtocolEndpointProvider : public QueryProtocolDefaultEpProviderBase {
 public:
  using QueryProtocolResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  QueryProtocolEndpointProvider()
      : QueryProtocolDefaultEpProviderBase(Aws::QueryProtocol::QueryProtocolEndpointRules::GetRulesBlob(),
                                           Aws::QueryProtocol::QueryProtocolEndpointRules::RulesBlobSize) {}

  ~QueryProtocolEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace QueryProtocol
}  // namespace Aws
