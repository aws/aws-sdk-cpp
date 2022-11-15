/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso/SSO_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sso/SSOEndpointRules.h>


namespace Aws
{
namespace SSO
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SSOClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SSOClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SSOBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SSO Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SSOEndpointProviderBase =
    EndpointProviderBase<SSOClientConfiguration, SSOBuiltInParameters, SSOClientContextParameters>;

using SSODefaultEpProviderBase =
    DefaultEndpointProvider<SSOClientConfiguration, SSOBuiltInParameters, SSOClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SSO_API SSOEndpointProvider : public SSODefaultEpProviderBase
{
public:
    using SSOResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SSOEndpointProvider()
      : SSODefaultEpProviderBase(Aws::SSO::SSOEndpointRules::Rules)
    {}

    ~SSOEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SSO
} // namespace Aws
