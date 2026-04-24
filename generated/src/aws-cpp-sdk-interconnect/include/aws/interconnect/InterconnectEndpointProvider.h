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
#include <aws/interconnect/InterconnectEndpointRules.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>

namespace Aws {
namespace Interconnect {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using InterconnectClientContextParameters = Aws::Endpoint::ClientContextParameters;

using InterconnectClientConfiguration = Aws::Client::GenericClientConfiguration;
using InterconnectBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Interconnect Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using InterconnectEndpointProviderBase =
    EndpointProviderBase<InterconnectClientConfiguration, InterconnectBuiltInParameters, InterconnectClientContextParameters>;

using InterconnectDefaultEpProviderBase =
    DefaultEndpointProvider<InterconnectClientConfiguration, InterconnectBuiltInParameters, InterconnectClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_INTERCONNECT_API InterconnectEndpointProvider : public InterconnectDefaultEpProviderBase {
 public:
  using InterconnectResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  InterconnectEndpointProvider()
      : InterconnectDefaultEpProviderBase(Aws::Interconnect::InterconnectEndpointRules::GetRulesBlob(),
                                          Aws::Interconnect::InterconnectEndpointRules::RulesBlobSize) {}

  ~InterconnectEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Interconnect
}  // namespace Aws
