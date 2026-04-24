/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeClientConfiguration.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeEndpointRules.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace BedrockDataAutomationRuntime {
namespace Endpoint {
using BedrockDataAutomationRuntimeClientConfiguration = Aws::BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BedrockDataAutomationRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BEDROCKDATAAUTOMATIONRUNTIME_API BedrockDataAutomationRuntimeBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BedrockDataAutomationRuntimeBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BedrockDataAutomationRuntimeClientConfiguration& config);
};

/**
 * The type for the BedrockDataAutomationRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BedrockDataAutomationRuntimeEndpointProviderBase =
    EndpointProviderBase<BedrockDataAutomationRuntimeClientConfiguration, BedrockDataAutomationRuntimeBuiltInParameters,
                         BedrockDataAutomationRuntimeClientContextParameters>;

using BedrockDataAutomationRuntimeDefaultEpProviderBase =
    DefaultEndpointProvider<BedrockDataAutomationRuntimeClientConfiguration, BedrockDataAutomationRuntimeBuiltInParameters,
                            BedrockDataAutomationRuntimeClientContextParameters>;

}  // namespace Endpoint
}  // namespace BedrockDataAutomationRuntime

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BEDROCKDATAAUTOMATIONRUNTIME_EXTERN template class AWS_BEDROCKDATAAUTOMATIONRUNTIME_API
    Aws::Endpoint::EndpointProviderBase<BedrockDataAutomationRuntime::Endpoint::BedrockDataAutomationRuntimeClientConfiguration,
                                        BedrockDataAutomationRuntime::Endpoint::BedrockDataAutomationRuntimeBuiltInParameters,
                                        BedrockDataAutomationRuntime::Endpoint::BedrockDataAutomationRuntimeClientContextParameters>;

AWS_BEDROCKDATAAUTOMATIONRUNTIME_EXTERN template class AWS_BEDROCKDATAAUTOMATIONRUNTIME_API
    Aws::Endpoint::DefaultEndpointProvider<BedrockDataAutomationRuntime::Endpoint::BedrockDataAutomationRuntimeClientConfiguration,
                                           BedrockDataAutomationRuntime::Endpoint::BedrockDataAutomationRuntimeBuiltInParameters,
                                           BedrockDataAutomationRuntime::Endpoint::BedrockDataAutomationRuntimeClientContextParameters>;
}  // namespace Endpoint

namespace BedrockDataAutomationRuntime {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BEDROCKDATAAUTOMATIONRUNTIME_API BedrockDataAutomationRuntimeEndpointProvider
    : public BedrockDataAutomationRuntimeDefaultEpProviderBase {
 public:
  using BedrockDataAutomationRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BedrockDataAutomationRuntimeEndpointProvider()
      : BedrockDataAutomationRuntimeDefaultEpProviderBase(
            Aws::BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeEndpointRules::GetRulesBlob(),
            Aws::BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeEndpointRules::RulesBlobSize) {}

  ~BedrockDataAutomationRuntimeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws
