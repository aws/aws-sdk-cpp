/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/ChatbotEndpointProvider.h>
#include <aws/chatbot/internal/ChatbotEndpointRules.h>

namespace Aws {
namespace chatbot {
namespace Endpoint {
ChatbotEndpointProvider::ChatbotEndpointProvider()
    : ChatbotDefaultEpProviderBase(Aws::chatbot::ChatbotEndpointRules::GetRulesBlob(), Aws::chatbot::ChatbotEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace chatbot
}  // namespace Aws
