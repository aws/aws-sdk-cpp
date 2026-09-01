/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeEndpointProvider.h>
#include <aws/bedrock-data-automation-runtime/internal/BedrockDataAutomationRuntimeEndpointRules.h>

namespace Aws {
#ifndef AWS_BEDROCKDATAAUTOMATIONRUNTIME_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<
    BedrockDataAutomationRuntime::Endpoint::BedrockDataAutomationRuntimeClientConfiguration,
    BedrockDataAutomationRuntime::Endpoint::BedrockDataAutomationRuntimeBuiltInParameters,
    BedrockDataAutomationRuntime::Endpoint::BedrockDataAutomationRuntimeClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<
    BedrockDataAutomationRuntime::Endpoint::BedrockDataAutomationRuntimeClientConfiguration,
    BedrockDataAutomationRuntime::Endpoint::BedrockDataAutomationRuntimeBuiltInParameters,
    BedrockDataAutomationRuntime::Endpoint::BedrockDataAutomationRuntimeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace BedrockDataAutomationRuntime {
namespace Endpoint {
BedrockDataAutomationRuntimeEndpointProvider::BedrockDataAutomationRuntimeEndpointProvider()
    : BedrockDataAutomationRuntimeDefaultEpProviderBase(
          Aws::BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeEndpointRules::GetRulesBlob(),
          Aws::BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeEndpointRules::RulesBlobSize) {}

void BedrockDataAutomationRuntimeBuiltInParameters::SetFromClientConfiguration(
    const BedrockDataAutomationRuntimeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BedrockDataAutomationRuntimeClientConfiguration::BaseClientConfigClass&>(config));
}

void BedrockDataAutomationRuntimeBuiltInParameters::SetFromClientConfiguration(
    const BedrockDataAutomationRuntimeClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const BedrockDataAutomationRuntimeClientConfiguration::BaseClientConfigClass&>(config),
                             serviceName);
}

}  // namespace Endpoint
}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws
