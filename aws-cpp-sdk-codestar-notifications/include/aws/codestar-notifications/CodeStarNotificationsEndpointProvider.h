/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/codestar-notifications/CodeStarNotificationsEndpointRules.h>


namespace Aws
{
namespace CodeStarNotifications
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CodeStarNotificationsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CodeStarNotificationsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CodeStarNotificationsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CodeStarNotificationsEndpointProvider,
                                                                        CodeStarNotificationsBuiltInParameters,
                                                                        CodeStarNotificationsClientContextParameters>;


class CodeStarNotificationsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CodeStarNotificationsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CodeStarNotificationsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CodeStarNotifications::CodeStarNotificationsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CodeStarNotificationsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CodeStarNotificationsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CodeStarNotificationsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CodeStarNotifications
} // namespace Aws
