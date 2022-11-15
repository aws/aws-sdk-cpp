/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/organizations/OrganizationsEndpointRules.h>


namespace Aws
{
namespace Organizations
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using OrganizationsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using OrganizationsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using OrganizationsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Organizations Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using OrganizationsEndpointProviderBase =
    EndpointProviderBase<OrganizationsClientConfiguration, OrganizationsBuiltInParameters, OrganizationsClientContextParameters>;

using OrganizationsDefaultEpProviderBase =
    DefaultEndpointProvider<OrganizationsClientConfiguration, OrganizationsBuiltInParameters, OrganizationsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ORGANIZATIONS_API OrganizationsEndpointProvider : public OrganizationsDefaultEpProviderBase
{
public:
    using OrganizationsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    OrganizationsEndpointProvider()
      : OrganizationsDefaultEpProviderBase(Aws::Organizations::OrganizationsEndpointRules::Rules)
    {}

    ~OrganizationsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Organizations
} // namespace Aws
