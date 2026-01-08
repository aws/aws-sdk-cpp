/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeEndpointProvider.h>

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

template class Aws::Endpoint::DefaultEndpointProvider<
    BedrockDataAutomationRuntime::Endpoint::BedrockDataAutomationRuntimeClientConfiguration,
    BedrockDataAutomationRuntime::Endpoint::BedrockDataAutomationRuntimeBuiltInParameters,
    BedrockDataAutomationRuntime::Endpoint::BedrockDataAutomationRuntimeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace BedrockDataAutomationRuntime {
namespace Endpoint {
void BedrockDataAutomationRuntimeBuiltInParameters::SetFromClientConfiguration(
    const BedrockDataAutomationRuntimeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BedrockDataAutomationRuntimeClientConfiguration::BaseClientConfigClass&>(config));
}

}  // namespace Endpoint
}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws
