/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/account/AccountEndpointRules.h>


namespace Aws
{
namespace Account
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AccountClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AccountBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AccountEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AccountEndpointProvider,
                                                                        AccountBuiltInParameters,
                                                                        AccountClientContextParameters>;


class AccountEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AccountResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AccountEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Account::AccountEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AccountResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AccountEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AccountEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Account
} // namespace Aws
