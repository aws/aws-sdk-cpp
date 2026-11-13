/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eventbridge/EventBridgeClientConfiguration.h>
#include <aws/eventbridge/EventBridge_EXPORTS.h>

namespace Aws {
namespace EventBridge {
namespace Endpoint {
using EventBridgeClientConfiguration = Aws::EventBridge::EventBridgeClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using EventBridgeClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_EVENTBRIDGE_API EventBridgeBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~EventBridgeBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const EventBridgeClientConfiguration& config);
  virtual void SetFromClientConfiguration(const EventBridgeClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const EventBridgeClientConfiguration& config);
};

/**
 * The type for the EventBridge Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EventBridgeEndpointProviderBase =
    EndpointProviderBase<EventBridgeClientConfiguration, EventBridgeBuiltInParameters, EventBridgeClientContextParameters>;

using EventBridgeDefaultEpProviderBase =
    BDDEndpointProvider<EventBridgeClientConfiguration, EventBridgeBuiltInParameters, EventBridgeClientContextParameters>;

}  // namespace Endpoint
}  // namespace EventBridge

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_EVENTBRIDGE_EXTERN template class AWS_EVENTBRIDGE_API Aws::Endpoint::EndpointProviderBase<
    EventBridge::Endpoint::EventBridgeClientConfiguration, EventBridge::Endpoint::EventBridgeBuiltInParameters,
    EventBridge::Endpoint::EventBridgeClientContextParameters>;

AWS_EVENTBRIDGE_EXTERN template class AWS_EVENTBRIDGE_API Aws::Endpoint::BDDEndpointProvider<
    EventBridge::Endpoint::EventBridgeClientConfiguration, EventBridge::Endpoint::EventBridgeBuiltInParameters,
    EventBridge::Endpoint::EventBridgeClientContextParameters>;
}  // namespace Endpoint

namespace EventBridge {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_EVENTBRIDGE_API EventBridgeEndpointProvider : public EventBridgeDefaultEpProviderBase {
 public:
  using EventBridgeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  EventBridgeEndpointProvider();

  ~EventBridgeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace EventBridge
}  // namespace Aws
