/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessagingClientConfiguration.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ChimeSDKMessaging {
namespace Endpoint {
using ChimeSDKMessagingClientConfiguration = Aws::ChimeSDKMessaging::ChimeSDKMessagingClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ChimeSDKMessagingClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CHIMESDKMESSAGING_API ChimeSDKMessagingBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ChimeSDKMessagingBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ChimeSDKMessagingClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ChimeSDKMessagingClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ChimeSDKMessagingClientConfiguration& config);
};

/**
 * The type for the ChimeSDKMessaging Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ChimeSDKMessagingEndpointProviderBase = EndpointProviderBase<ChimeSDKMessagingClientConfiguration, ChimeSDKMessagingBuiltInParameters,
                                                                   ChimeSDKMessagingClientContextParameters>;

using ChimeSDKMessagingDefaultEpProviderBase =
    BDDEndpointProvider<ChimeSDKMessagingClientConfiguration, ChimeSDKMessagingBuiltInParameters, ChimeSDKMessagingClientContextParameters>;

}  // namespace Endpoint
}  // namespace ChimeSDKMessaging

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CHIMESDKMESSAGING_EXTERN template class AWS_CHIMESDKMESSAGING_API Aws::Endpoint::EndpointProviderBase<
    ChimeSDKMessaging::Endpoint::ChimeSDKMessagingClientConfiguration, ChimeSDKMessaging::Endpoint::ChimeSDKMessagingBuiltInParameters,
    ChimeSDKMessaging::Endpoint::ChimeSDKMessagingClientContextParameters>;

AWS_CHIMESDKMESSAGING_EXTERN template class AWS_CHIMESDKMESSAGING_API Aws::Endpoint::BDDEndpointProvider<
    ChimeSDKMessaging::Endpoint::ChimeSDKMessagingClientConfiguration, ChimeSDKMessaging::Endpoint::ChimeSDKMessagingBuiltInParameters,
    ChimeSDKMessaging::Endpoint::ChimeSDKMessagingClientContextParameters>;
}  // namespace Endpoint

namespace ChimeSDKMessaging {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CHIMESDKMESSAGING_API ChimeSDKMessagingEndpointProvider : public ChimeSDKMessagingDefaultEpProviderBase {
 public:
  using ChimeSDKMessagingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ChimeSDKMessagingEndpointProvider();

  ~ChimeSDKMessagingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ChimeSDKMessaging
}  // namespace Aws
