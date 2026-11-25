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
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>

namespace Aws {
namespace ELBProxy {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ELBProxyClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ELBProxyClientConfiguration = Aws::Client::GenericClientConfiguration;
using ELBProxyBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ELBProxy Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ELBProxyEndpointProviderBase =
    EndpointProviderBase<ELBProxyClientConfiguration, ELBProxyBuiltInParameters, ELBProxyClientContextParameters>;

using ELBProxyDefaultEpProviderBase =
    BDDEndpointProvider<ELBProxyClientConfiguration, ELBProxyBuiltInParameters, ELBProxyClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ELBPROXY_API ELBProxyEndpointProvider : public ELBProxyDefaultEpProviderBase {
 public:
  using ELBProxyResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ELBProxyEndpointProvider();

  ~ELBProxyEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ELBProxy
}  // namespace Aws
