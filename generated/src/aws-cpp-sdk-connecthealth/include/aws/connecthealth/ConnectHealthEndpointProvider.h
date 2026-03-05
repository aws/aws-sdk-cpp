/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealthEndpointRules.h>
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ConnectHealth {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ConnectHealthClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ConnectHealthClientConfiguration = Aws::Client::GenericClientConfiguration;
using ConnectHealthBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ConnectHealth Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConnectHealthEndpointProviderBase =
    EndpointProviderBase<ConnectHealthClientConfiguration, ConnectHealthBuiltInParameters, ConnectHealthClientContextParameters>;

using ConnectHealthDefaultEpProviderBase =
    DefaultEndpointProvider<ConnectHealthClientConfiguration, ConnectHealthBuiltInParameters, ConnectHealthClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CONNECTHEALTH_API ConnectHealthEndpointProvider : public ConnectHealthDefaultEpProviderBase {
 public:
  using ConnectHealthResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ConnectHealthEndpointProvider()
      : ConnectHealthDefaultEpProviderBase(Aws::ConnectHealth::ConnectHealthEndpointRules::GetRulesBlob(),
                                           Aws::ConnectHealth::ConnectHealthEndpointRules::RulesBlobSize) {}

  ~ConnectHealthEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ConnectHealth
}  // namespace Aws
