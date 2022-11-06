/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/securityhub/SecurityHubEndpointRules.h>


namespace Aws
{
namespace SecurityHub
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SecurityHubClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SecurityHubClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SecurityHubBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SecurityHub Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SecurityHubEndpointProviderBase =
    EndpointProviderBase<SecurityHubClientConfiguration, SecurityHubBuiltInParameters, SecurityHubClientContextParameters>;

using SecurityHubDefaultEpProviderBase =
    DefaultEndpointProvider<SecurityHubClientConfiguration, SecurityHubBuiltInParameters, SecurityHubClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SECURITYHUB_API SecurityHubEndpointProvider : public SecurityHubDefaultEpProviderBase
{
public:
    using SecurityHubResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SecurityHubEndpointProvider()
      : SecurityHubDefaultEpProviderBase(Aws::SecurityHub::SecurityHubEndpointRules::Rules)
    {}

    ~SecurityHubEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SecurityHub
} // namespace Aws
