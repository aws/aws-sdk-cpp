/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CustomerProfilesClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CustomerProfilesBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CustomerProfilesEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CustomerProfilesEndpointProvider,
                                                                        CustomerProfilesBuiltInParameters,
                                                                        CustomerProfilesClientContextParameters>;


class CustomerProfilesEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CustomerProfilesResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CustomerProfilesEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CustomerProfiles::CustomerProfilesEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CustomerProfilesResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CustomerProfilesEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CustomerProfilesEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CustomerProfiles
} // namespace Aws
