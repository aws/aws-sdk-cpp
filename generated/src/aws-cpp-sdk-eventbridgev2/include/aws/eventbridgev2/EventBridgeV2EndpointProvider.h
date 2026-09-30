/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eventbridgev2/EventBridgeV2ClientConfiguration.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

namespace Aws {
namespace EventBridgeV2 {
namespace Endpoint {
using EventBridgeV2ClientConfiguration = Aws::EventBridgeV2::EventBridgeV2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using EventBridgeV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_EVENTBRIDGEV2_API EventBridgeV2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~EventBridgeV2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const EventBridgeV2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const EventBridgeV2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const EventBridgeV2ClientConfiguration& config);
};

/**
 * The type for the EventBridgeV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EventBridgeV2EndpointProviderBase =
    EndpointProviderBase<EventBridgeV2ClientConfiguration, EventBridgeV2BuiltInParameters, EventBridgeV2ClientContextParameters>;

using EventBridgeV2DefaultEpProviderBase =
    BDDEndpointProvider<EventBridgeV2ClientConfiguration, EventBridgeV2BuiltInParameters, EventBridgeV2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace EventBridgeV2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_EVENTBRIDGEV2_EXTERN template class AWS_EVENTBRIDGEV2_API Aws::Endpoint::EndpointProviderBase<
    EventBridgeV2::Endpoint::EventBridgeV2ClientConfiguration, EventBridgeV2::Endpoint::EventBridgeV2BuiltInParameters,
    EventBridgeV2::Endpoint::EventBridgeV2ClientContextParameters>;

AWS_EVENTBRIDGEV2_EXTERN template class AWS_EVENTBRIDGEV2_API Aws::Endpoint::BDDEndpointProvider<
    EventBridgeV2::Endpoint::EventBridgeV2ClientConfiguration, EventBridgeV2::Endpoint::EventBridgeV2BuiltInParameters,
    EventBridgeV2::Endpoint::EventBridgeV2ClientContextParameters>;
}  // namespace Endpoint

namespace EventBridgeV2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_EVENTBRIDGEV2_API EventBridgeV2EndpointProvider : public EventBridgeV2DefaultEpProviderBase {
 public:
  using EventBridgeV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  EventBridgeV2EndpointProvider();

  ~EventBridgeV2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace EventBridgeV2
}  // namespace Aws
