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
#include <aws/iam-toolbox/IAMToolbox_EXPORTS.h>

namespace Aws {
namespace IAMToolbox {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using IAMToolboxClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IAMToolboxClientConfiguration = Aws::Client::GenericClientConfiguration;
using IAMToolboxBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IAMToolbox Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IAMToolboxEndpointProviderBase =
    EndpointProviderBase<IAMToolboxClientConfiguration, IAMToolboxBuiltInParameters, IAMToolboxClientContextParameters>;

using IAMToolboxDefaultEpProviderBase =
    BDDEndpointProvider<IAMToolboxClientConfiguration, IAMToolboxBuiltInParameters, IAMToolboxClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IAMTOOLBOX_API IAMToolboxEndpointProvider : public IAMToolboxDefaultEpProviderBase {
 public:
  using IAMToolboxResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  IAMToolboxEndpointProvider();

  ~IAMToolboxEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace IAMToolbox
}  // namespace Aws
