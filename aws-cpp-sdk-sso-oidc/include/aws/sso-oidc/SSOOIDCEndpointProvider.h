/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sso-oidc/SSOOIDCEndpointRules.h>


namespace Aws
{
namespace SSOOIDC
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SSOOIDCClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SSOOIDCClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SSOOIDCBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SSOOIDC Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SSOOIDCEndpointProviderBase =
    EndpointProviderBase<SSOOIDCClientConfiguration, SSOOIDCBuiltInParameters, SSOOIDCClientContextParameters>;

using SSOOIDCDefaultEpProviderBase =
    DefaultEndpointProvider<SSOOIDCClientConfiguration, SSOOIDCBuiltInParameters, SSOOIDCClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SSOOIDC_API SSOOIDCEndpointProvider : public SSOOIDCDefaultEpProviderBase
{
public:
    using SSOOIDCResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SSOOIDCEndpointProvider()
      : SSOOIDCDefaultEpProviderBase(Aws::SSOOIDC::SSOOIDCEndpointRules::Rules)
    {}

    ~SSOOIDCEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SSOOIDC
} // namespace Aws
