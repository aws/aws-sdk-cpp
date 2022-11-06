/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/customer-profiles/CustomerProfilesEndpointRules.h>


namespace Aws
{
namespace CustomerProfiles
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CustomerProfilesClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CustomerProfilesClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CustomerProfilesBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CustomerProfiles Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CustomerProfilesEndpointProviderBase =
    EndpointProviderBase<CustomerProfilesClientConfiguration, CustomerProfilesBuiltInParameters, CustomerProfilesClientContextParameters>;

using CustomerProfilesDefaultEpProviderBase =
    DefaultEndpointProvider<CustomerProfilesClientConfiguration, CustomerProfilesBuiltInParameters, CustomerProfilesClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CUSTOMERPROFILES_API CustomerProfilesEndpointProvider : public CustomerProfilesDefaultEpProviderBase
{
public:
    using CustomerProfilesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CustomerProfilesEndpointProvider()
      : CustomerProfilesDefaultEpProviderBase(Aws::CustomerProfiles::CustomerProfilesEndpointRules::Rules)
    {}

    ~CustomerProfilesEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CustomerProfiles
} // namespace Aws
