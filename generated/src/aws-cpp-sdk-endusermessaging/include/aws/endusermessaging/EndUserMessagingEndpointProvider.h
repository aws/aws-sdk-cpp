/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

namespace Aws {
namespace EndUserMessaging {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using EndUserMessagingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using EndUserMessagingClientConfiguration = Aws::Client::GenericClientConfiguration;
using EndUserMessagingBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the EndUserMessaging Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EndUserMessagingEndpointProviderBase =
    EndpointProviderBase<EndUserMessagingClientConfiguration, EndUserMessagingBuiltInParameters, EndUserMessagingClientContextParameters>;

using EndUserMessagingDefaultEpProviderBase =
    BDDEndpointProvider<EndUserMessagingClientConfiguration, EndUserMessagingBuiltInParameters, EndUserMessagingClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ENDUSERMESSAGING_API EndUserMessagingEndpointProvider : public EndUserMessagingDefaultEpProviderBase {
 public:
  using EndUserMessagingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  EndUserMessagingEndpointProvider();

  ~EndUserMessagingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace EndUserMessaging
}  // namespace Aws
