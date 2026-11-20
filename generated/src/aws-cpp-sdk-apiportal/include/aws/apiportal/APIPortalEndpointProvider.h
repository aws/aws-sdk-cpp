/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace APIPortal {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using APIPortalClientContextParameters = Aws::Endpoint::ClientContextParameters;

using APIPortalClientConfiguration = Aws::Client::GenericClientConfiguration;
using APIPortalBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the APIPortal Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using APIPortalEndpointProviderBase =
    EndpointProviderBase<APIPortalClientConfiguration, APIPortalBuiltInParameters, APIPortalClientContextParameters>;

using APIPortalDefaultEpProviderBase =
    BDDEndpointProvider<APIPortalClientConfiguration, APIPortalBuiltInParameters, APIPortalClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APIPORTAL_API APIPortalEndpointProvider : public APIPortalDefaultEpProviderBase {
 public:
  using APIPortalResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  APIPortalEndpointProvider();

  ~APIPortalEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace APIPortal
}  // namespace Aws
