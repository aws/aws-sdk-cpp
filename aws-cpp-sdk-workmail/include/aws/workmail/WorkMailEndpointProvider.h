/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/workmail/WorkMailEndpointRules.h>


namespace Aws
{
namespace WorkMail
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using WorkMailClientContextParameters = Aws::Endpoint::ClientContextParameters;
using WorkMailBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class WorkMailEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<WorkMailEndpointProvider,
                                                                        WorkMailBuiltInParameters,
                                                                        WorkMailClientContextParameters>;


class WorkMailEndpointProvider : public DefaultEndpointProviderT
{
public:
    using WorkMailResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    WorkMailEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::WorkMail::WorkMailEndpointRules::Rules),
        clientConfiguration(config)
    {}

    WorkMailResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<WorkMailEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~WorkMailEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace WorkMail
} // namespace Aws
