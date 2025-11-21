/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationEndpointRules.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ComputeOptimizerAutomationClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ComputeOptimizerAutomationClientConfiguration = Aws::Client::GenericClientConfiguration;
using ComputeOptimizerAutomationBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ComputeOptimizerAutomation Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ComputeOptimizerAutomationEndpointProviderBase =
    EndpointProviderBase<ComputeOptimizerAutomationClientConfiguration, ComputeOptimizerAutomationBuiltInParameters,
                         ComputeOptimizerAutomationClientContextParameters>;

using ComputeOptimizerAutomationDefaultEpProviderBase =
    DefaultEndpointProvider<ComputeOptimizerAutomationClientConfiguration, ComputeOptimizerAutomationBuiltInParameters,
                            ComputeOptimizerAutomationClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_COMPUTEOPTIMIZERAUTOMATION_API ComputeOptimizerAutomationEndpointProvider
    : public ComputeOptimizerAutomationDefaultEpProviderBase {
 public:
  using ComputeOptimizerAutomationResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ComputeOptimizerAutomationEndpointProvider()
      : ComputeOptimizerAutomationDefaultEpProviderBase(
            Aws::ComputeOptimizerAutomation::ComputeOptimizerAutomationEndpointRules::GetRulesBlob(),
            Aws::ComputeOptimizerAutomation::ComputeOptimizerAutomationEndpointRules::RulesBlobSize) {}

  ~ComputeOptimizerAutomationEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
