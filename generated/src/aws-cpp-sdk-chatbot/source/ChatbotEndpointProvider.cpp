/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/ChatbotEndpointProvider.h>
#include <aws/chatbot/internal/ChatbotEndpointRules.h>

namespace Aws {
#ifndef AWS_CHATBOT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<chatbot::Endpoint::ChatbotClientConfiguration,
                                                   chatbot::Endpoint::ChatbotBuiltInParameters,
                                                   chatbot::Endpoint::ChatbotClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<chatbot::Endpoint::ChatbotClientConfiguration,
                                                  chatbot::Endpoint::ChatbotBuiltInParameters,
                                                  chatbot::Endpoint::ChatbotClientContextParameters>;
}  // namespace Endpoint
#endif

namespace chatbot {
namespace Endpoint {
ChatbotEndpointProvider::ChatbotEndpointProvider()
    : ChatbotDefaultEpProviderBase(Aws::chatbot::ChatbotEndpointRules::GetRulesBlob(), Aws::chatbot::ChatbotEndpointRules::RulesBlobSize) {}

void ChatbotBuiltInParameters::SetFromClientConfiguration(const ChatbotClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ChatbotClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ChatbotBuiltInParameters::SetFromClientConfiguration(const ChatbotClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ChatbotClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ChatbotBuiltInParameters::SetServiceSpecificParameters(const ChatbotClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace chatbot
}  // namespace Aws
