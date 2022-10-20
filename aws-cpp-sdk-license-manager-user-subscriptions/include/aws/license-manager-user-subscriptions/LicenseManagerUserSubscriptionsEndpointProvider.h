/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using LicenseManagerUserSubscriptionsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using LicenseManagerUserSubscriptionsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class LicenseManagerUserSubscriptionsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<LicenseManagerUserSubscriptionsEndpointProvider,
                                                                        LicenseManagerUserSubscriptionsBuiltInParameters,
                                                                        LicenseManagerUserSubscriptionsClientContextParameters>;


class LicenseManagerUserSubscriptionsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using LicenseManagerUserSubscriptionsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    LicenseManagerUserSubscriptionsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    LicenseManagerUserSubscriptionsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<LicenseManagerUserSubscriptionsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~LicenseManagerUserSubscriptionsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
