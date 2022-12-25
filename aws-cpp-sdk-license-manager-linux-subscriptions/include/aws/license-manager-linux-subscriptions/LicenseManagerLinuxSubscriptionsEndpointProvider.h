/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsEndpointRules.h>


namespace Aws
{
namespace LicenseManagerLinuxSubscriptions
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using LicenseManagerLinuxSubscriptionsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using LicenseManagerLinuxSubscriptionsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using LicenseManagerLinuxSubscriptionsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the LicenseManagerLinuxSubscriptions Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LicenseManagerLinuxSubscriptionsEndpointProviderBase =
    EndpointProviderBase<LicenseManagerLinuxSubscriptionsClientConfiguration, LicenseManagerLinuxSubscriptionsBuiltInParameters, LicenseManagerLinuxSubscriptionsClientContextParameters>;

using LicenseManagerLinuxSubscriptionsDefaultEpProviderBase =
    DefaultEndpointProvider<LicenseManagerLinuxSubscriptionsClientConfiguration, LicenseManagerLinuxSubscriptionsBuiltInParameters, LicenseManagerLinuxSubscriptionsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API LicenseManagerLinuxSubscriptionsEndpointProvider : public LicenseManagerLinuxSubscriptionsDefaultEpProviderBase
{
public:
    using LicenseManagerLinuxSubscriptionsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    LicenseManagerLinuxSubscriptionsEndpointProvider()
      : LicenseManagerLinuxSubscriptionsDefaultEpProviderBase(Aws::LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsEndpointRules::Rules)
    {}

    ~LicenseManagerLinuxSubscriptionsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
