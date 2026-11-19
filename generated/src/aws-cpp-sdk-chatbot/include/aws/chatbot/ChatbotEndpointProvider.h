/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/ChatbotClientConfiguration.h>
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace chatbot {
namespace Endpoint {
using ChatbotClientConfiguration = Aws::chatbot::ChatbotClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ChatbotClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CHATBOT_API ChatbotBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ChatbotBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ChatbotClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ChatbotClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ChatbotClientConfiguration& config);
};

/**
 * The type for the chatbot Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ChatbotEndpointProviderBase =
    EndpointProviderBase<ChatbotClientConfiguration, ChatbotBuiltInParameters, ChatbotClientContextParameters>;

using ChatbotDefaultEpProviderBase =
    BDDEndpointProvider<ChatbotClientConfiguration, ChatbotBuiltInParameters, ChatbotClientContextParameters>;

}  // namespace Endpoint
}  // namespace chatbot

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CHATBOT_EXTERN template class AWS_CHATBOT_API
    Aws::Endpoint::EndpointProviderBase<chatbot::Endpoint::ChatbotClientConfiguration, chatbot::Endpoint::ChatbotBuiltInParameters,
                                        chatbot::Endpoint::ChatbotClientContextParameters>;

AWS_CHATBOT_EXTERN template class AWS_CHATBOT_API
    Aws::Endpoint::BDDEndpointProvider<chatbot::Endpoint::ChatbotClientConfiguration, chatbot::Endpoint::ChatbotBuiltInParameters,
                                       chatbot::Endpoint::ChatbotClientContextParameters>;
}  // namespace Endpoint

namespace chatbot {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CHATBOT_API ChatbotEndpointProvider : public ChatbotDefaultEpProviderBase {
 public:
  using ChatbotResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ChatbotEndpointProvider();

  ~ChatbotEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace chatbot
}  // namespace Aws
