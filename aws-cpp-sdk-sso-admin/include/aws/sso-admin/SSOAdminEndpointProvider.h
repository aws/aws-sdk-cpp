/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SSOAdminClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SSOAdminBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SSOAdminEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SSOAdminEndpointProvider,
                                                                        SSOAdminBuiltInParameters,
                                                                        SSOAdminClientContextParameters>;


class SSOAdminEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SSOAdminResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SSOAdminEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SSOAdmin::SSOAdminEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SSOAdminResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SSOAdminEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SSOAdminEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SSOAdmin
} // namespace Aws
