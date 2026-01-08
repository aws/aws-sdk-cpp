/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/BedrockDataAutomationEndpointProvider.h>

namespace Aws {
#ifndef AWS_BEDROCKDATAAUTOMATION_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<BedrockDataAutomation::Endpoint::BedrockDataAutomationClientConfiguration,
                                                   BedrockDataAutomation::Endpoint::BedrockDataAutomationBuiltInParameters,
                                                   BedrockDataAutomation::Endpoint::BedrockDataAutomationClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<BedrockDataAutomation::Endpoint::BedrockDataAutomationClientConfiguration,
                                                      BedrockDataAutomation::Endpoint::BedrockDataAutomationBuiltInParameters,
                                                      BedrockDataAutomation::Endpoint::BedrockDataAutomationClientContextParameters>;
}  // namespace Endpoint
#endif

namespace BedrockDataAutomation {
namespace Endpoint {
void BedrockDataAutomationBuiltInParameters::SetFromClientConfiguration(const BedrockDataAutomationClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BedrockDataAutomationClientConfiguration::BaseClientConfigClass&>(config));
}

}  // namespace Endpoint
}  // namespace BedrockDataAutomation
}  // namespace Aws
