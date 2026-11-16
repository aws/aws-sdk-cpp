/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectscheduling/ConnectScheduling_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ConnectScheduling {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ConnectSchedulingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ConnectSchedulingClientConfiguration = Aws::Client::GenericClientConfiguration;
using ConnectSchedulingBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ConnectScheduling Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConnectSchedulingEndpointProviderBase = EndpointProviderBase<ConnectSchedulingClientConfiguration, ConnectSchedulingBuiltInParameters,
                                                                   ConnectSchedulingClientContextParameters>;

using ConnectSchedulingDefaultEpProviderBase =
    BDDEndpointProvider<ConnectSchedulingClientConfiguration, ConnectSchedulingBuiltInParameters, ConnectSchedulingClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CONNECTSCHEDULING_API ConnectSchedulingEndpointProvider : public ConnectSchedulingDefaultEpProviderBase {
 public:
  using ConnectSchedulingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ConnectSchedulingEndpointProvider();

  ~ConnectSchedulingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ConnectScheduling
}  // namespace Aws
