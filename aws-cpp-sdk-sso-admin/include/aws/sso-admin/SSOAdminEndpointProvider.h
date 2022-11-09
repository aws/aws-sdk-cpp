/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sso-admin/SSOAdminEndpointRules.h>


namespace Aws
{
namespace SSOAdmin
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SSOAdminClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SSOAdminClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SSOAdminBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SSOAdmin Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SSOAdminEndpointProviderBase =
    EndpointProviderBase<SSOAdminClientConfiguration, SSOAdminBuiltInParameters, SSOAdminClientContextParameters>;

using SSOAdminDefaultEpProviderBase =
    DefaultEndpointProvider<SSOAdminClientConfiguration, SSOAdminBuiltInParameters, SSOAdminClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SSOADMIN_API SSOAdminEndpointProvider : public SSOAdminDefaultEpProviderBase
{
public:
    using SSOAdminResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SSOAdminEndpointProvider()
      : SSOAdminDefaultEpProviderBase(Aws::SSOAdmin::SSOAdminEndpointRules::Rules)
    {}

    ~SSOAdminEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SSOAdmin
} // namespace Aws
