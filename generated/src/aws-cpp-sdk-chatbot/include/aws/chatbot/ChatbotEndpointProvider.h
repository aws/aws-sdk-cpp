/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/chatbot/ChatbotEndpointRules.h>


namespace Aws
{
namespace chatbot
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ChatbotClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ChatbotClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ChatbotBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the chatbot Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ChatbotEndpointProviderBase =
    EndpointProviderBase<ChatbotClientConfiguration, ChatbotBuiltInParameters, ChatbotClientContextParameters>;

using ChatbotDefaultEpProviderBase =
    DefaultEndpointProvider<ChatbotClientConfiguration, ChatbotBuiltInParameters, ChatbotClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CHATBOT_API ChatbotEndpointProvider : public ChatbotDefaultEpProviderBase
{
public:
    using ChatbotResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ChatbotEndpointProvider()
      : ChatbotDefaultEpProviderBase(Aws::chatbot::ChatbotEndpointRules::GetRulesBlob(), Aws::chatbot::ChatbotEndpointRules::RulesBlobSize)
    {}

    ~ChatbotEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace chatbot
} // namespace Aws
