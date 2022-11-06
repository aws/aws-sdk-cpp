/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsEndpointRules.h>


namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using LicenseManagerUserSubscriptionsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using LicenseManagerUserSubscriptionsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using LicenseManagerUserSubscriptionsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the LicenseManagerUserSubscriptions Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LicenseManagerUserSubscriptionsEndpointProviderBase =
    EndpointProviderBase<LicenseManagerUserSubscriptionsClientConfiguration, LicenseManagerUserSubscriptionsBuiltInParameters, LicenseManagerUserSubscriptionsClientContextParameters>;

using LicenseManagerUserSubscriptionsDefaultEpProviderBase =
    DefaultEndpointProvider<LicenseManagerUserSubscriptionsClientConfiguration, LicenseManagerUserSubscriptionsBuiltInParameters, LicenseManagerUserSubscriptionsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseManagerUserSubscriptionsEndpointProvider : public LicenseManagerUserSubscriptionsDefaultEpProviderBase
{
public:
    using LicenseManagerUserSubscriptionsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    LicenseManagerUserSubscriptionsEndpointProvider()
      : LicenseManagerUserSubscriptionsDefaultEpProviderBase(Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsEndpointRules::Rules)
    {}

    ~LicenseManagerUserSubscriptionsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
