/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/BraketEndpointRules.h>
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Braket {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BraketClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BraketClientConfiguration = Aws::Client::GenericClientConfiguration;
using BraketBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Braket Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BraketEndpointProviderBase = EndpointProviderBase<BraketClientConfiguration, BraketBuiltInParameters, BraketClientContextParameters>;

using BraketDefaultEpProviderBase =
    DefaultEndpointProvider<BraketClientConfiguration, BraketBuiltInParameters, BraketClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BRAKET_API BraketEndpointProvider : public BraketDefaultEpProviderBase {
 public:
  using BraketResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BraketEndpointProvider()
      : BraketDefaultEpProviderBase(Aws::Braket::BraketEndpointRules::GetRulesBlob(), Aws::Braket::BraketEndpointRules::RulesBlobSize) {}

  ~BraketEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Braket
}  // namespace Aws
