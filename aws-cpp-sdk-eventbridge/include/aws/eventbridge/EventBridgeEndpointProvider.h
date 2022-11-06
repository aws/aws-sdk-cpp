/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/eventbridge/EventBridgeEndpointRules.h>


namespace Aws
{
namespace EventBridge
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using EventBridgeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using EventBridgeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using EventBridgeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the EventBridge Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EventBridgeEndpointProviderBase =
    EndpointProviderBase<EventBridgeClientConfiguration, EventBridgeBuiltInParameters, EventBridgeClientContextParameters>;

using EventBridgeDefaultEpProviderBase =
    DefaultEndpointProvider<EventBridgeClientConfiguration, EventBridgeBuiltInParameters, EventBridgeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_EVENTBRIDGE_API EventBridgeEndpointProvider : public EventBridgeDefaultEpProviderBase
{
public:
    using EventBridgeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    EventBridgeEndpointProvider()
      : EventBridgeDefaultEpProviderBase(Aws::EventBridge::EventBridgeEndpointRules::Rules)
    {}

    ~EventBridgeEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace EventBridge
} // namespace Aws
