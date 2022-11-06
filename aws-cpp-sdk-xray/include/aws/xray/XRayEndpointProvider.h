/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/xray/XRayEndpointRules.h>


namespace Aws
{
namespace XRay
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using XRayClientContextParameters = Aws::Endpoint::ClientContextParameters;

using XRayClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using XRayBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the XRay Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using XRayEndpointProviderBase =
    EndpointProviderBase<XRayClientConfiguration, XRayBuiltInParameters, XRayClientContextParameters>;

using XRayDefaultEpProviderBase =
    DefaultEndpointProvider<XRayClientConfiguration, XRayBuiltInParameters, XRayClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_XRAY_API XRayEndpointProvider : public XRayDefaultEpProviderBase
{
public:
    using XRayResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    XRayEndpointProvider()
      : XRayDefaultEpProviderBase(Aws::XRay::XRayEndpointRules::Rules)
    {}

    ~XRayEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace XRay
} // namespace Aws
